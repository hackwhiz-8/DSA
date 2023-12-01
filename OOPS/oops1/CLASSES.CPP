#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class hero
{
    // properties
private:
    int health; // this is private element and cannot be accessed outside the class.

public: //
    hero()
    {
        cout << "constructor called " << endl; // this will be disable after making user defined constructor
    }
    // user define parametrised constructor
    hero(int health, char level) // user defined constructor
    {
        this->level = level;
        this->health = health; // this is a pointer that store the address of current element
        cout << "this-> " << this << endl;
    }
    // copy constructor
    // hero(hero temp)//pass by value
    hero(hero &temp)
    { // pass by refrence
        cout << "copy constructor called " << endl;
        this->health = temp.health;
        this->level = temp.level;
    }
    char level;

    int gethealth()
    {
        return health;
    }

    char getlevel()
    {
        return level;
    }
    void sethealth(int h)
    {
        health = h;
    }
    void setlevel(char l)
    {
        level = l;
    }

    void print()
    {
        cout << "health " << this->health << endl;
        cout << "level " << this->level << endl;
    }
};

int main()
{
    // copy constructor
    hero s(70, 'f');

    s.print();
    cout << "for r ->>" << endl;

    hero r(s);
    r.print();

    /*
        // object created statically
        hero ramesh(10);
        cout << "adress of ramesh " << &ramesh << endl;
        */

    /*

    //static call for constructor
        hero alex;

    //dynamically call for constructor
    hero *h = new hero;
    */

    /*
     //static allocation
      hero alex;
    //   alex.health=70;
    //static
      alex.level= 'A';
    //   cout<<alex.health<<endl;this will give error and cannot be accessed
      cout<<alex.level<<endl;

      //getter and setter
      alex.sethealth(80);
      alex.setlevel('u');
      cout<<alex.gethealth()<<endl;
      cout<<alex.getlevel()<<endl;
      cout<<"size of ramesh "<<sizeof(alex)<<endl;

      //dynamically
      hero *b = new hero;
      b->setlevel('A');
      b->sethealth(80);

      cout<<"level is "<<(*b).gethealth()<<endl;
      cout<<"health is "<<(*b).getlevel()<<endl;

      cout<<"level is "<<b->gethealth()<<endl;
      cout<<"health is "<<b->getlevel()<<endl;
      */

    return 0;
}