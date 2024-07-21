#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i=i+1)
    {
        for(j=1;j<=i;j=j+1)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}