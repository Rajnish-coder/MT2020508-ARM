// Program to find the maximum number in an array
#include<stdio.h>

int main()
{
    int arr[15];

    for(int i=0;i<15;i++)
    {
        scanf("%d",&arr[i]);
    }

    int max1=0;
    for(int i=0;i<15;i++)
    {
        if(max1<arr[i])
           max1=arr[i];
    }

    printf("The largest number is:%d",max1);



    return 0;
}