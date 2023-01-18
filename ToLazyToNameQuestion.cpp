//To Lazy to Name Question

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,cth_Num;
    cin >> a >> b >> c;
    
    for(int i=2;c>0;i++){
        
        if(i%a==0||i%b==0){
            
            c--;
            cth_Num=i;
        }
    }
    
    int lcm,step;
    
    for(int i=1;i<=a*b;i++){
        
        if(i%a==0 && i%b==0){
            
            lcm=i;
            break;
        }
    }
    
    if(cth_Num%a==0 && cth_Num%b==0){
        
        step=lcm;
    }
    
    else if(cth_Num%a==0){
        
        step=a;
    }
    
    else{
        
        step=b;
    }
    
    for(int i=cth_Num;i>=0;i=i-step){
        
        cout << i << " ";
    }
    
    return 0;
}