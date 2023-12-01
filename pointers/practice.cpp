#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int func(int *arr,int n){
    int sum = 0;

    for(int i = 0;i<n;i++)
    {
        cout<<i[arr]<<endl;
        sum+=i[arr];
    }
    return sum;
}

void func2(int *arr){
    for(int i = 0 ;i<9;i++){
        i[arr]=i+10;
    }
}

int main(){

    int arr[10]={1,2,3,4,5,6,7,8,9};
    

    // int *ptr = &arr[0];
    // cout<<ptr<<endl;//address that is stored in it 
    // cout<<*ptr<<endl;
    // cout<<&ptr<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<*(arr+3)<<endl;
    // cout<<*arr +1<<endl;

    // ptr = ptr + 5;
    // cout<<*ptr<<endl;

    cout<<func((arr+7),3)<<endl;
    func2(arr);
    for(int i = 0;i<9;i++){
        cout<<i[arr]<<" ";
    }

           
    return 0;
}