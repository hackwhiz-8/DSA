#include <iostream>
#include <bits/stdc++.h>
using namespace std;

char tolowerCase(char);

int isPalindrome(string S)
{
    // Your code goes here
    int s = 0;
    int e = S.length() - 1;
    while (s < e)
    {
        if (tolowerCase(S[s]) != tolowerCase(S[e]))
        {
            return {0};
        }
        else
        {
            s++;
            e--;
        }
    }
    return {1};
}
char tolowerCase(char name)
{

    if ((name >= 'a' && name <= 'z') || (name >= '0' && name <= '9'))
    {
        return name;
    }
    else
    {
        char temp = name - 'A' + 'a';
        return temp;
    }
}

bool valid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return true;
    }
    return false;
}

int isvalidpalindrome(string s)
{

    string ans = "";
    for (int j = 0; j < s.length(); j++)
    {
        if (valid(s[j]))
        {
            ans.push_back(s[j]);
        }
    }
    // lowercase
    // for (int i = 0; i < ans.length(); i++)
    // {
    //     ans[i] = tolowerCase(ans[i]);
    // }

    return isPalindrome(ans);
}

int main()
{
    string name;
    cin >> name;

 int ans = isvalidpalindrome(name);
 cout<<ans<<endl;

    return 0;
}