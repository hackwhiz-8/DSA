#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[7]={100, 80, 60 ,70, 60, 75, 85};
    stack<int> st;
  int n  = 7;
    st.push(0);
    vector<int> ans(n);
    ans[0] = (1);
    int count = 1;
    for (int i = 1; i < n; i++)
    {
            int k = 0;
        while (arr[st.top()] <= arr[i])
        {     k++;
            count += 1;
            st.pop();
        }
            cout<<"loop "<<k++<<endl;
        ans[i] = count;
        count = 1;
        st.push(i);
    }
    

    return 0;
}