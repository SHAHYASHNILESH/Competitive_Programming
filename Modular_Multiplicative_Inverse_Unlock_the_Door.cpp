//Modular Multiplicative Inverse:Modular Arithmetic for Division
//M is prime

//Unlock the door
//TC:O(T*log(N)+N)

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

const int N=1e5+10;
int fact[N];

int main()
{
    fact[0]=1;
    
    for(int i=1;i<N;i++){
        
        fact[i]=(fact[i-1]*1LL*i)%M;
    }
    
    int t;
    cin >> t;
    
    while(t--){
        
        int n,k;
        cin >> n >> k;
        
        int ans=fact[n];
        
        ans=(ans*1LL*fact[k])%M;
        
        int deno=(fact[k-n]*1LL*fact[n])%M;
        
        ans=(ans*1LL*binExp(deno,M-2,M))%M;
        
        cout << ans << endl;
    }
    
    return 0;
}