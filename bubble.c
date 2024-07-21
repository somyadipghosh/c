#include<stdio.h>
int main()
{
    int arr[5]={10,2,5,9,7};
    int i,temp,j,count;
    for(j=4;j>=1;j--)
    {
        count=0;
        for(i=0;i<j;i++)
        {
            if(arr[i]>arr[i+1])
            {
            //swapping//
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            count++;
            }
            if(count==0)
                break;
        }
    }
    
    for(i=0;i<=4;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 1;
}