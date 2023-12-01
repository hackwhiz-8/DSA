#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=100;
   

           
           for(int row=0;row<n;row++){
            for(int space = n;space>row+1;space--){
                cout<<" ";
            }
            for(int star = 0;star<=row;star++){
                cout<<"* ";
            }
            cout<<endl;
           }
           for(int row=n-2;row>=0;row--){
            for(int space = n;space>row+1;space--){
                cout<<" ";
            }
            for(int star = 0;star<=row;star++){
                cout<<"* ";
            }
            cout<<endl;
           }
          
    return 0;
}