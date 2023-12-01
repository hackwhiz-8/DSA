#include<iostream>
using namespace std;

int getLength(char name[]){
    int count=0;
    
    for(int i = 0; name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){ x c   x    
      char ch[30];
     printf("enter the name ");
     cin>>ch;// this will not take space ,tab and enter 
     cout<<ch<<endl;

     cout<<"length of  name is "<<getLength(ch)<<endl;
    return 0;
}