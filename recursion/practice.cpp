#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int*arr,int s,int e,int k ){
   int mid= s + (e-s)/2;
   //base case 
   if(s>e){
      return false;
   }
   if(arr[mid]==k){
      return true;
   }
   if(arr[mid]>k){
      binarySearch(arr,s,mid-1,k);
   }else{
      binarySearch(arr,mid+1,e,k);
   }
}

int main(){
           
           int arr[10]={1,2,3,4,5,6,7};

          if( binarySearch(arr,0,6,9)){
            cout<<"found"<<endl;
          }else {
            cout<<"not found "<<endl;
          }

           
    return 0;
}