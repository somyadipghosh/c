#include<stdio.h>
int main()
{
    int a = 5, b = 6;
    if (a++ == 5 || ++b == 6)
        printf("Computer\t%d\t%d", a, b);
    else
        printf("Engineering\t%d\t%d", a, b);   
    return 1;
}