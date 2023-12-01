#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int pivot(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s = mid+1;
        }else{
            e = mid; //kyoki ye piche wali line me chla jaega 
        }
        mid = s + (e-s)/2;
    }
    return e; // why s is returned ?
}

int main(){
        int arr[10] = {7,9,1,2,3};
        cout<<pivot(arr,5)<<endl;

    return 0;
}