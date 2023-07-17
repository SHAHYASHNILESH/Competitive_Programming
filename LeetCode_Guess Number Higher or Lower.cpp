//374. Guess Number Higher or Lower
//Link:-https://leetcode.com/problems/guess-number-higher-or-lower/description/

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
        int start=1;
        int end=n;

        while(start<=end){

            int mid=start+(end-start)/2;

            int ans=guess(mid);

            if(ans==0)return mid;

            else if(ans==1)start=mid+1;

            else if(ans==-1)end=mid-1;

        }

        return -1;
                
    }
};