//Maximum Frequency Number
//Link:-https://www.codingninjas.com/studio/problems/maximum-frequency-number_920319?leftPanelTab=0

int maximumFrequency(vector<int> &arr, int n)   
{
    
    unordered_map<int,int>mp;

    int maxFreq=0;
    int maxAns=0;

    for(int i=0;i<arr.size();i++){

        mp[arr[i]]++;
        maxFreq=max(maxFreq,mp[arr[i]]);

    }

    for(int i=0;i<arr.size();i++){

        if(maxFreq==mp[arr[i]]){

            maxAns=arr[i];
            break;

        }

    }

    return maxAns;

}