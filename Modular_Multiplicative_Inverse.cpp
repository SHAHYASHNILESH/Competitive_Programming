//Modular Multiplicative Inverse:Modular Arithmetic for Division
//M is prime

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;

int binExp(int a,int b,int m){
    
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

//There are N children and K toffees.K<N
//Count the number of ways to distribute toffee among N students such that each student get one toffee only -->nCk,%M,M=1e9+7,N<10^6,K<N<10^6,Q<10^5
//n!/((n-k)!*k!) is to be found

const int N=1e6+10;
int fact[N];

int main()
{
    cout << binExp(2,M-2,M)<< endl;
    fact[0]=1;
    
    for(int i=1;i<N;i++){
        
        fact[i]=(fact[i-1]*1LL*i)%M;
    }
    
    int q;
    cin >> q;
    
    while(q--){
        
        int n,k;
        cin >> n >> k;
        
        int ans=fact[n];
        
        int deno=(fact[n-k]*1LL*fact[k])%M;
        
        ans=(ans*binExp(deno,M-2,M))%M;
        
        cout << ans << endl;
    }
    
    return 0;
}