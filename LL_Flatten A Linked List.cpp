//Flatten A Linked List
//Link:-https://www.codingninjas.com/codestudio/problems/flatten-a-linked-list_1112655?source=youtube&campaign=YouTube_CodestudioLovebabbar5thfeb&leftPanelTab=0

/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */

Node *mergeLists(Node *a,Node *b){

    Node *temp= new Node(0);
    Node *res=temp;

    while(a && b){

        if(a->data<b->data){

            temp->child=a;
            temp=temp->child;
            a=a->child;

        }

		else{

			temp->child=b;
			temp=temp->child;
			b=b->child;

		}
	}

    if(a){

        temp->child=a;

    }

    else{

        temp->child=b;

    }

    return res->child;

}

 

Node* flattenLinkedList(Node* head) {

    if(!head->next){

        return head;

    }

    Node *down= head;

    Node *right = head->next;
    right= flattenLinkedList(right);

    down->next= NULL;
	
    Node *ans=mergeLists(down,right);

    return ans;

}

