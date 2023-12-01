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
    return s; // why s is returned ?
}
int binarySearch(int arr[],int n,int s,int e,int key){
    
    // int s = 0;
    // int e = n-1;
    int mid = s  + (e-s)/2;

    while(s<=e){
       
        if(arr[mid]==key){
            return mid;
        }

        if(arr[mid]>key){
            e= mid-1;

        }else if(arr[mid]<key){
            s = mid+1;
        }
        mid = (s+e)/2;
    }
    return -1;
}

int searchRotated(int arr[],int n,int key){
   
    int BreakPoint = pivot(arr,5);
    if((key>=arr[BreakPoint]) && (key <= arr[n-1])){
        return binarySearch(arr,5,BreakPoint,n-1,key);
    }else{
        return binarySearch(arr,5,0,BreakPoint,key);
    }
    
}

int main(){
        int arr[10] = {7,9,1,2,3};
        int key = 3;
        // cout<<pivot(arr,5)<<endl;
        cout<<searchRotated(arr,5,key)<<endl;

    return 0;
}
//most asked question

t.c  O(logn);