//Kth smallest element
//Link:-https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1

int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        
        priority_queue<int>pq;
        
        for(int i=l;i<k;i++){
            
            pq.push(arr[i]);
            
        }
        
        for(int i=k;i<=r;i++){
            
            if(arr[i]<pq.top()){
                
                pq.pop();
                pq.push(arr[i]);
                
            }
        }
        
        return pq.top();
        
    }