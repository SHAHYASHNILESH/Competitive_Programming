//Two Stacks
//Link:-https://www.codingninjas.com/studio/problems/two-stacks_983634?leftPanelTab=0&campaign=YouTube_CodestudioLovebabbar5thfeb

#include <bits/stdc++.h> 

class TwoStack {

public:

    int *arr;
    int top1;
    int top2;
    int size;

public:

    // Initialize TwoStack.
    TwoStack(int s) {

        // Write your code here.

        size=s;
        arr=new int[size];
        top1=-1;
        top2=size;

    }
    
    // Push in stack 1.
    void push1(int num) {
        // Write your code here.

        if(top2-top1>1){

            top1++;
            arr[top1]=num;

        }

        else{

            //cout << "Stack Overflow" << endl;

        }
    }

    // Push in stack 2.
    void push2(int num) {

        // Write your code here.
        if(top2-top1>1){

            top2--;
            arr[top2]=num;

        }

        else{

            //cout << "Stack Overflow" << endl;
            
        }

    }

    // Pop from stack 1 and return popped element.
    int pop1() {

        // Write your code here.

        if(top1>=0){

            int ans=arr[top1];
            top1--;
            return ans;

        }

        else return -1;

    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        // Write your code here.
        if(top2<size){

            int ans=arr[top2];
            top2++;
            return ans;

        }

        else return -1;

    }
};
