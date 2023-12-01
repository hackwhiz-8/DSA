#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
           int arr[10] = {62,25,12,22,11};
           int n = 5;
           for(int i=0;i<n-1;i++){

            for(int j = i+1;j<=n-1;j++){
                  if(arr[j]<arr[i]){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                  }
            }
           }
           for(int i = 0;i<=n-1;i++){
            cout<<arr[i]<<" ";
           }

    return 0;
}