//Reverse First K elements of Queue
//Link:-https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1

queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    stack<int>s;
    
    for(int i=0;i<k;i++){
        
        int ele=q.front();
        q.pop();
        s.push(ele);
        
    }
    
    while(!s.empty()){
        
        int ele=s.top();
        s.pop();
        q.push(ele);
        
    }
    
    int t=q.size()-k;
    
    while(t--){
        
        int ele=q.front();
        q.pop();
        q.push(ele);
        
    }
    
    return q;
    
}