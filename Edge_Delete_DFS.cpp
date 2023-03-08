//Deleting Edge in Tree using DFS

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
const int M=1e9+7;

vector<int>g[N];
int subtree_sum[N];
int val[N];

void dfs(int v,int p=0){
    
    subtree_sum[v]+=val[v];
    
    for(auto child:g[v]){
        
        if(child==p)continue;
        dfs(child,v);
        subtree_sum[v]+=subtree_sum[child];
    }
}

int main()
{
    int n;
    cin >> n;
    
    for(int i=0;i<n-1;i++){
        
        int v1,v2;
        cin >> v1 >> v2;
        
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    
    for(int i=1;i<=n;i++){
        int x;
        cin >> val[i];
    }
    
    dfs(1);
    
    long long ans=0;
    
    for(int i=2;i<=n;i++){
        
        int part1=subtree_sum[i];
        int part2=subtree_sum[i]-part1;
        ans=max(ans,(part1*1LL*part2)%M);
    }
    
    cout << ans << endl;
    
    return 0;
}