#include <bits/stdc++.h>
using namespace std;

string deciToBinary(int n){
    string ans=" ";
    while(n!=0){
        int mod=n%2;
        ans=to_string(mod)+ans;
        
        n=n/2;
    }
    
    return ans;
}
string deciToOcta(int n){
    string ans=" ";
    while(n!=0){
        int mod=n%8;
        ans=to_string(mod)+ans;
        
        n=n/8;
    }
    
    return ans;
}

string deciiToHexa(int n){
    string ans="";
    while(n!=0){
        int mod=n%16;
        if(mod<10){
        ans=to_string(mod)+ans;
        }else{
            if(mod==10) ans='A'+ans;
            else if(mod==11) ans='B'+ans;
            else if(mod==12) ans='C'+ans;
            else if(mod==13) ans='D'+ans;
            else if(mod==14) ans='E'+ans;
            else if(mod==15) ans='F'+ans;
        }
        // else{
        //     mod=mod%16;
        // }
        
        
        n=n/16;
    }
    
    return ans;
}

string deciToHexa(int n){
    string ans="";
    while(n!=0){
        int mod=n%16;
        if(mod>=10){
            ans=(char)(55+mod)+ans;
        }
        else{
            ans=to_string(mod)+ans;
        }
        
        
        n=n/16;
    }
    
    return ans;
}

int binaryToDeci(string s){
    int ans=0;
    int n=s.size()-1;
    for(int i=s.size()-1; i>=0; i--){
        ans+=((int)s[i]-'0')*pow(2,n-i);
    }
    return ans;
}



int main() {
    // Write C++ code here
    // int n;cin>>n;
    // cout<<deciToBinary(n)<<endl;
    // cout<<deciToOcta(n)<<endl;
    // cout<<deciToHexa(n)<<endl;
    
    string s;cin>>s;
    cout<<binaryToDeci(s)<<endl;

    return 0;
}