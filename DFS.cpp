//Depth First Search(DFS)
//TC:O(V+E)

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
vector<int>g[N];

bool visited[N];

void dfs(int vertex){
    
    cout << vertex << endl;
    //Take action on vertex after entering the vertex
    visited[vertex]=true;
    
    for(auto child:g[vertex]){
        
        cout<<"par "<<vertex<<" child "<<child<<endl;
        
        //Take action on child before entering the child node
        if(visited[child]) continue;
        
        dfs(child);
        
        //Take action on child after exiting child node
    }
    
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
    
    dfs(1);
    
    return 0;
}