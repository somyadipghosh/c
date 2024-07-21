#include<stdio.h>
int main()
{
    int i,j;
    for(i=1,j=5; i<=5 || j>=1; i=i+1,j=j-1)
    {
        printf("%d ", i);
        printf("%d ", j);
    }
}