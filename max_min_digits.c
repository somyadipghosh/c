#include<stdio.h>
int main()
{
    int n=453,rem,min=9,max=0;
    while (n!=0)
    {
        rem=n%10;
        if(rem>max)
        {
            max=rem;
        }
        if(rem<min)
        {
            min=rem;
        }
        n=n/10;
    }
    printf("\nMax: %d",max);
    printf("\nMin: %d",min);
    return 1;
    
}