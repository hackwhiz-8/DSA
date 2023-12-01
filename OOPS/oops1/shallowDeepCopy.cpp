#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class hero
{
    // properties
private:
    int health; // this is private element and cannot be accessed outside the class.--> this is example of shallow copy

public: //
    char *name;
    char level;

    hero()
    {
        name = new char[100];
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
        cout << "name " << this->name << endl;
        cout << endl;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    // copy constructor

    hero(hero &temp)
    { // here temp is the value passed that is hero one;
        char *ch = new char[strlen(temp.name) + 1];//this is used to make new array that helps in deep copy
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "copy constructor called " << endl;
        this->health = temp.health;
        this->level = temp.level;
    }
};

int main()
{
    hero hero1;
    hero1.sethealth(12);
    hero1.setlevel('d');
    char name[7] = "alex";
    hero1.setName(name);
    hero1.print();

    // use default copy constructor //to use this we have to delete user defined constructor first
    hero hero2(hero1);
    hero2.setName("rakesh");
   cout << "before " << endl;
   hero2.print();
    // hero hero2 = hero1; another method to copy
    hero1.name[0] = 'G'; // in this name is char pointer that stores the address of name when yo change it for any classe variable it chage for all variable while on other variable which are not pointer remains diffrent
   cout << "after " << endl;
   hero2.print();
   hero1.print();

   hero1 = hero2;//copy assigment operator 
   hero1.print();
   hero2.print();


hero hero ;
hero.sethealth(80);
cout<<hero.gethealth()<<endl;
    return 0;
}
