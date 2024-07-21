#include<stdio.h>
int main()
{
    int n=453,rem,rev=0;
    while (n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("\nReverse of a number: %d",rev);
    return 1;
    
}