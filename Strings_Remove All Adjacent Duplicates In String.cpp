//1047. Remove All Adjacent Duplicates In String
//Link:-https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/

class Solution {
public:
    string removeDuplicates(string s) {
        
        stack<char>st;

        string res="";

        for(int i=0;i<s.size();i++){

            if(st.empty())st.push(s[i]);

            else if(st.top()==s[i])st.pop();

            else st.push(s[i]);

        }

        while(!st.empty()){

            res=st.top()+res;
            st.pop();
            
        }

        return res;

    }
};