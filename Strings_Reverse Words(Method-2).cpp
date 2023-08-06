//Reverse Words in String

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void reverseStr(string &s){
    
    int st=0;
    int e=s.size()-1;
    
    while(st<e){
        
        swap(s[st++],s[e--]);
        
    }
    
}

string revStr(string s){
    
    string res="";
    string temp="";
    
    int i=s.size()-1;
    
    while(i>=0){
      
      if(s[i]==' '){
          
          reverseStr(temp);
          res=res+temp+" ";
          
          //cout << res << endl;
          
          temp="";
          
      }  
      
      else temp+=s[i];
      
      i--;
      
    }
    
    reverseStr(temp);
    res=res+temp;
    
    return res;
    
}

int main()
{
    
    cout << revStr("my name is yash") << endl;
    
    return 0;
    
}