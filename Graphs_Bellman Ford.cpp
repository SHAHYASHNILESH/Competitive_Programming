//Bellman Ford
//Link:-https://www.codingninjas.com/codestudio/problems/bellmon-ford_2041977?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

#include <bits/stdc++.h>
 
int bellmonFord(int n, int m, int src, int dest, vector<vector<int>> &edges) {
    // Write your code here.

    vector<int>dist(n+1,1e9);

    dist[src]=0;

    for(int i=1;i<=n;i++){

        for(int j=0;j<m;j++){

            int u=edges[j][0];
            int v=edges[j][1];
            int w=edges[j][2];

            if(dist[u]!=1e9 && ((dist[u]+w)<dist[v])){

                dist[v]=dist[u]+w;

            }
        }
    }

    bool flag=false;

    //CHECK FOR EXISTENCE OF CYCLE
    for(int j=0;j<m;j++){

            int u=edges[j][0];
            int v=edges[j][1];
            int w=edges[j][2];

            if(dist[u]!=1e9 && (dist[u]+w<dist[v])){

                flag=true;

            }
    }

    if(flag==false)return dist[dest];

    else return -1;

}