#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
int n ;
cin>>n;
int ans = 0;
int i=1;
while(n != 0){
    int bit = n&1;
    ans = (bit*pow(10,i))+ans;
    n= n>>1;
    i++;
    cout<<bit<<endl;
    cout<<ans<<endl;
}

cout<<" answer is "<<ans <<endl;


cout<<"binary to decimal"<<endl;
//binary to decimal
int n2;
cin>>n2;
  int j = 1;
  int ans2  = 0;

while(n != 0){
    int bit = n % 10;
    if(bit==1){
        ans2 = ans2  + pow (2,j);
    }
    n = n/10;
    j++;
}
cout<<ans2<<endl;
    return 0;
}              