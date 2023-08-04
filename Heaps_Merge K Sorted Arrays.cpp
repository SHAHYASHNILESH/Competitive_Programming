//Merge K Sorted Arrays
//Link:-https://www.codingninjas.com/studio/problems/merge-k-sorted-arrays_975379?leftPanelTab=0

#include <bits/stdc++.h>

class Node{

    public:
    int data;
    int i;
    int j;

    
    Node(int data,int row,int col){

        this->data=data;
        i=row;
        j=col;

    }
};

class compare{

    public:
    bool operator()(Node *a,Node *b){

        return a->data>b->data;

    }

};

vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 

    priority_queue<Node *,vector<Node *>,compare>pq;

    for(int i=0;i<k;i++){

        Node *temp=new Node(kArrays[i][0],i,0);
        pq.push(temp);

    }

    vector<int>ans;

    while(pq.size()>0){

        Node *temp=pq.top();
        ans.push_back(temp->data);
        
        pq.pop();

        int i=temp->i;
        int j=temp->j;

        if(j+1<kArrays[i].size()){

            Node *next=new Node(kArrays[i][j+1],i,j+1);
            pq.push(next);

        }
    }

    return ans;

}
