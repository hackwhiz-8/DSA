#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
        vector<int> v;
        cout<<v.capacity()<<endl;

        v.push_back(2);
        cout<<"capacity "<<v.capacity()<<endl;
        cout<<"size "<<v.size()<<endl;

        v.push_back(2);
        cout<<"capacity "<<v.capacity()<<endl;
        cout<<"size "<<v.size()<<endl;

        v.push_back(2);
        cout<<"capacity "<<v.capacity()<<endl;
        cout<<"size "<<v.size()<<endl;

        v.push_back(2);
        cout<<"capacity "<<v.capacity()<<endl;
        cout<<"size "<<v.capacity()<<endl;

        cout<<"element at index 2 "<<v.at(2)<<endl;
    return 0;
}