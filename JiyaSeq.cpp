//Jiya's Sequence

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--){
        
        int n;
        cin >> n;
        long long product=1;
        
        for(int i=0;i<n;++i){
            int x;
            cin >> x;
            product=product*x;
        }
        
        int res=product%10;
        
        if(res==2||res==3||res==5){
            cout<<"Yes\n";
        }
        
        else{
            cout<<"No\n";
        }
    }
    return 0;
}