#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    //check whether a number is even or odd//
    //5/2==>2 (quotient)
    // 5%2=>1 (Remainder)

    if(a % 2==0)
        printf("even");
    else
        printf("odd");
}