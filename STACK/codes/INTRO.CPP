#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    //CREATION OF STACK
    stack<int> s;
    s.push(5);
    s.push(1);
    s.push(2);
    
    //PRINTING TOP ELEMENT 
    cout<<"printing top element "<< s.top()<<endl; 

    //IF EMPTY
    if(s.empty()){
        cout<<"stack is empty "<<endl;
    }else{
        cout<<"stack is not empty "<<endl;
    }

    //size 
    cout<<"size "<<s.size()<<endl;

    return 0;
} 