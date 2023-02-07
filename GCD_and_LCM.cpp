//GCD and LCM using Euclid's Algorithm
//TC:O(logn)

//gcd(gcd(a,b),c) can be used for finding gcd of 3 numbers

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    
    if(b==0){
        
        return a;
    }
    
    return gcd(b,a%b);
}

int main()
{
    int a,b;
    
    // a is dividend and b is divisor
    
    cin >> a >> b;
    
    cout << gcd(a,b) << endl;
    
    cout << __gcd(a,b) << endl; //Built in Function for GCD
    
    cout << a*b/gcd(a,b) << endl;
    
    return 0;
}