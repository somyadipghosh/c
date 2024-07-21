#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
   
    //a=b ==> '=' assignment operator (val of b will be copied into a)
    // == ==> '==' logical operator (used to compare val of two var)
     //cheack whether they are equal or not//

     if(a==b)
        printf("\nEqual");
    else
        printf("\n not equal");
    return 1;
}