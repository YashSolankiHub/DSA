#include <stdio.h>
#include <stdlib.h>

int sq[5], rear = -1, front = -1;
int size = sizeof(sq) / sizeof(int);

void insertion()
{
    int value;
    if (rear == (size - 1))
    {
        printf("\nThe Simple Queue is full!");
    }
    else
    {
        if (rear == -1 && front == -1)
        {
            rear = front = 0;
        }
        else
        {
            rear = rear + 1;
        }
        printf("\nEnter value: ");
        scanf("%d", &value);
        sq[rear] = value;
    }
}

void deletion()
{
    if(front == -1 && rear == -1)
        {
            printf("\nThe Simple Queue is Empty!");
        }
    else
        {
            printf("\nDeleted value is: %d",sq[front]);
            if(front==rear)
                {
                    rear = front = -1;
                }
            else
                {
                    front = front + 1;
                }
        }
}

void display()
{
    if(front == -1 && rear == -1)
        {
            printf("\nThe Simple Queue is Empty!");
        }
    else
        {
            for(int i=front; i<=rear; i++)
                {
                    printf("%d ",sq[i]);
                }
        }
}

void main()
{
    int choice;
    while (1)
    {

        printf("\n\nEnter Operations:\n");
        printf("1.INSERTION");
        printf("\n2.DELETION");
        printf("\n3.DISPLAY");
        printf("\n0.EXIT\n");
        printf("Enter choice :");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insertion();
            break;
        case 2:
            deletion();
            break;
        case 3:
            display();
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("\nInvalid choice!");
            break;
        }
    }
}