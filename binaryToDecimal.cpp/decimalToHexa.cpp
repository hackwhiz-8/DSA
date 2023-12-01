#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,temp = 0,ans = 0,i=1;
    cin>>n;

    while(n){
        int temp = n%16;
        n= n/16;
        if(temp)
        ans = ans + temp*i;
        i = i*10;
    }
    cout<<ans<<endl;

           
    return 0;
}