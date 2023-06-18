//Longest Common Prefix
//Link:-https://www.codingninjas.com/codestudio/problems/longest-common-prefix_2090383?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0

string longestCommonPrefix(vector<string> &arr, int n)
{
    // Write your code here

    string ans="";

    for(int i=0;i<arr[0].length();i++){

        char ch=arr[0][i];

        bool isMatch=true;

        for(int j=1;j<n;j++){

            if(arr[j].size()<i || ch!=arr[j][i]){

                isMatch=false;
                break;

            }

        }

        if(isMatch==false)break;

        else{

            ans.push_back(ch);

        }

    }

    return ans;
    
}


