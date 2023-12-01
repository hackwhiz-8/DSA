 #include<iostream>
 #include<bits/stdc++.h>
 using namespace std;
  int sqrtSearch(int n){
    int s = 0;
    int e = n-1;
    int  mid = s + (e-s)/2;
     int ans = 0;
    while(s<=e){
        if(mid*mid == n){
            return mid;
        }
        if(mid*mid < n){
          ans = mid;
          s = mid+1;
        }else {
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
  }

  double Decimals(int n,int loop,int tempSol){

    double factor = 1;
    double ans = tempSol;
    for(int i = 0;i<loop;i++){
        factor = factor/10;
        for(double j = ans;j*j<n;j+=factor){
            ans = j;
        }
    }
 
  }

 
 int main(){
       int n;
       cin>>n;
      int tempSol = sqrtSearch(n);
      cout<<Decimals(n,3,tempSol)<<endl;
     return 0;
 }