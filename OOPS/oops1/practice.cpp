#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class complexNumbers{
     int real;
     int imaginary;
     int realPart;
     int imaginaryPart;
    public:
    
      //initialize the value 
    complexNumbers(int real1,int imaginary1){
        real = real1;
        imaginary = imaginary1;
    }
     //copy constructor 
    void plus(complexNumbers & s1){
        realPart = real + s1.real;
        imaginaryPart = imaginary + s1.imaginary;
    }
    void multiply(complexNumbers & s1){
         int temp1,temp2;
         temp1 = real*s1.real -imaginary*s1.imaginary;
         temp2 = real*s1.imaginary + imaginary*s1.real;

         realPart = temp1;
         imaginaryPart = temp2;
    }
    void print(){
        cout<<"real part "<<realPart<<"imaginary part "<<"i"<<imaginaryPart<<endl;
    }

};



int main(){
       
       complexNumbers c1(5,8);
       complexNumbers c2(2,9);

       c1.plus(c2);
       c1.print();

       c1.multiply(c2);
       c1.print();

    
    
    return 0;
}