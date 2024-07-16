#include <stdio.h>
#include <stdlib.h>

int cq[5], rear = -1, front = -1;
int size = sizeof(cq) / sizeof(int);

void insertion()
{
    int value;
    if (front == 0 && rear == (size - 1) || front == rear + 1)
    {
        printf("\nThe Circular Queue is full!");
    }
    else
    {
        if (rear == -1 && front == -1)
        {
            rear = front = 0;
        }
        else
        {
            if (rear == (size - 1))
            {
                rear = 0;
            }
            else
            {
                rear = rear + 1;
            }
        }
        printf("\nEnter value: ");
        scanf("%d", &value);
        cq[rear] = value;
    }
}

void deletion()
{
    if (front == -1 && rear == -1)
    {
        printf("\nThe Circular Queue is Empty!");
    }
    else
    {
        printf("\nDeleted value is: %d", cq[front]);
        if (front == rear)
        {
            rear = front = -1;
        }
        else
        {
            if (front == (size - 1))
            {
                front = 0;
            }
            else
            {
                front = front + 1;
            }
        }
    }
}

void display()
{
    if (front == -1 && rear == -1)
    {
        printf("\nThe Circular Queue is Empty!");
    }
    else
    {
        if (front <= rear)
        {
            for (int i = front; i <= rear; i++)
            {
                printf("%d ", cq[i]);
            }
        }
        else
        {
            for (int i = front; i < size; i++)
            {
                printf("%d ", cq[i]);
            }
            for (int i = 0; i <= rear; i++)
            {
                printf("%d ", cq[i]);
            }
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