//Find All Duplicates in an Array
//Link:-https://leetcode.com/problems/find-all-duplicates-in-an-array/description/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++){

            mp[nums[i]]++;

        }

        vector<int>ans;

        for(auto x:mp){

            if(x.second>1){

                ans.push_back(x.first);

            }
        }

        return ans;
        
    }
};