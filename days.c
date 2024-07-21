#include<stdio.h>
int main()
{
    int days;
    printf("\nDay number: ");
    scanf("%d",&days);
    if(days==1){
        printf("Day name: Sunday\n");
    }
    else if (days==2)
    {
        printf("Day name: Monday\n");
    }
    else if (days==3)
    {
        printf("Day name: Tuesday\n");
    }
    else if (days==4)
    {
        printf("Day name: Wednesday\n");
    }
    else if (days==5)
    {
        printf("Day name: Thursday\n");
    }
    else if (days==6)
    {
        printf("Day name: Friday\n");
    }
    else if (days==7)
    {
        printf("Day name: Saturday\n");
    }
    else{
        printf("\nInvalid date format. Please try again.");
    }
    return 1;
}