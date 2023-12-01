#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class base{
    int length;
    public:
    void print(){
        cout<<"this is base class "<<endl;
    }
    base(){
        length = 10;
    }

   friend int calculate(base);

};

int calculate(base b){
   b.length += 10;
   return b.length;
}


int main(){

    base b;
    cout<<"the length is "<<calculate(b)<<endl;
    
    return 0;
}