#include <bits/stdc++.h>
using namespace std;

int naturalSum(int n){
    int sum=0;
    if(n==1)
    return 1;
    
    return n+naturalSum(n-1);
}


int sumOfDigits(int n){
    static int sum=0; // static is used to preserve the changed value;
    
    if(n==0)
    return sum;
    
    int mod=n%10;
    sum+=mod;
    
    return sumOfDigits(n/10);
}