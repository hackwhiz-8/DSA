#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool true1(int arr[],int n,int m,int mid){
    int sum = 0;

    for(int i = 0;i<n;i++){
        sum = arr[i]-mid;
       if(sum>=mid){
        return true;
        sum = 0;
      }
    return false;
    }
}



int heightMax(int arr[],int n,int m){
    sort(arr,arr+n);
     int s = 0;
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i];
    }
    int e = sum;
    int ans = 0;
    int mid = s + (e-s)/2;
    
    while(s<=e){
        if(true1(arr,n,m,mid)){
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
           int arr[10] = {20,15,10,17};
           cout<<heightMax(arr,4,7)<<endl;
    return 0;
}