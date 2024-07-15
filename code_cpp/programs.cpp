#include <bits/stdc++.h>
using namespace std;


int main() {
    // Write C++ code here
    int n,m;
    cin >>n>>m;
    // vector<vector<int>> arr(n, vector<int>(m));
    vector<vector<int>> arr(n,vector<int>(m));
    for(int i = 0; i < n; i++) {
        for(int j=0; j < m; j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    //find boundary element
    /*int sum=0;
    
    for(int i=0; i<n; i++){
        sum+=arr[i][0];
    }
    
    for(int j=0; j<m; j++){
        sum+=arr[0][j];
    }
    
    for(int i=0; i<n; i++){
        sum+=arr[i][n-1];
    }
    
    for(int j=0; j<m; j++){
        sum+=arr[m-1][j];
    }
    
    cout<< sum;
    
    // for 2d matrix sum
    int sum=0; 
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            
            //primary diagonal 
            if(i==j)
            sum+=arr[i][j];
            //secondary diagonal 
            if(i+j == n-1)
            sum+=arr[i][j];
        }
    }
    
    //if 
    if(n==m && n%2==1){
        sum-=arr[n/2][n/2];
    }
    
    cout<<sum<<endl;
    
    
    // for reverse
    /*int i=0;
    int j=arr.size()-1;
    
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }*/
    return 0;

    
    
}