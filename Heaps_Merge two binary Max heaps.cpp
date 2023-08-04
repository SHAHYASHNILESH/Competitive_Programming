//Merge two binary Max heaps
//Link:-https://practice.geeksforgeeks.org/problems/merge-two-binary-max-heap0144/1

#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    
    void heapify(vector<int>&c,int n,int i){
        
        int largest=i;
        
        int left=2*i+1;
        int right=2*i+2;
        
        if(left<n && c[left]>c[largest])largest=left;
        
        if(right<n && c[right]>c[largest])largest=right;
        
        if(largest!=i){
            
            swap(c[largest],c[i]);
            heapify(c,n,largest);
            
        }
        
    }
    
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        
        vector<int>c;
        
        for(int i=0;i<n;i++){
            
            c.push_back(a[i]);
            
        }
        
        for(int i=0;i<m;i++){
            
            c.push_back(b[i]);
            
        }
        
        for(int i=(c.size())/2-1;i>=0;i--){
            
            heapify(c,c.size(),i);
            
        }
        
        return c;
        
    }
};

