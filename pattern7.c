#include<stdio.h>
int main()
{
    int i,j,c1,c2;
    for(c1=3,c2=1; c1>1 || c2<=4; c1=c1-1,c2=c2+1)
    {
        for(i=1;i<=c1;i=i+1)
        {
            printf(" ");
        }
        for(j=1;j<=c2;j=j+1)
        {
            printf("*");
        }
        printf("\n");
    }
}