#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class base
{
    int id;
    int number;
    string name;

public:
//constructor
    base(int a, int b,string c)
    {
        this->id = a;
        this->number = b;
        this->name = c;
    }

//friend function 
    friend void change(base);

    void print()
    {
        cout << "id->" << id << endl
             << "the number->" << number << endl
             << "name-> " << name << endl;
    }
};

void change(base b)
{
    b.id = 10;
    b.number = 9876;
    b.name = "mohit";
}

int main()
{
    string s = "kumar";
    base b(10,12345,s);
    change(b);
    b.print();


    return 0;
}