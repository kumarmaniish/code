// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> arr, int key){
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==key)
        return i;
    }
    return -1;
}

int binarySearch(vector<int> arr, int target){
    int start=0; 
    int end=arr.size()-1;
    
    while(start<=end){
        int mid=(start+end)/2;
        
        if(arr[mid]==target) return mid;
        else if(arr[mid]>target) start=mid+1;
        else end=mid-1;
    }
    return -1;
}


int binarySearchRecurr(vector<int> arr,int low, int high, int target){
    
    if(low<=high){
        
        int mid=(low+high)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]>target) return binarySearchRecurr(arr,low,mid-1,target);
        
        else return binarySearchRecurr(arr,mid+1,high,target);
    }
    return -1;
}

int main() {
    // Write C++ code here
    
    int n,k;cin>>n>>k;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    cout<<"Index for linearSearch "<<linearSearch(arr,k)<<endl;
    cout<<"Index is binarySearch "<<binarySearch(arr,k)<<endl;
    // cout<<"Index is binarySearchRecurr "<<binarySearch(arr,0,n-1,k)<<endl;

    return 0;
}