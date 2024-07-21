#include <stdio.h>
int main()
{
    int num, i, j, k = 1;   
    printf("\nEnter the rows: \n");  
    scanf("%d",&num); 
    for(i=1; i<=num; i++) 
    {
        for(j=1; j<=i; j++)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
    return 1;
}