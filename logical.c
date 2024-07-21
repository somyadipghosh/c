#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    //  OR OPERATOR//
    if(a>b || b==10)
    {
        printf("True");
    }
    else
    {
        printf("false");
    }
    return 1;
}