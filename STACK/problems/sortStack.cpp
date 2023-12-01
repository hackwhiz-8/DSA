#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sorted(stack<int>&st,int num){
    if((st.empty())|| st.top()<=num){
        st.push(num);
        return;
    }

    int n = st.top();
    st.pop();
    sorted(st,num);
    st.push(n);
}

void solve(stack<int> &st){
    //base case 
    if(st.empty()){
        return;
    }
    int num = st.top();
    st.pop();
    solve(st);

    sorted(st,num);
 
}
void display(stack<int>st){
    while(!st.empty()){
        cout<<st.top();
        st.pop();
        if(!st.empty())
        cout<<"->";
    }
    cout<<endl;
}

int main(){
    stack<int> st;
    st.push(5);
    st.push(2);
    st.push(3);
    st.push(5);
    st.push(5);
    st.push(8);
    st.push(4);
    
    solve(st);
    display(st);
     
    return 0;
} 