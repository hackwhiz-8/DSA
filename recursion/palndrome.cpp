#include <iostream>
// #include<bits/stdc++.h>
using namespace std;

char reverse(string &s, int st, int e)
{
    cout << "string in the process " << s << endl;
    // base case
    if (st > e)
        return 0;
    char temp = s[st]; // alternate by swap inbuilt function
    s[st] = s[e];
    s[e] = temp;
    return reverse(s, st + 1, e - 1);
}

int main()
{
    string s = "suman";
    int size = s.length();
    int st = 0;
    int e = size - 1;
    reverse(s, st, e);
    cout << s << endl;
    return 0;
}
