//Maximum Occuring Character
//Link:-https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1

public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        
        int arr[26]={0};
        int number=0;
        
        for(int i=0;i<str.size();i++){
            
            if(str[i]>='a' && str[i]<='z'){
                
                number=str[i]-'a';
                
            }
            
            else number=str[i]-'A';
            
            arr[number]++;
            
        }
        
        int maxi=-1,ans=0;
        
        for(int i=0;i<26;i++){
            
            if(maxi<arr[i]){
                
                ans=i;
                maxi=arr[i];
                
            }
        }
        
        return 'a'+ans;
        
    }