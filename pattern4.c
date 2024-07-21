#include<stdio.h>
int main()
{
    int i,j;
    for(j=2;j<=10;j=j+2)
    {
        for(i=10;i>=j;i=i-2)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}