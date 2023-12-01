#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class a
{
private:
   int number;
public:
   
   void print(){
    cout<<"in one "<<endl;
   }
    
};
class b
{
private:
    /* data */
public:
  void print(){
    cout<<"in 2"<<endl;
  }
};

class c : public a,public b
{
private:
    /* data */
public:
    void get(){
        cout<<"hello guys"<<endl;
    }
};

int main(){
    
    c obj1;
    obj1.a::print();
    obj1.b::print();

    return 0;
}