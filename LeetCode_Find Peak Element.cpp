//162. Find Peak Element
//Link:-https://leetcode.com/problems/find-peak-element/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        if(nums.size()==1)return 0;

        int start=0;
        int end=nums.size()-1;

        while(start<=end){

            int mid=start+(end-start)/2;

            if(mid==0){

                if(nums[mid]>nums[mid+1])return mid;

                else start=mid+1;
            }

            else if(mid==nums.size()-1){

                if(nums[mid]>nums[mid-1])return mid;

                else end=mid-1;

            }

            else{

                if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])return mid;

                else if(nums[mid]<nums[mid+1])start=mid+1;

                else end=mid-1;

            }

        }

        return -1;

    }
};