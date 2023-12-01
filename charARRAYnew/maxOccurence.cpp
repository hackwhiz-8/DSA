#include<iostream>
#include<bits/stdc++.h>
using namespace std;

char maxOccurence(string s){
    int arr[26]={0};

    for(int i = 0;i<s.length();i++){
        int index = s[i]-'a';
        arr[index]++;
    }
    int maxi =-1;
    int index = 0;
    for(int i = 0;i<26;i++){
        if(maxi<arr[i]){
            maxi=arr[i];
            index=i;
        }
    }
    return index+'a' ;
}

int main(){

    string s;
    getline(cin,s);

  cout<<maxOccurence(s)<<endl;
           
    return 0;
}