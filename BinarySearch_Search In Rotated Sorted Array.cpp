//Search In Rotated Sorted Array
//Link:-https://www.codingninjas.com/codestudio/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2&leftPanelTab=0


int getPivot(vector<int>& a,int n){
    
    int s=0,e=n-1;
    
    int mid=s+(e-s)/2;
    
    while(s<e){
        
        if(a[mid]>a[0])s=mid+1;
        else e=mid;
        
        mid=s+(e-s)/2;
    }
    
    return s;
    
}

int binSearch(vector<int>& a,int s,int e,int key){
    
    int start=s;
    int end=e;
    
    int mid=start+(end-start)/2;
    
    while(start<=end){
        
        if(a[mid]==key)return mid;
        
        if(key>a[mid])start=mid+1;
        
        else end=mid-1;
        
        mid=start+(end-start)/2;
        
    }
    
    return -1;
    
}

int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.

    int pivot=getPivot(arr,n);

    if(k>=arr[pivot]&& k<=arr[n-1]){

        return binSearch(arr,pivot,n-1,k);

    }

    else{
        return binSearch(arr,0,pivot-1,k);

    }

}
