//238. Product of Array Except Self
//Link:-https://leetcode.com/problems/product-of-array-except-self/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n=nums.size();

        vector<int>op;

        if(n<1)return op;

        int prod=1;

        for(int i=0;i<n;i++){

            prod*=nums[i];
            op.push_back(prod);

        }

        prod=1;

        for(int i=n-1;i>0;i--){

            op[i]=prod*op[i-1];
            prod*=nums[i];

        }

        op[0]=prod;

        return op;

    }
};