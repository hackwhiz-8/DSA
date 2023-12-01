#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool ispossible1(int *arr,int mid ,int m,int n){
  int studentCount = 1;
  int pageSum  = 0;
  for(int i = 0;i<n;i++){
    if(arr[i]+pageSum <=mid){
      pageSum+=arr[i];
    }
    else {
      if(studentCount>m || arr[i]>mid){
        return false;
      }
      pageSum = arr[i];
    }
  }
  return true;
}

int bookAllocation(int *arr,int n,int m){
  int s = 0;
  int sum = 0;
  for(int i = 0; i<n;i++){
    sum+=arr[i];
  }
  int ans = 0;
  int e = sum;
  int mid = (s+e)/2;
  while(s<=e){
    if(ispossible1(arr,mid,n,m)){
      ans = mid;
      e = mid-1;
    }else{
      s = mid+1;
    }
    mid = (s+e)/2;
  }
  return ans;
}

int main(){
           int arr[10]={10,20,30,40};
  cout<<bookAllocation(arr,3,2)<<endl;
    return 0;
}