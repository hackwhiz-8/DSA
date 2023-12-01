// complie time polymorphism
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void print()
    {
        cout << "hello world" << endl;
    }
    void print(int n)
    {
        cout << "second print function " << endl;
        cout << n << endl;
    }
    void print(int n, int r)
    {
        cout << "third print function " << endl;
        cout << n << " " << r << endl;
    }
    // int this only return type is changed and not be able to function overload
    //kyoki function overload ke liye arguments differ hone chahiye , return type nhi
    // int print(){ 
    //     cout<<"first's function with change return type "<<endl;
    //      } 
};
class B
{

public:
    int a;
    void operator+(B& obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "output " << value2 - value1 << endl;
    }
};

int main()
{
    A obj;
    obj.print();
    obj.print(7);
    obj.print(5, 2);

    B obj1, obj2;
    obj2.a = 5;
    obj1.a = 4;
    obj2+obj1;
    return 0;
}

// for function overloading there should be diffrent argument not the return datatype
