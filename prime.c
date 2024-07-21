#include<stdio.h>
void prime(int n)
{
    int i,flag=0;
    if (n == 0 || n == 1)
        flag = 1;

    for (i = 2; i <= n/2 ; ++i) 
    {
        if (n % i == 0) 
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("\n%d is a prime number.", n);
    else
        printf("\n%d is not a prime number.", n);
}
int main()
{
    int n;
    printf("\nEnter a positive integer: ");
    scanf("%d", &n);
    prime(n);
    return 1;
}