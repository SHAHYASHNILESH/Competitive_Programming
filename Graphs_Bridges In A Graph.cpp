//Bridges In A Graph
//Link:-https://www.codingninjas.com/codestudio/problems/bridges-in-graph_893026?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

#include<bits/stdc++.h>

void dfs(int node,int parent,int timer,vector<int>&disc,vector<int>&low,vector<vector<int>>&result,unordered_map<int,list<int>>&adj,unordered_map<int,bool>&vis){

    vis[node]=true;
    
    disc[node]=low[node]=timer++;

    for(auto i:adj[node]){

        if(i==parent)continue;

        if(!vis[i]){

            dfs(i,node,timer,disc,low,result,adj,vis);
            
            low[node]=min(low[node],low[i]);
            
            //CHECK FOR BRIDGE
            if(low[i]>disc[node]){

                vector<int>ans;

                ans.push_back(node);
                ans.push_back(i);

                result.push_back(ans);

            }

        }
        
        //BACK EDGE->ALREADY VISITED AND NOT PARENT
        else{
          
            low[node]=min(low[node],disc[i]);

        }

    }

}

vector<vector<int>> findBridges(vector<vector<int>> &edges, int v, int e) {
    // Write your code here

    unordered_map<int,list<int>>adj;

    for(int i=0;i<edges.size();i++){

        int u=edges[i][0];
        int v=edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);

    }

    int timer=0;

    vector<int>disc(v);
    vector<int>low(v);

    int parent=-1;

    unordered_map<int,bool>vis;

    for(int i=0;i<v;i++){

        disc[i]=-1;
        low[i]=-1;

    }

    vector<vector<int>>result;
    
    //DFS
    for(int i=0;i<v;i++){

        if(!vis[i]){

            dfs(i,parent,timer,disc,low,result,adj,vis);

        }
    }

    return result;
    
}