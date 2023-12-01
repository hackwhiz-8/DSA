#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int compress(vector<char> &chars)
{
    int i = 0;
 
    int count = 0;

    for(int j = 1;j<chars.size();j++){
        if(j==chars.size() || chars[j]!=chars[j-1]){
            chars[i]=chars[j-1];
            i++;
            if(count>1){
                for(char digit : to_string(count)){
                    char[i]=digit;
                    i++;
                }
                count=0;
            }
        }
    }
    return i;
   
}

int main()
{
vector<char> s ;
cin>>s;
int ans= compress(s);
cout<<ans<<endl;
    return 0;
}