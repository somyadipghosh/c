#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\nEnter the size of the array: ");
    scanf("%d", &n);
    int *p = (int *)malloc(n * sizeof(int));
    printf("\nEnter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", (p + i));
    }
    int f,l,mid,flag=0,val;
    printf("\nEnter value to be searched:");
    scanf("%d",&val);
    f=0;
    l=4;

    while(f<=l)
    {
        mid=(f+l)/2;
        if(p[mid]==val)
        {
        printf("found at position no:%d",mid+1);
        flag=1;
        break;
        }
        else if(val>p[mid])
        {
        f=mid+1;
        }
        else
        {
        l=mid-1;
        }
    }
    if(flag==0)
    {
        printf("\nNot found");
    }
    
    return 0;
}