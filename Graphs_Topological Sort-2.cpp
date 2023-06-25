//Topological Sort
//Link:-https://www.codingninjas.com/codestudio/problems/topological-sort_982938?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

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
    
    //Create Adjacency List
    unordered_map<int,list<int>>adj;
    prepareAdj(adj,edges);

    // vector<bool>visited(v);
    // stack<int>s;

    // for(int i=0;i<v;i++){
        
    //     if(!visited[i]){

    //         topologicalSortDFS(i,visited,s,adj);

    //     }
    // }

    // vector<int>ans;

    // while(!s.empty()){

    //     ans.push_back(s.top());
    //     s.pop();

    // }

    // return ans;

    vector<int>indegree(v);

    for(auto i:adj){

        for(auto j:i.second){

            indegree[j]++;

        }
    }

    queue<int>q;

    for(int i=0;i<v;i++){
        
        if(indegree[i]==0)q.push(i);

    }

    vector<int>ans;

    while(!q.empty()){

        int front=q.front();
        
        q.pop();
        
        ans.push_back(front);

        for(auto i:adj[front]){

            indegree[i]--;

            if(indegree[i]==0)q.push(i);

        }

    }

    return ans;

}