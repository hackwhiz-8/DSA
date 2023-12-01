#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int* fun(int a){
    int *ptr = &a;
    return ptr;
}

int& func1(int a)
{
    int &ans = a;
    return ans;
}

int main(){
    int i = 5;
    //create a refrence variable 
    // int &j=i;
    // cout<<i<<endl;
    // cout<<j<<endl;
    // j+=1;
    // i+=2;
    // cout<<i<<endl;
    // cout<<j<<endl; 
   cout<< fun(i);
   func1(i);
   
           
    return 0;
}