//GPL

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        int binary,j=0;
        long long dec = 0, i = 0, rem;
        
        for(int i=s.size()-1;i>=0;--i){
            
            binary=s[i]-'0';
            dec+=binary*pow(2,j);
            j++;
            
        }
        
        cout << dec << endl;

    }
    return 0;
}
