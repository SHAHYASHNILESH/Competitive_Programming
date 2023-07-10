//1431. Kids With the Greatest Number of Candies
//Link:-https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int max=0;

        for(int i=0;i<candies.size();i++){

            if(candies[i]>max){

                max=candies[i];

            }
        }

        vector<bool> answer;

        for(int i=0;i<candies.size();i++){
            
            if((candies[i]+extraCandies)>=max){

                answer.push_back(true);

            }

            else{

                answer.push_back(false);

            }

        }

        return answer;

    }

};