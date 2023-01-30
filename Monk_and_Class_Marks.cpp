//Monk and Class Marks

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    map<int,multiset<string>>marks_map;
    
    for(int i=0;i<n;i++){
        
        int marks;
        string name;
        cin >> name >> marks;
        marks_map[marks].insert(name);
        
    }
    
    auto curr_it=--marks_map.end();
    
    while(true){
        
        auto &students=(*curr_it).second;
        auto &marks=(*curr_it).first;
        
        for(auto &student:students){
            
            cout << student << " " << marks << endl;
        }
        
        if(curr_it==marks_map.begin())break;
        curr_it--;
    }
    
    return 0;
}