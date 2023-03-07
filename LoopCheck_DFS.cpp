//Checking for Cycle in a Graph
//TC:O(V+E)

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
vector<int>g[N];

bool visited[N];

bool dfs(int vertex,int par){
    
    //Take action on vertex after entering the vertex
    visited[vertex]=true;
    bool isLoopExists=false;
    
    for(auto child:g[vertex]){
        
        //Take action on child before entering the child node
        if(visited[child] && child==par)continue;
        if(visited[child]) return true;
        
        isLoopExists|=dfs(child,vertex);
        
        //Take action on child after exiting child node
    }
    
    return isLoopExists;
    //Take action on vertex before exiting the vertex
}

int main()
{
    int n,m;
    cin >> n >> m;
    
    for(int i=0;i<m;i++){
        
        int v1,v2;
        cin >> v1 >> v2;
        
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    
    int ct=0;
    bool isLoopExists=false;
    
    for(int i=1;i<=n;i++){
        
        if(visited[i])continue;
        
        if(dfs(i,0)){
            
            isLoopExists=true;
            break;
        }
        
    }
    
    cout<< isLoopExists << endl;
    
    return 0;
}