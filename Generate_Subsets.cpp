//Generate Subsets
//TC:O(2^N)

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>Subsets;

void generateSubsets(vector<int>&subset,int i,vector<int>&nums){
    
    if(i==nums.size()){
        
        Subsets.push_back(subset);
        return;
    }
    
    //ith element is not present in subset
    generateSubsets(subset,i+1,nums);
    
    //ith element is present in subset
    subset.push_back(nums[i]);
    generateSubsets(subset,i+1,nums);
    subset.pop_back();
    
}

int main()
{
    int n;
    cin >> n;
    
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    
    vector<int>empty;
    
    generateSubsets(empty,0,nums);
    
    for(auto subset:Subsets){
        
        for(auto ele:subset){
            
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}