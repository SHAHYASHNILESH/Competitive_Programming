//BFS in Graph
//Link:-https://www.codingninjas.com/codestudio/problems/bfs-in-graph_973002?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0

#include <bits/stdc++.h>

void prepareAdj(unordered_map<int,set<int>>&adj,vector<pair<int, int>>&edges){
    
    for(int i=0;i<edges.size();i++){

        int u=edges[i].first;
        int v=edges[i].second;

        adj[u].insert(v);
        adj[v].insert(u);

    }
}

void bfs(unordered_map<int,set<int>>&adj,unordered_map<int,bool>&visited,vector<int>&ans,int node){
    
    queue<int>q;
    q.push(node);
    
    visited[node]=true;
    
    while(!q.empty()){

        int frontNode=q.front();
        q.pop();

        ans.push_back(frontNode);

        for(auto i:adj[frontNode]){
            
            if(!visited[i]){
                
                q.push(i);
                visited[i]=true;

            }
        }
    }
}

vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    // Write your code here

    unordered_map<int,set<int>>adj;
    vector<int>ans;
    unordered_map<int,bool>visited;

    prepareAdj(adj,edges);
    
    //Traverse through all the components
    for(int i=0;i<vertex;i++){

        if(!visited[i]){
            
            bfs(adj,visited,ans,i);

        }
    }

    return ans;

}