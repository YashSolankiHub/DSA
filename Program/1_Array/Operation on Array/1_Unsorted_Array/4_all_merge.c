#include <stdio.h>
#include <stdlib.h>

int arr[10] = {};
int size = sizeof(arr) / sizeof(int);

void traverse()
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d |", arr[i]);
    }
}

void insert_at_first()
{
    int tot_element = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            tot_element++;
        }
    }
    if (tot_element == size)
    {
        printf("\nArray is full!");
    }
    else
    {
        for(int i=0; i<tot_element;i++)
            {
                arr[i+1] = arr[i];
            }
        int value;
        printf("\nEnter value :");
        scanf("%d",&value);
        arr[0] =  value;
    }

}
void insert_at_last()
{

    int tot_element = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            tot_element++;
        }
    }

    if (tot_element == size)
    {
        printf("\nArray is full!");
    }
    else
    {
        int value;
        printf("\nEnter value :");
        scanf("%d", &value);
        arr[tot_element] = value;
    }
}

void insert_at_middle()
{
    int tot_element = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            tot_element++;
        }
    }

    if (tot_element == size)
    {
        printf("\nArray is full!");
    }
    else
    {
        int pos;
        printf("\nEnter position :");
        scanf("%d", &pos);
        int value;

        while (!(pos >= 1 && pos <= tot_element))
        {
            printf("Invalid position!\nTry again..");
            printf("\nEnter position :");
            scanf("%d", &pos);
        }
        if (pos >= 1 && pos <= tot_element)
        {
            printf("\nEnter value :");
            scanf("%d", &value);
        }
        for (int i = tot_element - 1; i >= pos - 1; i--)
        {
            arr[i + 1] = arr[i];
        }

        arr[pos - 1] = value;
    }
}

void delete_at_last()
{
    int tot_element = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            tot_element++;
        }
    }
    if (tot_element == 0)
    {
        printf("\nArray is empty");
    }
    else
    {
        int last_index = tot_element - 1;
        printf("\n%d is deleted", arr[last_index]);
        arr[last_index] = 0;
    }
}

void delete_at_mddle()
{
    int tot_element = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            tot_element++;
        }
    }
    if (tot_element == 0)
    {
        printf("\nArray is empty");
    }
    else
    {
        int pos;
        printf("\nEnter position :");
        scanf("%d", &pos);
        while (!(pos >= 1 && pos <= tot_element))
        {
            printf("Invalid position!\nTry again..");
            printf("\nEnter position :");
            scanf("%d", &pos);
        }
        printf("\ndeleted element is :%d", arr[pos - 1]);
        for (int i = pos - 1; i < tot_element ; i++)
        {
            arr[i] = arr[i + 1];
        }
        // int last_element = tot_element - 1;
        // arr[last_element] = 0;
    }
}
void main()
{

    while (1)
    {

        printf("\nOperations :");

        printf("\n1.INSERT AT FIRST\n2.INSERT AT LAST\n3.INSERT AT MIDDLE\n4.DELETE AT FIRST\n5.DELETE AT LAST\n6.DELETE AT MIDDLE\n7.TRAVERSE");
        int operation;
        printf("\nEnter operation :");
        scanf("%d", &operation);
        switch (operation)
        {
        case 0:
            exit(0);
            break;
        case 1 :insert_at_first();
            break;
        case 2:
            insert_at_last();
            break;
        case 3:
            insert_at_middle();
            break;
        case 5:
            delete_at_last();
            break;
        case 6:
            delete_at_mddle();
            break;
        case 7:
            traverse();
            break;
        }
    }
}