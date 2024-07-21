#include<stdio.h>
int sum_rec(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 10 + sum_rec(n / 10));
}
int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d",&num);
    printf("\nSum of digits: %d",sum_rec(num));
    return 1;
}