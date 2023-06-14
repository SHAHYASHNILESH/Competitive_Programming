//SuperPow(leetcode)

class Solution {
public:
    int superPow(int a, vector<int>& b) {
        int&& n=1337;
        int&& phi=1140;
        int&& s=b.size();
        int exp=0;
        for(int&& i=0; i<s; i++)
            exp=(b[i]+10*exp)%phi;
        bitset<12> e(exp);
        int y=1;
        a%=n;
        for(int&& i=11; i>=0; i--){
            y=y*y%n;
            if (e[i]==1) y=y*a%n;
        }
        return y;
    }
};