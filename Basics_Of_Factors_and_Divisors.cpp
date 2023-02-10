//Basics of Factors and Divisiors

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int ct=0,sum=0;
    
    for(int i=1;i*i<=n;i++){
        
        if(n%i==0){
            
            cout << i << " " << n/i << endl;
            ct+=1;
            sum+=i;
            
            if(n/i!=i){
                
                
                ct+=1;
                sum+=n/i;
            }
        }
    }
    
    cout << ct << " " << sum << endl;
    
    return 0;
}