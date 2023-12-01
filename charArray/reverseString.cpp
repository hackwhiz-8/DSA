#include<iostream>
using namespace std;
 void reverse(char name[],int n){
   int st= 0;
   int e = n-1;
   while(st<e)
   {swap(name[st++],name[e--]);}

 }

 int getLength(char name[]){
    int count=0;
    
    for(int i = 0; name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout<<"enter the name ";
    cin>> name ;
    cout<<name<<endl;
    int n = getLength(name);
reverse(name,n);
    cout<<name;
    return 0;
}