#include <stdio.h>
#include<stdlib.h>
void insert_at_last(int arr[], int tot_element, int pos, int value)
{
    int i;
    for (i = tot_element - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[i+1] = value;
}

int main()
{
    int arr[10] = {10, 15, 4, 7, 8, 25, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Size of Array : %d\n", size);

    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            printf("%d |", arr[i]);
            count += 1;
        }
    }
    printf("Total element -> %d", count);

    while (count < size)
    {
        int pos;
        printf("\nEnter position where you want to add elemet :");
        scanf("%d", &pos);

        while (!(pos >= 1 && pos <= count))
        {
            printf("\nPlease enter valid position: ");
            scanf("%d", &pos);
        }

        int value;
        printf("Enter value :");
        scanf("%d", &value);

        insert_at_last(arr, count, pos, value);

        for (int i = 0; i <= size; i++)
        {
            if (arr[i] != 0)
            {
                printf("%d |", arr[i]);
                
            }
        }
        count++;
        printf("Total element -> %d", count);
    }
    printf("\nArray is full!");
    exit(0);
}
