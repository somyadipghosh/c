#include<stdio.h>
int main()
{
    int j=1;
    int sum=0;
    for (int i = 1; i <= 4; i=i+1)
    {
        sum = sum + j;
        j = (j * 10) + 1;
    }
    printf("%d",sum);
    return 0;
}