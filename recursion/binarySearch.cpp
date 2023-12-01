#include<iostream>
using namespace std ;
void print(int arr[],int s,int e){
    for(int i = s;i<e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool binarySearch(int arr[],int s,int e,int k){
    print(arr,s,e);
    //base case 
    //elmemt not found
    if(s>e)
    return false;
    int mid = s + (e-s)/2;
    cout<<" value of mid "<<arr[mid]<<endl;
    //element found
    if(arr[mid]==k)
    return true;

    if(arr[mid]>k){
        return binarySearch(arr,s,mid-1,k); //left part
    }else{
        return binarySearch(arr,mid+1,e,k);//right part
    }
}
int main(){
    int arr[16]={1,2,3,4,6,7,8,9,10,11,12,13,14,15,16};
    int size=16;
    int key= 3;
    int st=0,e=size-1;
    int ans =binarySearch(arr,st,e,key);
    if(ans){
        cout<<"found"<<endl;
    }else{
        cout<<"not found"<<endl;
    }
    return 0;
}