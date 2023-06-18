//Redundant Brackets
//Link:-https://www.codingninjas.com/codestudio/problems/redundant-brackets_975473?leftPanelTab=0&campaign=Lovebabbarcodestudio

#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char>st;

    for(int i=0;i<s.length();i++){

        char ch=s[i];

        if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/'){
            st.push(ch);
        }

        else{

            if(ch==')'){

                bool isRedundant=true;

                while(st.top()!='('){

                    char top=st.top();

                    if(top=='+' || top=='-' || top=='*' || top=='/'){
                        
                        isRedundant=false;

                    }

                    st.pop();
                }

                if(isRedundant==true)return true;

                st.pop();

            }
        }
    }

    return false;
}
