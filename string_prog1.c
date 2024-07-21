#include<stdio.h>
int main()
{
    char x[50];
    int i=0,c=0;
    printf("Enter a string: \n");
    gets(x);
    while(x[i]!='\0')
    {
        if(x[i]=='A'||x[i]=='E'||x[i]=='I'||x[i]=='O'||x[i]=='U'||x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')
        {
            c++;
        }
        i++;
    }
    printf("\nNumber of Vowels: %d\n",c);
    return 1;
}