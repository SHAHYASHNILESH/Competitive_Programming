//Sieve Algorithm for Prime Numbers

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

const int N=1e7+10;
vector<bool>is_prime(N,1);

int main()
{
    
    //TC:(nlog(log(n))) for Sieve Algorithm
    is_prime[0]=is_prime[1]=false;
    
    for(int i=2;i<N;i++){
        
        if(is_prime[i]==true){
            
            for(int j=2*i;j<N;j+=i){
                
                is_prime[j]=false;
            }
        }
    }
    
    //TC:O(q*O(1)) for q queries and n numbers(whose prime check is to be done)
    //Q<=10^7,N<=10^7
    int q;
    cin >> q;
    
    while(q--){
        
        int num;
        cin >> num;
        
        if(is_prime[num]){
            
            cout << "Prime Number\n";
        }
        
        else{
            
            cout << "Not Prime Number\n";
        }
    }
    
    return 0;
}