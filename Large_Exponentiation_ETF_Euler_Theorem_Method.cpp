//Large Exponentiation, ETF & Euler's Theorem
//When the value of b is greater than 10^9

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

const int M=1e9+7;

int binExpIter(int a,long long b,int m){
    
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

int main()
{
    //50^64^32
    cout << binExpIter(50,binExpIter(64,32,M-1),M) << endl;
    
    return 0;
}