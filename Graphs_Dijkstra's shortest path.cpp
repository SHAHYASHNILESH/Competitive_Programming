//Dijkstra's shortest path
//Link:-https://www.codingninjas.com/codestudio/problems/dijkstra-s-shortest-path_920469?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

#include <bits/stdc++.h>

vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    // Write your code here.

    unordered_map<int,list<pair<int,int>>>adj;

    for(int i=0;i<edges;i++){

        int u=vec[i][0];
        int v=vec[i][1];
        int w=vec[i][2];

        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));

    }

    vector<int>dist(vertices);

    for(int i=0;i<vertices;i++){

        dist[i]=INT_MAX;

    }

    set<pair<int,int>>st;

    dist[source]=0;

    st.insert(make_pair(0,source));

    while(!st.empty()){

        auto top=*(st.begin());

        int nodedist=top.first;
        int node=top.second;

        st.erase(st.begin());

        for(auto i:adj[node]){

            if(nodedist+i.second<dist[i.first]){

                auto record=st.find(make_pair(dist[i.first],i.first));

                if(record!=st.end()){

                    st.erase(record);

                }

                dist[i.first]=nodedist+i.second;
                st.insert(make_pair(dist[i.first],i.first));

            }
        }
    }

    return dist;
    
}
