//Replace Spaces
//Link:-https://www.codingninjas.com/studio/problems/replace-spaces_1172172?leftPanelTab=0

#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	// Write your code here.

	string res;

	for(int i=0;i<str.size();i++){

		if(str[i]==' '){

			res+="@40";

		}

		else res+=str[i];

	}

	return res;

}