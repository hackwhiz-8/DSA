#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string removePart(string s,string part){

    while(s.length() != 0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}

int main(){

    string s = "dabcbaabcba";
    string part= "abc";
    
    string ans = removePart(s,part);
    cout<<ans<<endl;
           
    return 0;
}