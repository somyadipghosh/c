#include<stdio.h>
int main()
{
    float km,bf;
    float tf;
    printf("\nEnter kilometer: ");
    scanf("%f",&km);
    bf=(6*km);
    if(km<=5){
        tf=bf+bf*(2/100);
        printf("\nTotal Fare: %f",tf);
    }
    else if (km>5 && km<11)
    {
        tf=bf+bf*(5/100);
        printf("\nTotal Fare: %f",tf);
    }
    else if (km>10 && km<16)
    {
        tf=bf+bf*(7/100);
        printf("\nTotal Fare: %f",tf);
    }
    else {
        tf=bf+bf*(8/100);
        printf("\nTotal Fare: %f",tf);
    }
    return 1;
}