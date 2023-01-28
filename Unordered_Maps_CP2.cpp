//Question on Unordered Maps
//TC:O(1)

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string,int>m;
    
    int n;
    cin >> n;
    
    for(int i=0;i<=n-1;i++){
        
        string s;
        cin>>s;
        m[s]=m[s]+1;  //counting the frequency of occurence
    }
    
    int q;
    cin >> q;
    while(q--){
        
        string s;
        cin >> s;
        cout << m[s] << endl;
    }
    
    for(auto pr:m){
        
        cout << pr.first << " " << pr.second << endl;
    }
    
    return 0;
}