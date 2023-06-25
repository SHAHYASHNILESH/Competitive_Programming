//DFS Traversal
//Link:-https://www.codingninjas.com/codestudio/problems/dfs-traversal_630462?leftPanelTab=0

#include<bits/stdc++.h>

void prepareAdj(unordered_map<int,list<int>>&adj,vector<vector<int>> &edges){
    
    for(int i=0;i<edges.size();i++){

        int u=edges[i][0];
        int v=edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);

    }
}

void dfs(int node,unordered_map<int,bool>&visited,unordered_map<int,list<int>>&adj,vector<int>&component){

    component.push_back(node);
    visited[node]=true;

    for(auto i:adj[node]){
        
        if(!visited[i]){

            dfs(i,visited,adj,component);

        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    unordered_map<int,list<int>>adj;
    prepareAdj(adj,edges);

    vector<vector<int>>ans;
    unordered_map<int,bool>visited;
    
    for(int i=0;i<V;i++){

        if(!visited[i]){

            vector<int>component;
            dfs(i,visited,adj,component);
            ans.push_back(component);

        }
    }

    return ans;

}