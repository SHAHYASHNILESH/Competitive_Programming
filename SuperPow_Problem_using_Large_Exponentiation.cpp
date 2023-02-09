//LeetCode SuperPow Problem

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

const int M=1337;

int binExpIter(int a,int b,int m){
    
    int ans=1;
    
    while(b){
        
        if(b&1){
            
            ans=(ans*1LL*a)%m;
        }
        
        a=(a*1LL*a)%m;
        b>>=1;
        
    }
    
    return ans;
}

int superPow(int a,vector<int>&b){
    
    int bmod=0;
    
    for(auto val:b){
        
        bmod=(bmod*10+val)%1140;
    }
    
    return binExpIter(a,bmod,M);
}

int main()
{
    
    int a,n;
    cin >> a >> n;
    
    vector<int>b(n);
    
    for(int i=0;i<n;i++){
        
        cin >> b[i];
    }
    
    cout << superPow(a,b)<<endl;
    
    return 0;
}