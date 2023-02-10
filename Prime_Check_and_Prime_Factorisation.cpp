//Prime Check and Prime Factorisation
//TC:O(sqrt(n)) for both 


#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    bool is_prime=true;
    
    for(int i=2;i*i<=n;i++){
        
        if(n%i==0){
            
            is_prime=false;
            break;
        }
    }
    
    cout << is_prime << endl;
    
    vector<int>prime_factors;
    
    for(int i=2;i*i<=n;i++){
        
        while(n%i==0){
            
            prime_factors.push_back(i);
            n/=i;
        }
    }
    
    if(n>1){
        
        prime_factors.push_back(n);
    }
    
    for(auto ele:prime_factors){
        
        cout << ele << " ";
    }
    
    cout << endl;
    
    return 0;
}