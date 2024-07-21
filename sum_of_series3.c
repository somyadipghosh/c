#include<stdio.h>
int main()
{
    float sum=0;
    for(float i=2;i<=5;i++)
    {
        sum=sum+(float)(1/i);
    }
    printf("%f",sum);
    return 0;
}