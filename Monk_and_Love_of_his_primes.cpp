//Monk and his Love for Primes

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    for(int i=0;i<s.size();++i){
        
        if(s[i]>='a' && s[i]<='z'){
            
            s[i]=s[i]-32;
            
        }
        
        else if(s[i]>='A' && s[i]<='Z'){
            
            s[i]=s[i]+32;
        }
    }
    
    
    int res=0;
    
    for(int i=0;i<s.size();i++){
        
        if(s[i]>='a' && s[i]<='z'){
            
            res-=(int)s[i];
        }
        else if(s[i]>='A' && s[i]<='Z'){
            
            res+=(int)s[i];
        }
    }
    
    if(res<0){
        
        res=res*-1;
    }
    
    bool is_prime = true;
    
    if (res== 0 || res== 1) {
      is_prime = false;
    }
    
    for (int i=2;i<=res/2;++i){
        
      if (res% i == 0) {
          
        is_prime = false;
        break;
      }
    }
    
    if (is_prime){
       cout << 1 << endl; 
    }
    
    else{
       cout << 0 << endl; 
    }

    return 0;
}