#include<stdio.h>
int main()
{
    int j=1;
    int sum=0;
    //int m=1;
    for(int i=1;i<=5;i++)
    {
        //m=m*(j+1);
        //sum=sum+m;
        //j=j+2;
        sum=sum+(j*(j+1));
        j=j+2;
    }
    printf("%d",sum);
    return 0;
}