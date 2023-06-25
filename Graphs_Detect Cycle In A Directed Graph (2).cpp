//Detect Cycle In A Directed Graph
//Link:-https://www.codingninjas.com/codestudio/problems/detect-cycle-in-a-directed-graph_1062626?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

#include<bits/stdc++.h>

void prepareAdj(unordered_map<int,list<int>>&adj,vector<pair<int, int>>&edges){
  
    for(int i=0;i<edges.size();i++){

        int u=edges[i].first-1;
        int v=edges[i].second-1;

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
    // unordered_map<int,list<int>>adj;
    // prepareAdj(adj,edges);

    // unordered_map<int,bool>visited;
    // unordered_map<int,bool>visDFS;

    // for(int i=1;i<=n;i++){

    //     if(!visited[i]){

    //         bool ans=isCyclicDFS(i,visited,visDFS,adj);
            
    //         if(ans==true)return true;

    //     }
    // }

    // return false;


    //SOLVED USING BFS(Kahn's Algorithm)
    //Create Adjacency List
    unordered_map<int,list<int>>adj;
    prepareAdj(adj,edges);

    vector<int>indegree(n);

    for(auto i:adj){

        for(auto j:i.second){

            indegree[j]++;

        }
    }

    queue<int>q;

    for(int i=0;i<n;i++){
        
        if(indegree[i]==0)q.push(i);

    }

    //vector<int>ans;
    int cnt=0;

    while(!q.empty()){

        int front=q.front();
        
        q.pop();
        
        //ans.push_back(front);
        cnt++;

        for(auto i:adj[front]){

            indegree[i]--;

            if(indegree[i]==0)q.push(i);

        }

    }

    if(cnt==n)return false;
    else return true;

    //return ans;

}