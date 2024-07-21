#include<stdio.h>
int main()
{
    char a;
    printf("Enter a char: \n");
    scanf("%c",&a);
    a=(int)a;
    printf("\nThe ASCII value is: %d",a);
    return 1;
}