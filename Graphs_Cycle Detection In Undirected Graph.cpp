//Cycle Detection In Undirected Graph
//Link:-https://www.codingninjas.com/codestudio/problems/cycle-detection-in-undirected-graph_1062670?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0

#include<bits/stdc++.h>

void prepareAdj(unordered_map<int,list<int>>&adj,vector<vector<int>> &edges){
    
    for(int i=0;i<edges.size();i++){

        int u=edges[i][0];
        int v=edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);

    }
}

bool isCyclicBFS(int src,unordered_map<int,bool>&visited,unordered_map<int,list<int>>&adj){

    unordered_map<int,int>parent;

    parent[src]=-1;
    visited[src]=true;
    queue<int>q;
    q.push(src);

    while(!q.empty()){

        int front=q.front();
        q.pop();

        for(auto i:adj[front]){

            if(visited[i]==true && i!=parent[front])return true;
            
            else if(!visited[i]){

                visited[i]=true;
                q.push(i);
                parent[i]=front;
                
            }
        }
    }

    return false;

}

bool isCyclicDFS(int node,int parent,unordered_map<int,bool>&visited,unordered_map<int,list<int>>&adj){

    visited[node]=true;

    for(auto i:adj[node]){

        if(!visited[i]){

            bool isCycleDetected=isCyclicDFS(i,node,visited,adj);

            if(isCycleDetected)return true;
        }

        else if(i!=parent)return true;

    }

    return false;

}

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // Write your code here.
    
    //SOLVED USING BFS
    // unordered_map<int,list<int>>adj;
    // prepareAdj(adj,edges);

    // unordered_map<int,bool>visited;

    // for(int i=0;i<n;i++){

    //     if(!visited[i]){

    //         bool ans=isCyclicBFS(i,visited,adj);
            
    //         if(ans==true)return "Yes";

    //     }
    // }

    // return "No";



    //SOLVED USING DFS
    unordered_map<int,list<int>>adj;
    prepareAdj(adj,edges);

    unordered_map<int,bool>visited;

    for(int i=0;i<n;i++){

        if(!visited[i]){

            bool ans=isCyclicDFS(i,-1,visited,adj);
            
            if(ans==true)return "Yes";

        }
    }

    return "No";
    
}
