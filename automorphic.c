#include<stdio.h>
int main()
{
    int n1,sq,c=1,r,n;
    printf("Enter any number: ");
    scanf("%d",&n);
    n1=n;
    sq=n*n;
    while(n!=0)
    {
        c=c*10;
        n=n/10;
    }
    r=sq%c;
    if(r==n1)
    {
        printf("\nAutomorphic number");
    }
    else
    {
        printf("\nNot a automorphic number");
    }
}