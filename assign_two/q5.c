// Implementation of a simple queue
// Note: The queue can accomadate atmost 5 elements.

#include<stdio.h>
#include<stdlib.h>

int queue[5];
int front=0;
int back=0;
int capacity=5;

void add_to_queue(int element)
{
    queue[back] = element;
    back=back+1;
    return;
}

int remove_from_queue()
{
    int ele = queue[front];
    for(int i=0;i<back-1;i++)     // shifting all the elements towards left
    {
        queue[i]=queue[i+1];
    }
    back=back-1;

    return ele;
}

void print_elements()
{
    printf("Elements of the queue are-\n");
    for(int i=front;i<back;i++)
    {
        printf("%d ",queue[i]);
    }
    printf("\n");
    return;
}

int main()
{
    while(1)
    {

    printf("Enter your choice\n");
    printf("1. Add item\n");
    printf("2. Remove item\n");
    printf("3. Print contents\n");
    printf("4. Exit\n");

    int choice,element;
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        if(back==capacity)
        {
            printf("Queue is full\n");
            break;
        }
        printf("Enter the element to add\n");
        scanf("%d",&element);
        add_to_queue(element);
        break;

    case 2:
        if(front==back)
        {
            printf("Queue is empty!\n");
            break;
        }
        element = remove_from_queue();
        printf("Element removed is: %d\n",element);
        break;

    case 3:
        if(front==back)
        {
            printf("Queue is empty\n");
            break;
        }
        print_elements();
        break;

    case 4:
        return 0;
    
    default:
        printf("Enter valid choice\n");
    }
    }
    
}
