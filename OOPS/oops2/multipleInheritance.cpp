#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class animal{
      public:
      void speak(){
        cout<<"speaking"<<endl;
      }
};

class animal2{
      public:
      void bark(){
        cout<<"barking"<<endl;
      }
};

class dog : public animal,public animal2{
       public:
      
};

int main(){

 dog d1;
 d1.speak();

           
    return 0;
}