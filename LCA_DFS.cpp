//LCA of Tree
//TC:O(N)
//Binary Uplifitng Algorithm->TC:O(log(n)) for LCA

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
vector<int>g[N];
int par[N];


void dfs(int v,int p=0){
    
    par[v]=p;
    
    for(auto child:g[v]){
        
        if(child==p)continue;
        dfs(child,v);
    }
}

vector<int>path(int v){
    
    vector<int>ans;
    
    while(v!=0){
        
        ans.push_back(v);
        v=par[v];
    }
    
    reverse(ans.begin(),ans.end());
    return ans;
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
    
    dfs(1);
    
    int x,y;
    cin >> x >> y;
    
    vector<int>path_x=path(x);
    vector<int>path_y=path(y);
    
    int mn_ln=min(path_x.size(),path_y.size());
    int lca=-1;
    
    for(int i=0;i<mn_ln;i++){
        if(path_x[i]==path_y[i]){
            lca=path_x[i];
        }
        else{
            break;
        }
    }
    
    cout << lca << endl;
    
    return 0;
}