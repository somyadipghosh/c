#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=1;i<=5;i++)
    {
        if(i%2==0)
        {
            sum=sum-i;
        }
        else
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
    return 0;
}