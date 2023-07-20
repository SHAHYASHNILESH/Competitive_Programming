//Queue Implementation

#include <bits/stdc++.h>

class Queue {

public:
    int *arr;
    int qfront;
    int rear;
    int size;

public:
    Queue() {
        // Implement the Constructor

        int size=100001;
        arr=new int[size];
        qfront=0;
        rear=0;

    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function

        if(qfront==rear)return true;

        else return false;

    }

    void enqueue(int data) {
        // Implement the enqueue() function

        if(rear==size-1){

            cout << "Queue is Full" << endl;

        }

        else{

            arr[rear]=data;
            rear++;

        }
    }

    int dequeue() {
        // Implement the dequeue() function

        if(qfront==rear)return -1;
        
        else{

            int answer=arr[qfront];
            arr[qfront]=-1;
            qfront++;

            if(qfront==rear){

                qfront=rear=0;

            }

            return answer;

        }
    }

    int front() {
        // Implement the front() function

        if(qfront==rear)return -1;

        else return arr[qfront];

    }
};