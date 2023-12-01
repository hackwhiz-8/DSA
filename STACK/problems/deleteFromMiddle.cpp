#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(stack<int>&st, int size, int count)
{
    // base case
     if (count == size / 2)
    {
        st.pop();
        return;
    }
    int num = st.top();
    cout<<"the value of num is "<<num<<endl;
    st.pop();
    count+=1;
    solve(st, size, count);
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

int main()
{

    stack<int> st;
    st.push(8);
    st.push(7);
    st.push(6);
    st.push(5);
    st.push(3);
    int size = st.size();
    display(st);
    solve(st,size, 0);
    display(st);

    return 0;
}