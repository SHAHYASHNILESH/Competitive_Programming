//1910. Remove All Occurrences of a Substring
//Link:-https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/

class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        while(s.size()!=0 && s.find(part)<s.size()){

            s.erase(s.find(part),part.size());

        }

        return s;
        
    }
};