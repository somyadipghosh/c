#include<stdio.h>
void revstr(char *str1)
{
    int i=0, len=0, temp;  
    while (str1[i]!='\0')
    {
        len++;
        i++;
    }    
    for (i = 0; i < len/2; i++) 
    {
        temp = str1[i];  
        str1[i] = str1[len - i - 1];  
        str1[len - i - 1] = temp;
    }
}
int main()
{
    char str[50]; 
    printf ("Enter the string: ");  
    gets(str);
    printf ("\nBefore reversing the string: %s \n", str);
    revstr(str);  
    printf ("\nAfter reversing the string: %s", str);
}