//GCD(Iterative Approach)
//Relation between LCM and GCD:-LCM(a,b)*GCD(a,b)=a*b
//Eucler's Theorem:-GCD(a,b)=GCD(a-b,b) or GCD(a%b,b)

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    
    if(a==0)return b;
    if(b==0)return a;
    
    while(a!=b){
        
        if(a>b)a=a-b;
        else b=b-a;
        
    }
    
    return a;
    
}

int main()
{
    int a=24,b=72;
    
    cout << gcd(a,b) << endl;

    return 0;
    
}