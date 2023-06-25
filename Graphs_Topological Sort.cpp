//Topological Sort
//Link:-https://www.codingninjas.com/codestudio/problems/topological-sort_982938?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0

#include <bits/stdc++.h>

void prepareAdj(unordered_map<int,list<int>>&adj,vector<vector<int>> &edges){

  for (int i=0;i<edges.size();i++) {

    int u = edges[i][0];
    int v = edges[i][1];

    adj[u].push_back(v);
    // adj[v].push_back(u);

  }

}

void topologicalSortDFS(int node,vector<bool>&visited,stack<int>&s,unordered_map<int,list<int>>&adj){

    visited[node]=true;

    for(auto i:adj[node]){

        if(!visited[i]){

            topologicalSortDFS(i,visited,s,adj);
        
        }
    }

    s.push(node);

}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e){
    
    // Write your code here

    unordered_map<int,list<int>>adj;
    prepareAdj(adj,edges);

    vector<bool>visited(v);
    stack<int>s;

    for(int i=0;i<v;i++){
        
        if(!visited[i]){

            topologicalSortDFS(i,visited,s,adj);

        }
    }

    vector<int>ans;

    while(!s.empty()){

        ans.push_back(s.top());
        s.pop();

    }

    return ans;

}