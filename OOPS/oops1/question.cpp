#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class car{
    public:
    int gears;
    string color;
    car(int a,string b){
        this->gears = a;
        strcpy(color,b);
    }
    void printCarInfo(){
        cout<<this->gears<<endl;
        cout<<this->color<<endl;
    }
};

class raceCar:public car{
    public:
    int maxSpeed;
    raceCar(int a,int b,string c){
        this->maxSpeed = a;
        this->gears = b;
        strcpy(color,c);
    }
    void printRaceCarinfo(){
        cout<<this->maxSpeed<<endl;
        cout<<this->gears<<endl;
        cout<<this->color<<endl;
    }
};

int main(){
     raceCar r1(1000,10,"black");
     r1.printRaceCarinfo();        
    return 0;
}