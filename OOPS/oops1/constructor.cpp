#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class student{

    int roll_num;
    char name[10];
    int fee;

    public:
    // student (){//this is default constructor 
    //     cout<<"entr the rollnum ";
    //     cin>>roll_num;
    //     cout<<"entr the name ";
    //     cin>>name;
    //     cout<<"entr the fee ";
    //     cin>>fee;
    // }


    stuent(){}   //default constructor with empty body

    student(int roll_num1,char name1[],int fee1){//parameterized constructor  this is used to initialize the value 
        roll_num = roll_num1;
        strcpy(name,name1);
        fee= fee1;
    }

    student (student &s1){ // copy constuctor to copy from one object to another object
      roll_num = s1.roll_num;
      strcpy(name,s1.name);
      fee = s1.fee;
    }

    void display(){
        cout<<roll_num<<"  "<<name <<"  "<<fee<<endl;
    }
};

int main(){
    //constructor called 
    student s1(12,"mohit",99999);
    s1.display();

  student  s2(s1);
    s2.display();
           
    return 0;
}