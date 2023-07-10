//392. Is Subsequence
//Link:-https://leetcode.com/problems/is-subsequence/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    bool isSubsequence(string s, string t) {

        int n1=s.size();
        int n2=t.size();
        
        int i=0,j=0;

        while(i<n1 && j<n2){

            if(s[i]==t[j]){
                i++;
                j++;

            }

            else{

                j++;

            }
        }

        if(i==n1)return true;

        else return false;
        
    }
};