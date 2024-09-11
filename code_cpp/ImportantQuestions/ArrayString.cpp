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


//maximum
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int findMax(vector<int> arr){
    
    int max=arr[0];
    for(int i=1; i<arr.size(); i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main() {
    // Write C++ code here
    cout<<"Enter the number of Semster : ";
    int n; cin>>n; 
    cout<<endl;
    
    cout<<"Enter the number of subjects in semster 1 : ";
    int a; cin>>a;
    cout<<endl;
    
    cout<<"Enter the number of subjects in semster 2 : ";
    int b; cin>>b;
    cout<<endl;
    
    cout<<"Enter the number of subjects in semster 3 : ";
    int c; cin>>c;
    cout<<endl;
    
    cout<<"Marks obtained in semster 1 is : ";
    vector<int> sem1(a);
    for(int i=0; i<a; i++){
        cin>>sem1[i];
    }
    cout<<endl;
    
    cout<<"Marks obtained in semster 23 is : ";
    vector<int> sem2(b);
    for(int i=0; i<b; i++){
        cin>>sem2[i];
    }
    cout<<endl;
    
    cout<<"Marks obtained in semster 3 is : ";
    vector<int> sem3(c);
    for(int i=0; i<c; i++){
        cin>>sem3[i];
    }
    cout<<endl;
    
    cout<<"Maximum marks in 1st Semster is : ";
    cout<<findMax(sem1)<<endl;;
    cout<<"Maximum marks in 1st Semster is : ";
    cout<<findMax(sem2)<<endl;
    cout<<"Maximum marks in 1st Semster is : ";
    cout<<findMax(sem3)<<endl;

    return 0;
}
