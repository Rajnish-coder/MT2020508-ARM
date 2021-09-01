// program to count all the even numbers in an array

#include<stdio.h>
#include<conio.h>


int main()
{
    int arr[20];

    printf("Enter the numbers\n");

    for(int i=0;i<20;i++)
    {
        scanf("%d",&arr[i]);
    }

    int count=0;
    for(int i=0;i<20;i++)
    {
        if(arr[i]%2==0)
         count++;
    }
    printf("%d\n",count);

    return 0;
}