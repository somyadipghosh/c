#include <stdio.h>
int isPrime(int num, int i)
{
    if (num <= 1)
    {
        return 0;
    }
    else if (i == 1)
    {
        return 1;
    }
    if (num % i == 0)
    {
        return 0;
    }
    else
    {
        return isPrime(num, i - 1);
    }
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num, num / 2))
    {
        printf("prime number\n");
    }
    else
    {
        printf("not a prime number\n");
    }
    return 1;
}
