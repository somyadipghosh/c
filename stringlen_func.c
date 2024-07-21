#include<stdio.h>
void strleng(char *str1)
{
    int i=0,len=0;
    while (str1[i]!='\0')
    {
        len++;
        i++;
    }
    printf("\nLength of the string: %d",len);   
}
int main()
{
    char str[50]; 
    printf (" Enter the string: ");  
    gets(str);
    strleng(str);
}