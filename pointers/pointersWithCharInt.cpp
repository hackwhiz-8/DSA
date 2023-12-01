#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    // int arr[10]={1,2,3,4,5,6};

    // cout<<arr<<endl;//this gives the address of first element 

    // int *ptr = &arr[0];
    // cout<<ptr<<endl;//and this is also prints the value of ptr , that stores the vakue of arr's first element 

    // char ch[10] = "abcdef";
    // cout<<ch<<endl;//in this print entire char array cout differs with char array

    // char *ptr2 = &ch[0];
    // cout<<ptr2<<endl;  // and in this case this is also print tha entire char array 
/*
    char temp = 'z';

    char *ptr3 = &temp;
    cout<<ptr3<<"-----"<<endl;
    */


    char cahr[10]="qwerty";//if i want to modify the string i use array and that's why it is dangereous to use bcoz it has no ground on program sometimes 
    cahr[0]='Q';
    cout<<cahr<<endl;
    
    char *ptr4  = "qwerty";//this cannot be changed after intialization and this is read only purpose 

    cout<<ptr4<<endl;
    // ptr4[0]='Q';//this cannot be modified 
    cout<<" --"<<ptr4<<endl;
    
           
    return 0;
}