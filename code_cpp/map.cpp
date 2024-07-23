// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

pair<string, int> maxCount(vector<string> arr){
    
    sort(arr.begin(),arr.end());
    
    map<string, int> mpp;
    for(auto it: arr){
        mpp[it]++;
    }
    
    int maxi=0;
    string str="";
    for(auto it: mpp){
        if(it.second > maxi)
        {
            maxi=it.second;
            str=it.first;
        }
        else if(it.second == maxi && str<it.first){
            str=it.first;
        }
        
    }
    
    return {str,maxi};
}

int main() {
    // Write C++ code here
    
    // map<int, string> mpp;
    // mpp[0]="Manish";
    // mpp[1]="Adi";
    // mpp[2]="anurag";
    
    // for(auto it: mpp){
    //     cout<<it.first<<" -> "<<it.second<<endl;
    // }
    
    // cout<<mpp.empty()<<endl;
    // cout<<to_string(mpp.size())<<endl;
    
    // return 0;
    
    
    int n=10;
    vector<string> arr;
    arr.push_back("mountain");
    arr.push_back("lake");
    arr.push_back("lake");
    arr.push_back("zebra");
    arr.push_back("tree");
    arr.push_back("lake");
    arr.push_back("zebra");
    arr.push_back("zebra");
    arr.push_back("animal");
    arr.push_back("lake");
    
    cout<<maxCount(arr);

    return 0;
    
}