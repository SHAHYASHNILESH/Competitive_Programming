//Reverse Stack Using Recursion
//Link:-https://www.codingninjas.com/codestudio/problems/reverse-stack-using-recursion_631875?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1&campaign=Lovebabbarcodestudio



void insertAtBotton(stack<int> &s,int x){
    if(s.empty()){

            s.push(x);
            return;
            
    }

    int num=s.top();
    s.pop();

    insertAtBotton(s,x);

    s.push(num);
    
}

void reverseStack(stack<int> &stack) {
    // Write your code here

    if(stack.empty())return;

    int num=stack.top();
    stack.pop();

    reverseStack(stack);

    insertAtBotton(stack,num);

}