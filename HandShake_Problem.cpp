//Handshake Problem

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        auto result=(n*(n-1)/2);
        cout << result << endl;
    }
    return 0;
}