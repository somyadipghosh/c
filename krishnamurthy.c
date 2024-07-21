#include<stdio.h>
int main()
{
    int n=145,rem,sum=0,fact,i,n1;
    n1=n;
    while (n!=0)
    {
        rem=n%10;
        fact=1;
        for(i=1;i<=rem;i=i+1)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(n1==sum)
    {
        printf("\nkrishamurthy number");
    }
    else
    {
        printf("\nNot a krishnamurthy number");
    }
    return 1;
    
}