#include<iostream>
using namespace std;

int factorial(int a){

if(a>1){
     return a*factorial(a-1);
}else
  return 1;
}
int main()
{
    int n;
   cin>>n;
    cout<<"  "<<factorial(n);
   return 0;
}