//Queue Reversal
//Link:-https://practice.geeksforgeeks.org/problems/queue-reversal/1

queue<int> rev(queue<int> q)
{
    // add code here.
    
    stack<int>s;
    
    while(!q.empty()){
        
        int ele=q.front();
        q.pop();
        s.push(ele);
        
    }
    
    while(!s.empty()){
        
        int ele=s.top();
        s.pop();
        q.push(ele);
        
    }
    
    return q;
}