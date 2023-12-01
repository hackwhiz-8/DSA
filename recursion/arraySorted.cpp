#include<iostream>
using namespace std;

int arrSorted(int arr[],int n){
    if(n == 1 || n == 0)
    return 1
    ;
    if (arr[n-1]<arr[n-2]){
        return 0;
    }
    
    return  arrSorted(arr, n - 1);
}
int main(){
    int n,index =0;
    cin>>n; 
    int arr[n];
    for(int i = 0;i<n;i++)
    cin>>arr[i];
     if (arrSorted(arr, n))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}