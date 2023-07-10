//1679. Max Number of K-Sum Pairs
//Link:-https://leetcode.com/problems/max-number-of-k-sum-pairs/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        int n=nums.size();

        sort(nums.begin(),nums.end());

        int start=0;
        int end=n-1;
        int count=0;

        while(start<end){

            if(nums[start]+nums[end]==k){

                count++;
                start++;
                end--;

            }

            else if(nums[start]+nums[end]<k){

                start++;

            }

            else if(nums[start]+nums[end]>k){

                end--;

            }

        }

        return count;
        
    }
};