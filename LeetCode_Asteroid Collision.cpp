//735. Asteroid Collision
//Link:-https://leetcode.com/problems/asteroid-collision/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        stack<int>st;

        for(int i=0;i<asteroids.size();i++){

            if(st.empty() or asteroids[i]>0){

                st.push(asteroids[i]);

            }

            else{

                while(true){
                    int top=st.top();

                    if(top<0){

                        st.push(asteroids[i]);
                        break;

                    }

                    else if(top==(-(asteroids[i]))){

                        st.pop();
                        break;

                    }

                    else if(top>(-(asteroids[i]))){

                        break;

                    }

                    else{

                        st.pop();

                        if(st.empty()){

                           st.push(asteroids[i]);
                           break;

                        }

                    }

                }
                
            }
        }

        vector<int>answer;

        while(!st.empty()){

            answer.push_back(st.top());
            st.pop();

        }

        reverse(answer.begin(),answer.end());

        return answer;
        
    }
};