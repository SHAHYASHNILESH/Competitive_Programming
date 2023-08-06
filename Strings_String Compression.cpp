//String Compression
//Link:-https://leetcode.com/problems/string-compression/description/

class Solution {
public:
    int compress(vector<char>& chars) {
        
        // int i=0;

        // for(int j=1,count=1;j<=chars.size();j++,count++){

        //     if(j==chars.size() || chars[j]!=chars[j-1]){

        //         chars[i++]=chars[j-1];

        //         if(count>=2){

        //             for(char digit:to_string(count)){
                        
        //                 chars[i++]=digit;

        //             }
        //         }

        //         count=0;

        //     }
        // }

        // return i;
        
        int i=0,ansIdx=0;
        int n=chars.size();

        while(i<n){

            int j=i+1;

            while(j<n && chars[i]==chars[j])j++;

            chars[ansIdx++]=chars[i];

            int count=j-i;

            if(count>1){

                string cnt=to_string(count);

                for(auto ch:cnt){

                    chars[ansIdx++]=ch;

                }

            }

            i=j;

        }

        return ansIdx;
        
    }
};