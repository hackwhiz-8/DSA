#include<stdio.h>
#include<conio.h>
void TOH(int ,char,char,char);
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    char a='A';
    char b='B';
    char c='C';
    TOH(n,a,b,c);
    
}

void TOH(int n,char begin,char aux,char end)
{
    if(n>=1){
        TOH(n-1,begin,end,aux);
        printf("%c to %c \n",begin,end);
        TOH(n-1,aux,begin,end);
    }
}