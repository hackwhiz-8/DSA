#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int score = 100;//global variable

void a(int& i){
    cout<<i<<endl;
    cout<<score<<" score "<<endl;
}

int main(){
        cout<<score<<" in main function "<<endl;
        int i = 5;
        a(i);

    return 0;
}