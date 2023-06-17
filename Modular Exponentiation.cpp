//Modular Exponentiation
//Fast Exponentiation
//Link:-https://www.codingninjas.com/codestudio/problems/modular-exponentiation_1082146?leftPanelTab=1

#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {

	// Write your code here.
	
	int res=1;

	while(n>0){
		
		// If n is ODD
		if(n&1){

			res=(res*1LL*(x)%m)%m;
		}

		x=((x)%m*1LL*(x)%m);
		n=n>>1;    //Divide n by 2

	}

	return res;

}