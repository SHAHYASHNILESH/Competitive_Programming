//Merge Sort
//Link:-https://www.codingninjas.com/codestudio/problems/merge-sort_920442?leftPanelTab=0

void merge(vector<int>&arr,int s,int e){

    int mid=(s+e)/2;

    int len1=mid-s+1;
    int len2=e-mid;

    vector<int>first(len1);
    vector<int>second(len2);

    int k=s;
    for(int i=0;i<len1;i++){
        
        first[i]=arr[k++];

    }

    k=mid+1;
    for(int i=0;i<len2;i++){

        second[i]=arr[k++];

    }

    int index1=0,index2=0;
    k=s;

    while(index1<len1 && index2<len2){

        if(first[index1]<second[index2]){

            arr[k++]=first[index1++];

        }

        else{

            arr[k++]=second[index2++];

        }
    }

    while(index1<len1){

        arr[k++]=first[index1++];

    }

    while(index2<len2){

        arr[k++]=second[index2++];
        
    }

}

void solve(vector<int>&arr,int s,int e){

    if(s>=e)return;
    
    int mid=(s+e)/2;

    solve(arr,s,mid);

    solve(arr,mid+1,e);

    merge(arr,s,e);

}

void mergeSort(vector < int > & arr, int n) {
    // Write your code here.
    solve(arr,0,n-1);

}