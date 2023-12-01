#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class shape{
     string mytype;
     public:

};

class square1:public shape{
      int a;
      public:
      void get(int n){
        this->a = n;
      }
      void printMyType(){
        cout<<"sqaure"<<endl;
      }
      void calculateArea(){
        cout<<a*a<<endl;
      }
};

class rectangle1:public shape{
    int length ;
    int breadth;
    public:
    rectangle1(int a,int b){
        this->length= a;
        this->breadth= b;
    }
    void printMyType(){
        cout<<"rectangle"<<endl;
    }
  void calculateArea(){
         cout<<length*breadth<<endl;
    }

};

int main(){

    square1 s1;
    s1.get(5);
    s1.printMyType();
    s1.calculateArea();
    rectangle1 r1(4,5);
    r1.printMyType();
    r1.calculateArea();
           
    return 0;
}