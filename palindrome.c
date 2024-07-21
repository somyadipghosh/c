#include<stdio.h>
int main()
{
    int n,n1,rem,rev=0;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    n1=n;
    while (n!=0)
    {
        rem=n%10; 
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==n1)
    {
        printf("\nPalindrome number");
    }
    else
    {
        printf("\nNot a palindrome number");
    }
    return 1;   
}