#include<iostream>
#include<bits/stdc++.h>
using namespace std;

inline int func(int& a,int &b){//passed by refrence //inlin efunction only for line < 3 
       
       return ((a>b) ? a:b);
}
//default arguments
void defaultarg(int *arr ,int n, int st= 0 ){ // st is dedault arguments and this should be define in rightmostPart
    for(int i = st;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int a = 5,b = 9;
   int arr[]= {1 ,2 ,3,4,5,6};   
   func(a,b);
    a+=2;
    b+=1;
   int ans = func(a,b);
     cout<<ans<<endl;
     //default arguments 
     defaultarg(arr,6);
    return 0;
}