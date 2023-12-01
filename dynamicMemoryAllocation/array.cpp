#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getSum(int *arr,int n){

    int sum=0;
    for(int i = 0;i<n;i++){
        sum+=arr[i];
    }
return sum;
}

int main(){

    int n;
    cin>>n;
   // int arr[n];//-->bad practice  bcoz the size of array is given on runtime so it will be stored in static memory and crash the program is n is larger 
  int *arr = new int[n];
  //taking input
  for(int i = 0;i<n;i++){
    cin>>arr[i];
  }
// delete arr;
cout<<sizeof(arr)<<endl;

  int ans  = getSum(arr,n);
cout<<"answer "<<ans<<endl;
           
    return 0;
}