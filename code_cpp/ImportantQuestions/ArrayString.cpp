#include <bits/stdc++.h>
using namespace std;

string moveHashFront(string str){
    string ans="";
    for(int i=0; i<str.size(); i++){
        if(str[i]=='#')
        ans='#'+ans;
        else
        ans=ans+str[i];
    }
    return ans;
}

vector<int> findFactors(int n){
    //edge cases
    if(n==0)
    cout<<"No Factors"<<endl;
    if(n<0) 
    n=n*-1;
    
    // now to find the factors
    vector<int> ans;  
    for(int i=1; i<=n; i++){
        
        if(n%i==0)
        ans.push_back(i);
    }
    return ans;
}

int maxMark(int arr[],int n){
    
    int maxi=0;
    for(int i=0; i<n; i++){
        if(arr[i]>maxi)
        maxi=arr[i];
    }
    return maxi;
}

int main() {
    // Write C++ code here
    string s="ab#sd#fgh#lkj";
    cout<<moveHashFront(s);


    int n;cin>>n; 
    vector<int> ans=findFactors(n);
    for(auto it:ans){
        cout<<it<<" ";
    }

    cout<<"Enter the no of subject in 1sem"<<endl;
    int n;cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Maximum marks is in 1sem  ";
    cout<<maxMark(arr,n);
    return 0;

    return 0;
}