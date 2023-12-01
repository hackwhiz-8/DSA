#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i = 1;i<=n;i++){
        for(int j =i;j<=n;j++){
            cout<<" ";
        }
        for(int  k = i;k>=1;k--){
            cout<<"*";
        }
        for(int  k = i-1;k>=1;k--){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}