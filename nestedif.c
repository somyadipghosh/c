#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    //nested if else statement
    if(a==b)
        printf("equal");
    else if (a>b)
            printf("a is greater");
         else
            printf("b is greater");
    return 1;
}