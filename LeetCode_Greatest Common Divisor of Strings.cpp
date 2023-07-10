//1071. Greatest Common Divisor of Strings
//Link:-https://leetcode.com/problems/greatest-common-divisor-of-strings/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        int n1=str1.size();

        int n2=str2.size();

        if(str1+str2!=str2+str1) return "";

        return str1.substr(0,gcd(n1,n2));
        
    }
};