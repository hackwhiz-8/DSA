#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void swapnumber(string &s)
{
    int st = 0;
    int e = s.length() - 1;
    while (st < e)
    {
        swap(s[st++], s[e--]);
    }
}

string reverseString(string &S)
{

    int st = 0;
    int e = 0;
    int k =0;
    for (int i = 0; i <= S.length() ; i++)
    {
        if (S[i] == '.')
        {
            e = i - 1;

            while (st < e)
            {
                swap(S[st++], S[e--]);
            }
            st = i + 1;
        }
        
        if (S[i]== '\0')
        {   
           
            e = i - 1;
            while (st < e)
            {
                swap(S[st++], S[e--]);
            }
            
        }
    }
    return S;
}
int main()
{
    string s;
    getline(cin, s);
    swapnumber(s);
    cout << s << endl;

    string ans = reverseString(s);
    cout << ans << endl;
    return 0;
}