//2390. Removing Stars From a String
//Link:-https://leetcode.com/problems/removing-stars-from-a-string/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    string removeStars(string s) {
        
        stack<char>st;

        for(int i=0;i<s.size();i++){

            if(s[i]=='*')st.pop();
            else st.push(s[i]);

        }

        string ans="";

        while(!st.empty()){

            ans+=st.top();
            st.pop();

        }

        reverse(ans.begin(),ans.end());

        return ans;

    }
};