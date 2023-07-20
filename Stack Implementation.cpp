//Stack Implementation

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Stack{
    
    public:
        int *arr;
        int size;
        int top;
    
    public:
        
        Stack(int n){
            
            size=n;
            arr=new int[size];
            top=-1;
            
        }
        
        void push(int ele){
            
            if(size-top>1){
                
                top++;
                arr[top]=ele;
                
            }
            
            else{
                
                cout << "Stack Overflow" << endl;
                
            }
        }
        
        void pop(){
            
            if(top>=0){
                
                top--;
                
            }
            
            else{
                
                cout << "Stack Underflow" <<endl;
                
            }
        }
        
        int peek(){
            
            if(top>=0)return arr[top];
            
            else return -1;
            
        }
        
        bool isEmpty(){
            
            if(top>=0)return false;
            
            else return true;
            
        }
    
};

int main()
{
    
    Stack st(5);
    
    st.push(22);
    st.push(13);
    st.push(45);
    
    cout << st.peek() << endl;
    
    st.pop();
    
    cout << st.peek() << endl;
    
    cout << st.isEmpty() << endl;
    
    return 0;
}