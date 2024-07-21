#include<stdio.h>
int main()
{
    int a[5];
    printf("Enter Array Elements:\n");
    for(int i=0; i<=4; i++)
    {
        scanf("%d",&a[i]);
    }
    int n,c=0;
    printf("\nEnter the element you want to search:\n");
    scanf("%d",&n);
    for(int i=0;i<=4;i++)
    {
        if(n==a[i])
        {
            printf("\nFound at position: %d\n",c);
            break;
        }
        c++;
    }
    return 1;
}