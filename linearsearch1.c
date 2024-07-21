#include<stdio.h>
#include <stdlib.h>

int main()
{
    //Linear search with multiple occurance//
    int n;
    printf("\nEnter the size of the array: ");
    scanf("%d", &n);
    int *p = (int *)malloc(n * sizeof(int));
    printf("\nEnter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", (p + i));
    }
    int val,count=0;
    printf("\nEnter value to be searched:");
    scanf("%d",&val);
    for(int i=0;i<5;i++)
    {
        if(*(p + i) ==val)
        {
            printf("\nFound at %d th position",(i+1));
            count++;
        }
    }
    if(count==0)
        printf("\nNot found");
    return 0;
}