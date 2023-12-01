#include<stdio.h>
#include<conio.h>
int fun(int);
void main()
{
    int k ;
    k = fun(k);
    printf("%d",k);

}
int fun( int a)
{
    int s;
    if(a==1)
    return(a);
    s=a+fun(a-1);
    return (s);
}