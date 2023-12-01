#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;

int main(){
   stack<string> s;
   s.push("mohit ");
   s.push("kumar");
   s.push("sain");
   cout<<"top element "<<s.top()<<endl;
   s.pop();
   cout<<"top element "<<s.top()<<endl;
   cout<<"size of stack "<<s.size()<<endl;
   cout<<"empty or not "<<s.empty()<<endl;
   
           
    return 0;
}