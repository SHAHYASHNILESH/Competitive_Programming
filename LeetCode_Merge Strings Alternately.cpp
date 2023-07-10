//1768. Merge Strings Alternately
//Link:-https://leetcode.com/problems/merge-strings-alternately/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        int i=0,j=0;

        string res="";

        while(i<word1.size() && j<word2.size()){

            res+=word1[i++];
            res+=word2[j++];

        }

        while(i<word1.size()){

            res+=word1[i++];

        }

        while(j<word2.size()){

            res+=word2[j++];
            
        }

        return res;
        
    }
};