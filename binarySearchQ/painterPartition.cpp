#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool true1(int arr[],int n,int k,int mid){
    int boardSum = 0;
    int painterCount = 1;

    for(int i = 0;i<n;i++){
        if(boardSum + arr[i]<=mid){
           boardSum+=arr[i];
        }else {
            painterCount++;
            if((painterCount>k) || (arr[i]> mid)){
                return false;
            }
            boardSum = arr[i];
        }
    }
        return true ;
}


int painterPartition(int arr[],int n,int k){
    int s = 0;
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i];
    }
    int e = sum;
    int ans = 0;
    int mid = s + (e-s)/2;
    cout<<"function working "<<endl;
    while(s<=e){
        if(true1(arr,n,k,mid)){
          ans = mid;
          e = mid-1;
        }else {
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans ;
}

int main(){
    int arr[10]= {1,2,3,4,5,6};
           cout<<painterPartition(arr,6,2)<<endl;
           
    return 0;
}