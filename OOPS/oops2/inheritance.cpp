#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class human{
   
    private:
    int weight;
     public:
    int height;
    int age;
    int getAge(){
        return this->age;
    }
    int setWeight(int w){
        this->weight = w;
    }
};

class male:public human{
   public:
   string color;

   void sleep(){
    cout<<"male is sleeping "<<endl;
   }
};

 
int main(){
    male m1;
    m1.height= 56;

    m1.setWeight(100);
    m1.color="gora";
    cout<<m1.age<<endl;
    cout<<m1.height<<endl;
    cout<<m1.weight<<endl;
    cout<<m1.color<<endl;
    

    m1.sleep();

           
    return 0;
}