//Encode The String
//Link:-https://www.codingninjas.com/studio/contests/love-babbar-contest-4/3839559/problems/16824?leftPanelTab=0

#include <bits/stdc++.h> 
string encodeString(string &s, int n) 
{
    // Write your code here.
    string ans="";

    for(int i=0;i<n;i++){

        char ch=s[i];

        //if(ch=='z') ans.push_back('a');
        //if(ch=='a') ans.push_back('z');

        if(ch=='a' || ch=='e' || ch=='i'|| ch=='o'|| ch=='u'){
            
            ch=ch+1;
            ans.push_back(ch);

        } 
        
        else {

          ch=ch-1;  
          ans.push_back(ch);

        }
    }

    return ans;

}
