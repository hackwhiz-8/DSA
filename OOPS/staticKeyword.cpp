#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class hero
{

private:
    int health;

public:
    char level;

    static int timetocomplete; // member

    static int random()
    {
        // cout<<health<<endl;//invalid use in static member
        // cout<<this->health<<endl;//this is unavailable for static member fubction
        return timetocomplete;
    }

    hero()
    {
        cout << "constructor called " << endl;
    }

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

        cout << endl;
    }

    ~hero()
    {
        cout << "destructor called " << endl;
    }
};

// syntax
// datatype->class->scope resolation->field name ->value
int hero::timetocomplete = 5;

int main()
{
    // cout << hero::timetocomplete << endl;
    cout << "by random function" << hero::random() << endl;//no object required to print 

    hero a;
    cout << a.timetocomplete << endl;

    hero b;
    b.timetocomplete = 10;
    cout << b.timetocomplete << endl;
    return 0;
}

/*
static keyword
1.this doesn't belong to object ,as this belong to class
2.no object required to use in main function
3.it is initialize outside the class


static function
1.they can acces only static members
*/