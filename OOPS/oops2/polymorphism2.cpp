//run time polymorphism
//also called dynamic polymorphism
//method overidding 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Animal{

   public:

   
   void speak(){
    cout<<"speaking"<<endl;
   }
};

class dog : public Animal{
    public:
    void speak(){
        cout<<"barking "<<endl;
    }
};
class billi : public Animal{
    public:
   
    void speak(){
          cout<<"meow meow"<<endl;
    }
};
int main(){

        dog obj;
        obj.speak();
        obj.Animal::speak();
        billi b1;
        b1.speak();
        b1.Animal::speak();
           
    return 0;
}