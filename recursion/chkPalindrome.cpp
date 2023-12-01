#include<iostream>
using namespace std;
bool chkPalindrome(string s,int st,int e){
  // base case 
  if(st>e){
    return 1;
  }
  if(s[st]!=s[e]){
    return false;
  }else {
    return chkPalindrome(s,st+1,e-1);
  }
}

int main(){
 string s= "mohit";
 bool ans = chkPalindrome(s,0,s.length()-1);
 if(ans){
    cout<<"its an palindrome"<<endl;
 }else{
    cout<<"its not a palindrome"<<endl;
 }
 return 0;
}
