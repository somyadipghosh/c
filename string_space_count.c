#include<stdio.h>
int main()
{
    char x[50];
    int i=0,c=0;
    printf("Enter a string: \n");
    gets(x);
    while(x[i]!='\0')
    {
        if(x[i]==' ')
        {
            c++;
        }
        i++;
    }
    printf("\nNumber of Space: %d\n",c);
    return 1;
}