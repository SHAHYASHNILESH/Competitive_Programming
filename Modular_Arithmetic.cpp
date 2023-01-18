//Modular Arithmetic(Factorial Example)
//Preferred value of M=10^9+7

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,M=47;
    cin >> n;
    
    long long f=1;
    
    for(int i=1;i<=n;i++){
        
        f=(f*i)%M;
    }
    
    cout << f << endl;
    
    return 0;
}