//Detect Cycle In A Directed Graph
//Link:-https://www.codingninjas.com/codestudio/problems/detect-cycle-in-a-directed-graph_1062626?leftPanelTab=0

#include<bits/stdc++.h>

void prepareAdj(unordered_map<int,list<int>>&adj,vector<pair<int, int>>&edges){
  
    for(int i=0;i<edges.size();i++){

        int u=edges[i].first;
        int v=edges[i].second;

        adj[u].push_back(v);
        //adj[v].push_back(u);

    }
}

bool isCyclicDFS(int node,unordered_map<int,bool>&visited,unordered_map<int,bool>&visDFS,unordered_map<int,list<int>>&adj){

    visited[node]=true;
    visDFS[node]=true;

    for(auto i:adj[node]){

      if(!visited[i]){
        
        bool isCycle=isCyclicDFS(i,visited,visDFS,adj);
        if(isCycle)return true;

      }

      else if(visDFS[i]==true){
          
          return true;

      }

    }

    visDFS[node]=false;
    return false;

}

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
    // Write your code here.

    //SOLVED USING DFS
    unordered_map<int,list<int>>adj;
    prepareAdj(adj,edges);

    unordered_map<int,bool>visited;
    unordered_map<int,bool>visDFS;

    for(int i=1;i<=n;i++){

        if(!visited[i]){

            bool ans=isCyclicDFS(i,visited,visDFS,adj);
            
            if(ans==true)return true;

        }
    }

    return false;

}