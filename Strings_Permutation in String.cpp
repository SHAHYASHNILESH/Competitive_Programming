//567. Permutation in String
//Link:-https://leetcode.com/problems/permutation-in-string/description/

class Solution {
public:

    bool isEqual(int a[26],int b[26]){

        for(int i=0;i<26;i++){

            if(a[i]!=b[i])return false;

        }

        return true;

    }

    bool checkInclusion(string s1, string s2) {

        if(s2.size()<s1.size())return false;
        
        int count1[26]={0};
        int count2[26]={0};

        for(int i=0;i<s1.size();i++){

            count1[s1[i]-'a']++;

        }

        int i=0;
        int k=s1.size();

        while(i<k){

            count2[s2[i]-'a']++;
            i++;

        }

        if(isEqual(count1,count2))return true;

        while(i<s2.size()){

            count2[s2[i]-'a']++;

            count2[s2[i-k]-'a']--;
            
            i++;

            if(isEqual(count1,count2))return true;

        }

        return false;

    }
};