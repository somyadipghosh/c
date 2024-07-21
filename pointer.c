#include<stdio.h>
int main()
{
    int x=12;
    int *p1;
    p1=&x;
    printf("\nAddress of x: %p",p1);
    printf("\nAddress of x: %p",&x);

    printf("\nValue of x: %d",x);
    printf("\nValue hold by x accessing through pointer: %d",*p1);
    return 1;
}