//Nth Root of a Number
//For pth root of Number N with d decimal accuracy, TC:O(p*log(N*(10^d)))

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

double eps=1e-7;

double multiply(double mid,int n){
    
    double ans=1;
    
    for(int i=0;i<n;i++){
        
        ans*=mid;
    }
    
    return ans;
}

int main()
{
    
    double x;
    cin >> x;
    
    int n;
    cin >> n;
    
    double lo=1,hi=x,mid;
    
    while(hi-lo>eps){
        
        mid=(lo+hi)/2;
        
        if(multiply(mid,n)<x){
            
            lo=mid;
        }
        else{
            
            hi=mid;
        }
    }
    
    cout << lo << endl;
    
    return 0;
}