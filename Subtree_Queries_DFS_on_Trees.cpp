//DFS on Trees
//Pre-Computation using DFS(Subtree Queries)

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
vector<int>g[N];
int subtree_sum[N];
int even_ct[N];

void dfs(int vertex,int par=0){
    
    //Take action on vertex after entering the vertex
    if(vertex%2==0){
        
        even_ct[vertex]++;
    }
    
    subtree_sum[vertex]+=vertex;
    
    for(auto child:g[vertex]){
        
        //Take action on child before entering the child node
        if(child==par) continue;

        dfs(child,vertex);
        
        subtree_sum[vertex]+=subtree_sum[child];
        even_ct[vertex]+=even_ct[child];
        //Take action on child after exiting child node
    }
    
    //Take action on vertex before exiting the vertex
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
    for(int i=1;i<=n;i++){
        cout << subtree_sum[i] << " " << even_ct[i] << endl;
    }
    
    // int q;
    // cin >> q;
    
    // while(q--){
        
    //     int v;
    //     cin >> v;
    //     cout << subtree_sum[v] << " " << even_ct[v] << endl;
    // }
    
    return 0;
}