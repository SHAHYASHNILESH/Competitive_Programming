//Valid Palindrome
//Link:-https://www.codingninjas.com/studio/problems/check-if-the-string-is-a-palindrome_1062633?leftPanelTab=0

#include <bits/stdc++.h> 

bool checkPalindrome(string s){

    int left = 0;
    int right = s.length() - 1;

    while (left<right){

        while (left<right && !isalnum(s[left])){

            left++;

        }

        while (left<right && !isalnum(s[right])){

            right--;

        }

        char leftChar=tolower(s[left]);
        char rightChar=tolower(s[right]);

        if(leftChar!=rightChar){

            return false; 

        }

        left++;
        right--;

    }

    return true; 

}