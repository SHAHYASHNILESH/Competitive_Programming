//649. Dota2 Senate
//Link:-https://leetcode.com/problems/dota2-senate/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    string predictPartyVictory(string senate) {
        
        int n=senate.size();

        queue<int>radiant,dire;

        for(int i=0;i<n;i++){

            if(senate[i]=='R')radiant.push(i);

            else dire.push(i);

        }

        if(radiant.empty())return "Dire";

        if(dire.empty())return "Radiant";

        while(!radiant.empty() && !dire.empty()){

            if(radiant.front()<dire.front()){

                dire.pop();
                int r=radiant.front();
                radiant.pop();
                radiant.push(r+n);

            }

            else{

                radiant.pop();
                int d=dire.front();
                dire.pop();
                dire.push(d+n);

            }
        }

        if(radiant.size()==0)return "Dire";
        else return "Radiant";

    }
};