#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//fisrt in first out 
int main(){
     
     queue<string> q;
     q.push("mohit");
      q.push("kumar ");
       q.push("sain");

       cout<<"first element "<<q.front()<<endl;
    //    cout<<"last element "<<q.last()<<endl;
    q.pop();
    cout<<"size "<<q.size()<<endl;

     
     return 0;
}