#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getPairsCount(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int x = 0, c = 0, y, z;
    for (int i = 0; i < n - 1; i++) {
        x = k - arr[i];
        cout<<"the value of x "<<x<<endl;
  
        // Lower bound from i+1
        int y = lower_bound(arr + i + 1, arr + n, x) - arr;
        cout<<"the value of y "<<y<<endl;
        // Upper bound from i+1
        int z = upper_bound(arr + i + 1, arr + n, x) - arr;
        cout<<"the value of z "<<z<<endl;
        c = c + z - y;
        cout<<"the value of c "<<c<<endl;

        cout<<"___________________________________________________"<<endl;
    }
    return c;
}

int main(){
           int arr[10]={1,2,3,4,5,6};
           cout<<getPairsCount(arr,6,6)<<endl;
         
    return 0;
}