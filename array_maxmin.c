#include<stdio.h>
int main()
{
    int a[5];
    printf("Enter Array Elements:\n");
    for(int i=0; i<=4; i++)
    {
        scanf("%d",&a[i]);
    }
    int min=a[0],max=a[0];
    for(int i=1;i<=4;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);
    return 1;
}