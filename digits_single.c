#include<stdio.h>
int main()
{
    int n=453,rem;
    while (n!=0)
    {
        rem=n%10;
        printf("\n%d",rem);
        n=n/10;
    }
    return 1;
    
}