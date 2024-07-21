#include<stdio.h>
int main()
{
    int i,j;
    for(j=1;j<=4;j=j+1)
    {
        for(i=1;i<=j;i=i+1)
        {
            printf("*");
        }
        printf("\n");
    }
}