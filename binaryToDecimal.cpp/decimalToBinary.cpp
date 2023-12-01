#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int temp = 0;
  int ans = 0;
  int i = 1;

  while (n != 0 )
  {
    temp = n % 2;
    n = n / 2;
    cout<<"temp "<<temp<<endl;
    ans = temp*i+ans;
    i=i*10;
    cout<<"ans "<<ans<<endl;
    
  }

  cout << ans << endl;
  return 0;
}