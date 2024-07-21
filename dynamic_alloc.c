#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p;
    int n,i;
    printf("\nEnter Array size: ");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    printf("\nEnter Array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d\n",(p+i));
    }
    printf("\nArray elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(p+i));
    }
    free(p);
    return 1;
}