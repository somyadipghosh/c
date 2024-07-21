#include<stdio.h>
int main()
{
    int n=453,rem,sum=0;
    while (n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("\nSum of digits: %d",sum);
    return 1;
    
}