//Detect and Remove Loop
//Link:-https://www.codingninjas.com/codestudio/problems/interview-shuriken-42-detect-and-remove-loop_241049?leftPanelTab=0&campaign=YouTube_codestudio_lovebabbar28thjan

/*************************************************
    
    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

*************************************************/

Node* FloydCycleDetection(Node *head){
    
    if(head==NULL)return NULL;
    
    Node *slow=head;
    Node *fast=head;
    
    while(slow!=NULL && fast!=NULL){
        
        fast=fast->next;
        
        if(fast!=NULL)fast=fast->next;
        
        slow=slow->next;
        
        if(slow==fast){
            //cout << "Cycle Present at " << slow->data << endl;
            return slow;
            
        }
    }
    
    return NULL;
    
}

//A+B=k*C
Node* getStartNodeOfLoop(Node *head){
    
    if(head==NULL)return NULL;
    
    Node *intersection=FloydCycleDetection(head);
    if(intersection==NULL)return NULL;

    Node *slow=head;
    
    while(slow!=intersection){
        
        slow=slow->next;
        intersection=intersection->next;
        
    }
    
    return slow;
    
}

Node *removeLoop(Node *head)
{
    // Write your code here.

    if(head==NULL)return NULL;
    
    Node *startOfLoop=getStartNodeOfLoop(head);
    if(startOfLoop==NULL)return head;
    
    Node *temp=startOfLoop;
    
    while(temp->next!=startOfLoop){
        
        temp=temp->next;
        
    }

    temp->next=NULL;
    return head;

}