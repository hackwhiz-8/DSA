#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void update(int *p){
    *p = *p+1;

}

int getSum(int *arr,int n){
    
    cout<<"size of arr "<<sizeof(arr)<<endl;//this is for bcoz it passes only the address of first element in function as a array

    int sum  = 0;

    for(int i = 0;i<n;i++){
        sum+=i[arr];
    }
    return sum;
}

int main(){

    // int value = 5;
    
    // int *p = &value;
    // update(p);
    // cout<<*p<<endl;

    int arr[10]={1,1,1,1,1,1,1};
    cout<<"SIZE OF ARR IN MAIN FUNCTION "<<sizeof(arr)<<endl;
   cout<< getSum(arr,7)<<endl;//int this first element of array is given as parameter in function 

   cout<<getSum((arr+3),5);//but in this third element of array is given to the parameter of function and start with the third index 
           
    return 0;
}