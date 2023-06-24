//Add two numbers represented by linked lists
//Link:-https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1

class Solution
{
    private:
    
    Node *reverse(Node *head){
        
        if(head==NULL || head->next==NULL)return head;

        Node* curr=head;
        Node* prev=NULL;
        Node* forward=NULL;
    
        while(curr!=NULL){
    
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
    
        }
    
        return prev;
        
    }
    
    void insertAtTail(struct Node* &head, struct Node* &tail,int val){
        
        Node *temp=new Node(val);
        
        if(head==NULL){
            
            head=temp;
            tail=temp;
            return;
            
        }
        
        else{
            
            tail->next=temp;
            tail=temp;
            
        }
    }
    
    struct Node *add(struct Node* first, struct Node* second){
        
        int carry=0;
        
        Node *ansHead=NULL;
        Node *ansTail=NULL;
        
        while(first!=NULL && second!=NULL){
            
            int sum=first->data+second->data+carry;
            
            int digit=sum%10;
            
            insertAtTail(ansHead,ansTail,digit);
            
            carry=sum/10;
            
            first=first->next;
            second=second->next;
            
        }
        
        while(first!=NULL){
            
            int sum=carry+first->data;
            
            int digit=sum%10;
            
            insertAtTail(ansHead,ansTail,digit);
            
            carry=sum/10;
            
            first=first->next;
            
        }
        
        while(second!=NULL){
            
            int sum=carry+second->data;
            
            int digit=sum%10;
            
            insertAtTail(ansHead,ansTail,digit);
            
            carry=sum/10;
            
            second=second->next;
            
        }
        
        while(carry>0){
            
            int sum=carry;
            
            int digit=sum%10;
            
            insertAtTail(ansHead,ansTail,digit);
            
            carry=sum/10;
    
        }
        
        return ansHead;
        
    }
    
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        
        first=reverse(first);
        second=reverse(second);
        
        Node *ans=add(first,second);
        
        ans=reverse(ans);
        
        return ans;
        
    }
};