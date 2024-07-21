#include <stdio.h>
#include <stdlib.h>

int main() 
{
    // Linear search with single occurrence
    int n;
    printf("\nEnter the size of the array: ");
    scanf("%d", &n);
    int *p = (int *)malloc(n * sizeof(int));
    printf("\nEnter the array elements:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", (p + i));
    }
    int val, flag = 0;
    printf("\nEnter value to be searched:\n");
    scanf("%d", &val);
    for (int i = 0; i < n; i++) 
    {
        if (*(p + i) == val) 
        {
            printf("\nFound at %d th position", (i + 1));
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("\nNot found");
    free(p);
    return 0;
}