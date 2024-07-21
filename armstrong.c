#include<stdio.h>
int main()
{
    int n=153,n1,rem,sum=0;
    n1=n;
    while (n!=0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    if(n1==sum)
    {
        printf("\nArmstrong number");
    }
    else
    {
        printf("\nNot a armstrong number");
    }
    return 1;
    
}