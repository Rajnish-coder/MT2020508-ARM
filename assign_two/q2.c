// Empty Descending stack

#include<stdio.h>
#include<stdlib.h>

int stack[5];   // globally declaring stack as array of size 5.
int top = 4;   // globally declaring stack pointer.

void push(int element)
{
    stack[top] = element;
    top = top-1;
    return ;
}

int pop()
{
    top=top+1;
    int ele = stack[top];
    return ele;
}

void print()
{
    if(top==4)
    {
        printf("Stack is empty. No element to print\n");
        return;
    }
    printf("Elements of the stack are-\n");
    for(int i=top+1;i<=4;i++)
     printf("%d ",stack[i]);
    printf("\n");

    return;
}

int main()
{
    while(1)
    {
    printf("Enter your choice-1,2,3,4\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Print stack elements\n");
    printf("4. Exit\n");

    int choice,element;
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        if(top==-1)
        {
            printf("Stack is full\n");
            break;
        }
        printf("Enter element to push\n");
        scanf("%d",&element);
        push(element);
        break;

    case 2:
        if(top==4)
        {
            printf("Stack is empty\n");
            break;
        }
        element = pop();
        printf("Element removed is: %d\n",element);
        break;

    case 3:
        print();
        break;

    case 4:
        return 0;
    
    default:
        printf("Enter valid choice\n");
    }
    }

}