#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(11);
    q.push(1);
    q.push(9);
   cout<<"front "<<q.front()<<endl;
    cout<<"size "<<q.size()<<endl;
    q.pop();
    cout<<"front "<<q.front()<<endl;
    cout<<"size "<<q.size()<<endl;
              
    return 0;
}