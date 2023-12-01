#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int row;
    cout<<"enter the rows -";
    cin>>row;
    int col[row];

    int **arr = new int*[row];
    for(int i = 0;i<row;i++){
        cout<<"enter the column -";
        cin>>col[i];
        int n = col[i];
        arr[i] = new int[n];
    }
    // for(int i = 0;i<row;i++){
    //     cout<<col[i]<<" ";
    // }

    for(int i = 0;i<row;i++){
        cout<<"input the numbers -"<<endl;
        for(int j = 0;j<col[i];j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0;i<row;i++){
        cout<<"row- "<<i+1<<endl;
        for(int j = 0;j<col[i];j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
           
    return 0;
}