#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
           int row ;
           cin>>row;
           int col;
           cin>>col;
           //creation
           int **arr = new int*[row];
           for(int i = 0;i<row;i++){
              arr[i]=new int[col];//allocating memory to heap.
           }
        // input
           for(int i = 0;i<row;i++){
            for(int j = 0;j<col;j++){
                 cin>>arr[i][j];
            }
           }
           cout<<endl;

           //output
           for(int i = 0;i<row;i++){
            for(int j = 0;j<col;j++){
                cout<<arr[i][j]<<" ";
            }cout<<endl;
           }

           //releasing memory 
            for(int i = 0;i<row;i++){
            delete []arr[i];
           }
          delete[]arr;
    return 0;
}