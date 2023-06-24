//Clone a linked list with next and random pointer
//Link:-https://practice.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1

private:
    
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
    
    public:
    
    Node *copyList(Node *head)
    {
        //Write your code here
        
        //STEP-1:Creating a clone Of Original LL using next pointer of Original LL
        Node *cloneHead=NULL;
        Node *cloneTail=NULL;
        
        Node *temp=head;
        
        while(temp!=NULL){
            
            insertAtTail(cloneHead,cloneTail,temp->data);
            temp=temp->next;
            
        }
        
        //STEP-2:Create a map
        unordered_map<Node *, Node *>mapping;
        
        Node *original=head;
        Node *cloned=cloneHead;
        
        while(original!=NULL && cloned!=NULL){
            
            mapping[original]=cloned;
            original=original->next;
            cloned=cloned->next;
            
        }
        
        original=head;
        cloned=cloneHead;
        
        while(original!=NULL){
            
            cloned->arb=mapping[original->arb];
            original=original->next;
            cloned=cloned->next;
            
        }
        
        return cloneHead;
        
    }