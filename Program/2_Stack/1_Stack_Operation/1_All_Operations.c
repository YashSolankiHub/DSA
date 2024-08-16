#include <stdio.h>
#include <stdlib.h>
int size = 5;
int stack[5];
int top = -1;

void push()
{
    if (top == (size - 1))
    {
        printf("\nStack is Full");
    }
    else
    {
        top = top + 1;
        int value;
        printf("Enter value: ");
        scanf("%d", &value);
        stack[top] = value;
    }
}

void pop()
{
    if(top == -1)
        {
            printf("\nStack is empty!");
        }
    else
        {
            printf("\nDeleted element: %d", stack[top]);
            top = top -1;
        }
}

void display()
{
    if (top == -1)
    {
        printf("\nStack is empty!");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("| %d |\n", stack[i]);
        }
    }
}

void peep() // take position and give an element accordingly
{
    if(top == -1)
        {
            printf("\nStack in empty");
            return;
        }
    int pos;
    printf("\nEnter position :");
    scanf("%d",&pos);
    if((top-pos+1) < 0 || pos == 0)
        {
            printf("\nInvalid Position!");
        }
    else
        {
            printf("%d",stack[top-pos+1]);
        }
}

void change()
{
    int pos;
    printf("\nEnter position :");
    scanf("%d",&pos);
    if((top-pos+1) < 0 || pos == 0)
        {
            printf("\nInvalid Position!");
        }
    else    
        {
            int value;
            printf("\nEnter new value for %d:",stack[top-pos+1]);
            scanf("%d",&value);
            stack[top-pos+1] = value;
        }
}

void main()
{
    int choice;
    while (1)
    {

        printf("\n\nEnter Operations:\n");
        printf("1.PUSH");
        printf("\n2.POP");
        printf("\n3.PEEP");
        printf("\n4.CHANGE");
        printf("\n5.DISPLAY");
        printf("\n0.EXIT\n");
        printf("Enter choice :");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peep();
            break;
        case 4:
            change();
            break;
        case 5:
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