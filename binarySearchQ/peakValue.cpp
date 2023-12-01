#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int *findNUmbers(int *arr,int n){
    int temp[n+1] ={0};
    int ans[2];

    for(int i = 0;i<n;i++){
        int index = arr[i];
        if(temp[index]==0 ){
          temp[index]=-1;
        }else{
            ans[0]=index;
        }
    }
    for(int i = 0;i<=n;i++){
        if(temp[i]==0){
            ans[1]=i;
        }
    }
    int *ptr = ans;
    return ptr;
}

int main(){

    int arr[10]={1,2,3,4,5,5,7,8,9,10};
    auto ans = findNUmbers(arr,10);
    cout<<ans[0]<<" "<<ans[1]<<endl;
           
    return 0;
}