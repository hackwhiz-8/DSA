#include<iostream>
using namespace std;
int fib(int x){
  //base case
  if((x==0 )||( x==1)){
    return x;
    }
//recursive call 
       return (fib(x-1)+fib(x-2));    
}
int sum(int x){
  if((x==0 )||( x==1)){
    return x;
    }
    int sum = sum + (fib(x-1)+fib(x-2));
    return sum;
}

int main()
{
  int n,i=0;
  cin>>n;
  while(i<n){
  cout<<" "<<fib(i)<<" ";
    i++;
    cout<<" "<<sum(n)<<endl;
    }
    
  return 0;
}