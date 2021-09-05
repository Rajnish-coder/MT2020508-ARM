// Implementation of circular queue
// Note: The queue can accomadate atmost 4 elements.

#include<stdio.h>
#include<stdlib.h>

int queue[5];
int front=0;
int back=0;
int capacity=5;

void add_to_queue(int element)
{
    queue[back] = element;
    return;
}

int remove_from_queue()
{
    int ele;
    front = (front+1)%capacity;
    ele = queue[front];
    return ele;
}

void print_elements()
{
    printf("Elements of the queue are-\n");
    int start=(front+1)%capacity;
    int end = back;
    while(start!=(end+1)%capacity)
    {
       printf("%d ",queue[start]);
       start = (start+1)%capacity;
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
        back=(back+1)%capacity;
        if(back==front)
        {
            printf("Queue is full\n");
            if(back==0)
             back=capacity-1;
            else
             back=back-1;

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