#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(int arr[] , stack<int> &st)
{
    st.push(-1);
    for (int i = 4-1; i >= 0; i--)
    {
        int curr = arr[i];
        while(st.top()> curr){
            st.pop();
        }
        cout<<st.top()<<endl;
        st.push(curr);
        }
    }


int main()
{

    int arr[4] = {2, 1, 4, 3};
    stack<int> st;

    solve(arr, st);

    return 0;
}