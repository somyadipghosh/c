#include <stdio.h>
int main() 
{
    char x[50];
    printf("Enter a string: \n");
    gets(x);

    FILE *fptr;
    fptr = fopen("somyadip.txt", "a");
    fprintf(fptr, "%s\n", x);
    fclose(fptr);

    return 0;
}