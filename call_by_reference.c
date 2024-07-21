#include<stdio.h>
void f(int *x,int *y)
{
    *x=*x+1;
    *y=*y+1;
}
int main()
{
    int a=10,b=20;
    f(&a,&b);
    printf("\n%d\n%d",a,b);
    return 1;
}