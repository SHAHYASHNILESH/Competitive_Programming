//Sqrt(x)
//Link:-https://leetcode.com/problems/sqrtx/description/


class Solution {
public:
    long long int binSearch(int n){
        int s=0;
        int e=n;
        long long int ans=-1;

        long long int mid=s+(e-s)/2;

        while(s<=e){

            long long int square=mid*mid;

            if(square==n)return mid;

            if(square<n){
                ans=mid;
                s=mid+1;
            }
            
            else e=mid-1;

            mid=s+(e-s)/2;

        }
        return ans;
    }
    int mySqrt(int x) {
        return binSearch(x);
    }
};