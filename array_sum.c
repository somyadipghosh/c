#include<stdio.h>
int main()
{
    int a[5];
    printf("Enter Array Elements:\n");
    for(int i=0; i<=4; i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(int i=0;i<=4;i++)
    {
        sum=sum+a[i];
    }
    printf("\nSum of array elements: %d",sum);
    return 1;
}