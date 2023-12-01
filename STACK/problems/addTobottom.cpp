#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(stack<int>&st,int N){
    //base case 
    if(st.empty()){
        st.push(N);
        return;
    }

    int num  = st.top();
    st.pop();
    solve(st,N);
    st.push(num);
}
void display(stack<int>st)
{
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
        if(!st.empty()){
            cout<<"->";
        }
    }
    cout<<endl;
}

int main(){
           
    stack<int> st;
    st.push(8);
    st.push(7);
    st.push(6);
    st.push(5);
    st.push(3);
    display(st);
    solve(st,10);
    display(st);

    return 0;
}