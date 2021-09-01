// Program to print the largest number among three numbers

#include<stdio.h>
#include<conio.h>

int main()
{
    int num1,num2,num3,ans;

    printf("Enter the three numbers\n");

    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1>num2 && num1>num3)
    {
        ans = num1;
    }
    if(num2>num1 && num2>num3)
    {
        ans = num2;
    }
    if(num3>num1 && num3>num2)
    {
        ans=num3;
    }

    printf("The largest number is: %d",ans);

    return 0;


}