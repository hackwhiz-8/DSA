#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class mainClass1{
    public:
    int height;
    int weight ;
    int age  ;

    void set(int w,int h,int a){
        this ->weight = w;
        this ->height = h;
        this ->age = a;
    }

    void get(){
        cout<<"working "<<endl;
    }

};

class A : public mainClass1{
    public:
    int hello;
    void printA(){
        
        cout<<"inside the class A"<<endl;
        cout<<this->weight<<endl;
    }

};

class B : public mainClass1{
    public:
    int rakesh;
    void print(){
        cout<<"inside the class B"<<endl;
        cout<<this->height<<endl;
    }
}; 

int main(){
       
     mainClass1 c1;
     c1.set(55,5,20);
     A obj1;
     obj1.get();
     obj1.printA();

     B obj2;
     obj2.get();
    // obj2.print2();//this will give error bcoz class B is not have any relation with class A and print2 is member function of class a and not be access on another class
     obj2.print();


    return 0;
}