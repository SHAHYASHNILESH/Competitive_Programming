//933. Number of Recent Calls
//Link:-https://leetcode.com/problems/number-of-recent-calls/description/

class RecentCounter {
public:
    queue<int>answer;

    RecentCounter() {
        
    }
    
    int ping(int t) {
        
        answer.push(t);

        while(answer.front()<t-3000){

            answer.pop();

        }

        return answer.size();

    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */