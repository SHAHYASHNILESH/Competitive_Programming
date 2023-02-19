//Adjacency Matrix Representation of Graphs
//SC:O(N^2) (where N is number of vertices) which is a problem in this representational form
//N<=10^3

//Adjacency List Representation of Graphs
//SC:O(N+E) where N is number of vertices and E is number of edges
//N can be 10^5 but E should not exceed 10^7

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

const int N=1e3+10;
int graph1[N][N];

vector<int>graph2[N];

int main()
{
    int n,m;
    cin >> n >> m;
    
    for(int i=0;i<m;i++){
        
        int v1,v2;
        cin >> v1 >> v2;
        
        //Adjacency Matrix Creation
        graph1[v1][v2]=1;
        graph1[v2][v1]=1;
        
        //Adjacency List Creation(Most Commonly used way of representation)
        graph2[v1].push_back(v2);
        graph2[v2].push_back(v1);
        
    }
    
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            
            cout << graph[i][j] << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}