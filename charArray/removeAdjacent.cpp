#include<iostream>
#include<bits/stdc++.h>
using namespace std;


string adjacent(string s){
    
    for(int i = 0;i<=s.size();i++){
        if(s[i]==s[i+1]){
            
        }
    }
    return s;
}

int main(){
    string s;
    cin>>s;

   string ans =  adjacent(s);
    
    cout<<ans<<endl;
    cout<<s.size()<<endl;
    cout<<s[1]<<endl;
    return 0;
}