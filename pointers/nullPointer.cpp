#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

  cout<<"hello world "<<endl;
     int a = 10;
    int *ptr = &a;

    cout<<"hello world"<<endl;
    cout<<*ptr<<endl;
    int *p = 0;//this pointer not pointing to any variable in memeory location so if i try to assign any new value it gives nbothing ,but it can store address
    // p = &a;
    // cout<<*p<<endl;

    int *ptr1 = &a;
    ptr1 = ptr1 + 1;
    cout<<a<<" "<<ptr1<<endl;//a will give 10 and pointer will give garbage value bcoz it has nothing and next index
    
    char s[] = "hello";
    char *s1 = s;
    cout<<s[0]<<" "<<s1<<endl;
    cout<<s1[0]<<endl;
    return 0;
}