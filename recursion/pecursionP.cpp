#include<iostream>
using namespace std;
int power(int n){
    int sum;
    if(n>=1)
   sum = 2*power(n-1);
   else 
   return 1;
}

int main(){
    int n;
    cin>>n;
    int S=power(n);
    cout<<S<<"   "<<endl;
  return 0;
}