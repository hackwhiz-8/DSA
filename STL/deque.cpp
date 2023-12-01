#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    deque<int> d;
    d.push_back(6);
    d.push_back(5);
    d.push_back(4);
    d.push_back(3);

    d.push_front(2);
    for(int i : d){
        cout<<i<<" ";
    }
    cout<<endl;
    // d.pop_back();
   // d.pop_front();//remove from front 
    // for(int i : d){
    //     cout<<i<<endl;
    // }

    cout<<" print first index element "<<d.at(0)<<endl;

    cout<<"first "<<d.front()<<endl;
    cout<<"last "<<d.back()<<endl;

    cout<<"empty or not "<<d.empty()<<endl;

    cout<<"before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase "<<d.size()<<endl;
    
    return 0;
}