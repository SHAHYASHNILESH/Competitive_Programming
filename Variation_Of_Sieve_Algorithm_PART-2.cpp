//Variation of Sieve Algorithm(Divisors of Numbers)

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
vector<int>divisors[N];
int sum[N];


int main()
{
    for(int i=2;i<N;i++){
        
        for(int j=i;j<N;j+=i){
            
            divisors[j].push_back(i);
            sum[j]+=i;
        }
    }
    
    for(int i=1;i<10;i++){
        
        for(auto ele:divisors[i]){
            
            cout << ele << " ";
        }
        cout << endl;
    }
    
    return 0;
}