#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void  avoid(string s){
    string ans;
    for(int i = 0;i<s.length();i++){
        if(s[i]!=' '){
        ans.push_back(s[i]);
        }
    }
    s=ans;
    
}

int main(){
    string s;
    getline(cin,s);
string ans = avoid(s);
    cout<<ans<<endl;

           
    return 0;
}