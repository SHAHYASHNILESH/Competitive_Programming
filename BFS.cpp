//BFS(Breadth First Search)
//TC:O(V+E)
//BFS must be used to find shortest path between nodes in a non weighted graph

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;

vector<int>g[N];
int visited[N];
int level[N];

void bfs(int source){
    
    queue<int> q;
    q.push(source);
    visited[source]=1;
    
    while(!q.empty()){
       
       int curr_v=q.front();
       q.pop();
       cout << curr_v << " ";
       
       for(auto child:g[curr_v]){
           
          if(!visited[child]){
              
           q.push(child);
           visited[child]=1;
           level[child]=level[curr_v]+1;
          } 
       }
    }
    cout << endl;
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
    
    bfs(1);
    
    for(int i=1;i<=n;i++){
        cout << i << " " << level[i] << endl;
    }
    
    
    return 0;
}