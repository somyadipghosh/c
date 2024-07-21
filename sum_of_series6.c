#include<stdio.h>
int main()
{
    int sum=0;
    int f=0;
    for(int i=1;i<=4;i++)
    {
        f=f+i;
        sum=sum+f;
    }
    printf("%d",sum);
    return 0;
}