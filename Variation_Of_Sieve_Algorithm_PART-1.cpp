//Variations of Sieve Algorithm(Lower Prime,Highest Prime and Prime Factors of Numbers)

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

const int N=1e7+10;
vector<bool>is_prime(N,1);
vector<int>lp(N,0),hp(N,0);

int main()
{
    
    //TC:(nlog(log(n))) for Sieve Algorithm
    is_prime[0]=is_prime[1]=false;
    
    for(int i=2;i<N;i++){
        
        if(is_prime[i]==true){
            
            lp[i]=hp[i]=i;
            
            for(int j=2*i;j<N;j+=i){
                
                is_prime[j]=false;
                hp[j]=i;
                if(lp[j]==0){
                    
                    lp[j]=i;
                }
            }
        }
    }
    
    int num;
    cin >> num;
    vector<int>prime_factors;
    
    while(num>1){
        
        int prime_factor=hp[num];
        
        while(num%prime_factor==0){
            
            prime_factors.push_back(prime_factor);
            num/=prime_factor;
        }
    }
    
    for(auto ele:prime_factors){
        
        cout << ele << " "; 
    }
    
    cout << endl;
    
    return 0;
}