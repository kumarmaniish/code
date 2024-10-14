
/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str="java";
    
    int i=0; 
    int j=str.size()-1;
    
    while(i<j){
        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        
        i++;
        j--;
    }
    cout<<str<<endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str="a good look could look good";
    int cnt=1;
    
    for(int i=0; i<str.size(); i++){
        if(str[i]==' ') cnt++;
    }
    cout<<cnt;
    
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

string reverse(string str){
    if(str.size()==1) return str+" ";
    
    int i=0; 
    int j=str.size()-1;
    
    while(i<j){
        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        
        i++;
        j--;
    }
    return str+" ";
}

int main()
{
    string str="a good look could look good";
    
    vector<string> words;
    stringstream ss(str);
    string word;
    while(ss >> word){
        words.push_back(word);
    }
    
    string ans="";
    for(int i=0; i<words.size(); i++){
        ans+=reverse(words[i]);
    }
    
    cout<<ans;
    return 0;
}*/


#include <bits/stdc++.h>
using namespace std;
int divideNum(int n, int i){
    while(n%i==0){
        n=n/i;
    }
    return n;
}

bool checkNumber(int n){
    n=divideNum(n,2);
    n=divideNum(n,3);
    n=divideNum(n,5);
    
    return (n==1) ? true: false;
}

int main()
{
    int n;cin>>n;
    cout<<checkNumber(n)<<endl;
    
    return 0;
}

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

vector<char> duplicate(string str){
    vector<char> duplicateChar;
    int n=str.size();
    map<char,int> mpp;
    for(int i=0; i<n; i++){
        mpp[str[i]]++;
    }
    
    for(auto t: mpp){
        if(t.second>1){
            duplicateChar.push_back(t.first);
        }
    }
    return duplicateChar;
}

bool isAnagram(string str1, string str2){
    
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    
    return str1==str2;
}

bool containOnlyDigit(string str){
    
    string digit = "0123456789";
    for(char ch: str){
        if(digit.find(ch)==string::npos){
            return false;
        }
    }
    
    return true;
}

int main() {
    string str;
    cin>>str;
    
    cout<<containOnlyDigit(str);
    
    // string str1,str2;
    // cin>>str1>>str2;
    
    // cout<<isAnagram(str1,str2)<<endl;
    
    // vector<char> result = duplicate(str);
    // for(auto it: result){
    //     cout<<it<<" ";
    // }
    

    return 0;
}
