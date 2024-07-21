#include<stdio.h>
void f1(int a,int b)
{
    a++;
    b++;
    printf("\n%d",a);
    printf("\n%d",b);
}
int main()
{
    int a=10,b=20;
    f1(a,b);
    printf("\n%d",a);
    printf("\n%d",b);
    return 1;
}