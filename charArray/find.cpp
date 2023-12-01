#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
       string s;
       string str = "ab";
       getline(cin,s);

     int found = s.find(str);
       cout<<" ab is found at "<< found<<endl;

    return 0;
}