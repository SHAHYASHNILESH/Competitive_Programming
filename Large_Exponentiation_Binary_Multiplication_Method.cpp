//Large Exponentiation using Binary Multiplication
//TC:O(log^2(n))

//When value of a is greater than 10^9,
//(a^b)%M=((a%M)^b)%M

//When the value of M is greater than 10^9,

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

const long long int M=1e18+7;

int binMultiply(long long a,long long b){
    
    int ans=0;
    
    while(b){
        
        if(b&1){
            
            ans=(ans+a)%M;
        }
        
        a=(a+a)%M;
        b>>=1;
        
    }
    
    return ans;
}

int binExpIter(long long a,long long b){
    
    int ans=1;
    
    while(b){
        
        if(b&1){
            
            ans=binMultiply(ans,a);
        }
        
        a=binMultiply(a,a);
        b>>=1;
        
    }
    
    return ans;
}

int main()
{
    cout << binExpIter(2,10) << endl;
    
    return 0;
}