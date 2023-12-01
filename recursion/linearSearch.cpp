#include<iostream>
using namespace std;
bool linearSearch(int arr[],int n,int key){
    
    for(int i = 0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
    //base case 
    if(n==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else {
        bool remainingPart = linearSearch(arr+1,n-1,key);
    return remainingPart;
    }
}

int main(){
     int arr[5]={3,2,1,4,4};
     int size = 5;
     int key = 2;
     bool ans = linearSearch(arr,size,key);
     if(ans){
        cout<<"key found"<<endl;
     }else{
        cout<<"key not found "<<endl;
     }
     return 0;
}