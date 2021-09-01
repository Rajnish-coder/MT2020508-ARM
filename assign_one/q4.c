// Program to sort numbers in ascending order

#include<stdio.h>

int main()
{
    int arr[20];

    printf("Enter the numbers to sort");

    int n=5;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int min1,i,j;
    for(i=0;i<n;i++)
    {
        min1=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[min1]>arr[j])
              min1=j;
        }
        int temp=arr[min1];
        arr[min1]=arr[i];
        arr[i]=temp;
    }

    // print the sorted array
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}