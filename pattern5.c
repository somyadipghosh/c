#include<stdio.h>
int main()
{
    int i,j;
    for(j=1;j<=4;j=j+1)
    {
        for(i=j;i>=1;i=i-1)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}