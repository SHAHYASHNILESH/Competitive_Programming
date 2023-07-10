//345. Reverse Vowels of a String
//Link:-https://leetcode.com/problems/reverse-vowels-of-a-string/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    string reverseVowels(string s) {
        
        int start=0;
        int end=s.size()-1;

        while(start<end){

            if((s[start]=='a'|| s[start]=='A') || (s[start]=='e' || s[start]=='E') || (s[start]=='i' || s[start]=='I') || (s[start]=='o' || s[start]=='O') || (s[start]=='u' || s[start]=='U')){

                if((s[end]=='a'|| s[end]=='A') || (s[end]=='e' || s[end]=='E') || (s[end]=='i' || s[end]=='I') || (s[end]=='o' || s[end]=='O') || (s[end]=='u' || s[end]=='U')){

                    swap(s[start++],s[end--]);

                }

                else end--;

            }

            else{

                 start++;

            }
        }

        return s;

    }
    
};