#include<iostream>
using namespace std;
int arraySum(int arr[],int index,int n){

    if(index == n){
        return 0;
    }
    int sum =arr[index]+arraySum(arr,index+1,n);
    return sum;
}

int main(){
    int n;
    cin>>n;
    int index=0;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<arraySum(arr,index,n)<<endl;
    return 0;
}