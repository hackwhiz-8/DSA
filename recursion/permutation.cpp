#include<iostream>
using namespace std;
void swap(char*x,char*y){
    char ch =*x;
    *x=*y;
    *y=ch;
}
void permutation(char *s,int i,int n){
static int count ;
if(i ==n){
    count++;
    cout<<count<<" "<<s<<endl;
}
else {
    for(int j = i;j<=n;j++){
        swap((s+i),(s+j));
        permutation(s,i+1,n);
        swap((s+i),(s+j));//backtracking 
    }
}
}
int main(){
    char s[]= "ABC";
    int n = 2;
    int i = 0;
    permutation(s,i,n);

    return 0;
}
