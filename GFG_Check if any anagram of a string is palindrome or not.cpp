//Check if any anagram of a string is palindrome or not
//Link:-https://www.geeksforgeeks.org/check-anagram-string-palindrome-not/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPal(string s){
    
    unordered_map<char,int>mp;
    
    for(int i=0;i<s.size();i++){
        
        mp[s[i]]++;
        
    }
    
    int c=0;
    
    for(auto i:mp){
        
        if(i.second%2!=0){
            
            c++;
            
        }
    }
    
    if(c==0)return true;
    
    else return false;
    
}

int main()
{
    
    cout << isPal("geeksforgeeks") << endl;
    
    return 0;
}