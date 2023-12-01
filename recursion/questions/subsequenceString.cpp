#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(string s1,string output,int index,vector<string>& ans){
    //base case 
    if(index >= s1.size()){
        if(output.length()>0){
        ans.push_back(output);
        }
        return;
    }
    //exclude
    solve(s1,output,index+1,ans);

    //include
    char element = s1[index];
    output.push_back(element);
    solve(s1,output,index+1,ans);
    

}

vector<string> sequence(string s1){
    vector<string>ans;
    string output= "";
    int index = 0;
    solve(s1,output,index,ans);
    return ans;
}

int main(){
    string resp;
           getline(cin,resp);
   vector<string> ans =sequence(resp);
           for (int i = 0; i < ans.size(); i++) {
                 cout<<ans[i]<<" ";
        cout << endl;
           }
    return 0;
}    