//method 1 : Using temp array

#include <stdio.h>

void d_rotate(int arr[], int size)
{
    int pos = 3;
    int temp[size], j = 0;

    for (int i = pos - 1; i < size; i++)
    {
        temp[j] = arr[i];
        j++;
    }

    for (int i = 0; i < pos-1; i++)
    {
        temp[j] = arr[i];
        j++;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d |", temp[i]);
    }
}

void main()
{
    int arr[] = {7, 5, 4, 11, 2, 10, 13,45,101};
    int size = sizeof(arr) / sizeof(int);

    printf("The original array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d |", arr[i]);
    }
    printf("\n");
    printf("d rotate array : ");

    d_rotate(arr, size);
}


