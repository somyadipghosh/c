#include<stdio.h>
int main()
{
    int a[5];
    printf("Enter Array Elements:\n");
    for(int i=0; i<=4; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEntered Array Elements are:\n");
    for(int i=0;i<=4;i++)
    {
        printf("%d",a[i]);
    }
    return 1;
}