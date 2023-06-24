//Check if Linked List is Palindrome
//Link:-https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1

#include<bits/stdc++.h>

class Solution{
  private:
    bool checkPalindrome(vector<int>&arr){
        
        int s=0,e=arr.size()-1;
        
        while(s<=e){
            
            if(arr[s]!=arr[e]){
                
                return false;
                
            }
            
            else{
                
                s++;
                e--;
                
            }
        }
        
        return true;
        
    }
    
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        
        vector<int> arr;
        
        Node *temp=head;
        
        while(temp!=NULL){
            
            arr.push_back(temp->data);
            temp=temp->next;
            
        }
        
        return checkPalindrome(arr);
        
    }
};