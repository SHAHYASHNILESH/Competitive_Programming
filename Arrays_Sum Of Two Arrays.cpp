//Sum Of Two Arrays(Important and Tricky Question!!)
//Link:-https://www.codingninjas.com/codestudio/problems/sum-of-two-arrays_893186?leftPanelTab=0

#include <bits/stdc++.h>

vector<int>reverse(vector<int>v){
	int s=0,e=v.size()-1;

	while(s<e){
       swap(v[s++],v[e--]);
	}

	return v;

}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	int i=n-1;
	int j=m-1;

	vector<int>ans;

	int carry=0;

	while(i>=0 && j>=0){

		int val1=a[i];
		int val2=b[j];

		int sum=val1+val2+carry;
		carry=sum/10;
		sum=sum%10;
		
		ans.push_back(sum);

		i--;
		j--;

	}
    
    //FIRST CASE(When array a is big)
	while(i>=0){

		int sum=a[i]+carry;

		carry=sum/10;
		sum=sum%10;

		ans.push_back(sum);

		i--;

	}
    
    //SECOND CASE(When array b is big)
	while(j>=0){

		int sum=b[j]+carry;

		carry=sum/10;
		sum=sum%10;

		ans.push_back(sum);

		j--;

	}
    
    //THIRD CASE(When both arrays are of same size and carry is remaining)
	while(carry>0){
		
		int sum=carry;

		carry=sum/10;
		sum=sum%10;

		ans.push_back(sum);

	}
    
    //Answer is reversed
	return reverse(ans);
}