#include<stdio.h>
int main()
{
    //variable:temporary place in temporary//
    int a=12; //int=>data type:static initialization//
    float b=12.45;//float=>data type
    char c='A';
    // printf("%d",a);
    // printf("%f",b);
    // printf("%c",c);
    printf("%d%f",a,b);//Right to left:Right//
    printf("%d%f%c",a,b,c); //Right to left:Depends on compiler//
    return 1;
}