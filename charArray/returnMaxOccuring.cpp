#include<iostream>
using namespace std;

char getMax(string s){
    int arr[26] ={0};
    for(int i = 0;i<s.length();i++)
      {
       char ch = s[i];
       int n=0;
       if(ch>='a' && ch<='z'){
         n = ch - 'a';
       }
       if(ch>='A' && ch<='Z'){
         n = ch - 'A';
       }

       arr[n]++;
      }
      int maxi=0;
      int count =0;
      for(int i = 0;i<26;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
            count = i;
        }
      }
      return 'a'+ count;
    }


int main(){
    string s;
    cin>>s;
    getline(cin,s);

    char ans =  getMax(s);
  cout<<ans<<endl;

    return 0;
}

/*
time complexity= O(n)
sapce complexity = o(n)

*/