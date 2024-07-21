#include<stdio.h>
int main()
{
    int sum=0,n,f,j;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        f = n % i;
        if (f == 0) {
            sum = sum + i;
        }
    }

    if (sum == n) {
        printf("%d is a perfect number\n", n);
    } else {
        printf("%d is not a perfect number\n", n);
    }
    return 1;
}