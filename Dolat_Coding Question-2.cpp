//Dolat Capital Coding Question
//Coding Question-2

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&a){
    
    int ptr=0;
    int maxSum=0;
    int currSum=0;
    
    while(ptr<a.size()){
        
        currSum=0;
        
        while(a[ptr]<a[ptr+1]){
            
            currSum+=a[ptr];
            ptr++;
            
        }
        
        currSum+=a[ptr];
        ptr++;
        
        maxSum=(currSum>maxSum)?currSum:maxSum;
        
    }
    
    return maxSum;
    
}

int main()
{
    return solve(a);
    
    return 0;
}