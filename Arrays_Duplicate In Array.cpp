//Duplicate In Array
//Link:-https://www.codingninjas.com/studio/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&leftPanelTab=0

int findDuplicate(vector<int> &arr) 
{
    // Write your code here

    int ans=0;

    for(int i=0;i<arr.size();i++){

        ans^=arr[i];

    }

    for(int i=1;i<arr.size();i++){

        ans^=i;

    }

    return ans;

}
