#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class hero
{
    // properties
private:
    int health; // this is private element and cannot be accessed outside the class.--> this is example of shallow copy

public: //
    char *name;
    char level;

    hero(){
        cout<<"simple constructor called "<<endl;
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

    
    ~hero(){
        cout<<"destructor called "<<endl;
    }

    // copy constructor

    hero(hero &temp)
    { // here temp is the value passed that is hero one;
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "copy constructor called " << endl;
        this->health = temp.health;
        this->level = temp.level;
    }



};


int main(){
           
     hero moose;
  //for static destructor called automatically 
     //dynamiacally
     hero *b = new hero();//object
     //for this destructor will not be called untill its mannual desructor call 
    //  delete b;
     //not mannual destructor called to de allocate the memory now the destructor of class will be called 

    return 0;
}

/*destructo-->  same for constructor 
1.name same as class
2.no return type
3.no input parameters
the diffrence b/w is desturctor is initaloize by ~ tilda  sign 


home work 
const keyword ->member datatypes ,function,object creation

initialization list
*/

