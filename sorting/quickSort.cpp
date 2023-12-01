#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int partition(int *arr,int s,int e){
    int pivot = arr[s];
    int count = 0;
    for(int i = s+1;i<=e;i++){
        if(pivot>arr[i]){
            count++;
        }
    }
    int pivotIndex = s + count;
    swap(arr[pivotIndex],arr[s]);
    int i = s;
    int j = e;

    while((i<pivotIndex) && (j>pivotIndex)){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if((i<pivotIndex && j>pivotIndex)){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}

void solve(int*arr,int s ,int e){
    //base case 
    if(s>=e){
        return;
    }

    int p = partition(arr,s,e);
    //recursive part
    //left part 
    solve(arr,s,p-1);
    //rightpart
    solve(arr,p+1,e);
}
 

int main(){
    int arr[10]= {1,4,7,8,9,10};

    solve(arr,0,5);
    for(int i = 0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}