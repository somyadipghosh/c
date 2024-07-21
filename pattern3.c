#include<stdio.h>
int main()
{
    for(int i=1;i<=9;i=i+4)
    {
        for(int j=1;j<=i;j=j+2)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}