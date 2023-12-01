#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkEqual(int count1[26],int count2[26]){
    for(int i = 0;i<26;i++){
       if(count1[i] ==count2[i]){
        return 1;
       }else
       return 0;
    }
}

bool permutaion(string s1,string s2){
    int count1[26]={0};
    // mapping 
    for(int i = 0;i<s1.length();i++){
        int index = s1[1]-'a';
        count1[index]++;
    }
    //travere s2 string in window of size s1 length and compare 
    int i = 0;
    int windowSize = s1.length();
    int count2[26]={0};

    //running of window one
    while(i<windowSize &&  i<s2.length()){
        int index = s2[i]-'a';
        count2[index]++;
        i++;
    } 
    if(checkEqual(count1,count2))
    return 1;

    // for new window 
    while(i<s2.length() ){
        char newChar = s2[i];
        int index = newChar -'a';
        count2[index]++;
        char oldChar = s2[i-windowSize];
        index=oldChar-'a';
        count2[index]--;
       i++;
     if(checkEqual(count1,count2))
      return 1;
    }
  

    return 0;
}

int main(){
    string s1="abc";
    string s2;

   getline(cin,s2);
   
   int ans = permutaion(s1,s2);
 cout<<ans<<endl;
      return 0;
}
/*
time compleixity o(n)+o(m)
sapce = O(1)
*/