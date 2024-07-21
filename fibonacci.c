#include<stdio.h>
void fib(int n)
{
    int a=0,b=1,c=0;
    for(int i=0;i<n;i++)
    {
        if(i<2)
        {
            printf("%d, ",i);
        }
        else
        {
            c=a+b;
            a=b;
            b=c;
            printf("%d, ",c);
        }
    }
}
int main()
{
    int n;
    printf("\nEnter terms: ");
    scanf("%d",&n);
    fib(n);
    return 1;
}