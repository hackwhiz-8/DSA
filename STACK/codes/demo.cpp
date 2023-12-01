#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// void solve1(stack<char> &st, char ch)
// {
//     cout << "hello" << endl;
//     // base case
//     if (st.top() == '{')
//     {
//         st.pop();
//         return;
//     }
//     else
//     {
//         st.push(ch);
//         return;
//     }
//     char num = st.top();
//     st.pop();
//     solve1(st, ch);
//     st.push(num);
// }

int solve(stack<char> &st, string &str)
{
    int size = str.length();
    if (size % 2 == 1)
    {
        return -1;
    }
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (ch == '{')
        {
            st.push(ch);
        }
        else
        {
            if ((!st.empty()) && (st.top() == '{'))
            {
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }
    }
    int count1 = 0;
    int count2 = 0;

    while (!st.empty())
    {
        cout << st.top() << " " << endl;
        if (st.top() == '{')
        {
            count1++;
        }
        else
        {
            count2++;
        }
        st.pop();
    }
    int ans = ((count1 + 1) / 2) + ((count2 + 1) / 2);
    return ans;
}

int main()
{
    string str = "{{{{{{";
    stack<char> st;
    int size = str.length();
    int ans = solve(st, str);
    cout << "hello" << ans << endl;
    return 0;
}