#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "{[()]}";
    stack<char> st;

    for (int i = 0; i < str.length(); i++)
    {
        if (st.empty())
        {
            st.push(str[i]);
        }
        else if ((st.top() == '(' && str[i] == ')') ||
                (st.top() == '{' && str[i] == '}') ||
                (st.top() == '[' && str[i] == ']')){
                    st.pop();
                }else{
                    st.push(str[i]);
                }
    }
    if(st.empty()){
        cout<<"stack is balanced "<<endl;
    }else{
        cout<<"stack is unbalanced "<<endl;
    }

    return 0;
}