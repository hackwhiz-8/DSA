#include<iostream>
#include<list>
#include<bits/stdc++.h>
using namespace std;

int main(){
           
           list<int> l;
           list<int> n(5,100);//intialize with 5 times 100
           list<int> ew(n);//maked copy of n
           for(int i : n){
            cout<<i<<" ";
           }cout<<endl;


            for(int i : ew){
            cout<<i<<" ";
           }cout<<endl;


           l.push_back(1);
           l.push_front(2);

           for(int i : l){
            cout<<i<<" ";
           }
           cout<<endl;
        l.erase(l.begin());
        for(int i:l){
            cout<<i<<" ";
        }cout<<endl;
        cout<<"size of list "<<l.size()<<endl;


    return 0;
}