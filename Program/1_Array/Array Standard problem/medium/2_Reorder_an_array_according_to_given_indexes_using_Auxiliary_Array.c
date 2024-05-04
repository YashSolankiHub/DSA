#include <stdio.h>

void reorderAccordingToIndex(int arr[], int index[], int size)
{
    int temp[size];

    for (int i = 0; i < size; i++)
    {
        temp[index[i]] = arr[i];
    }

    printf("Reorder Array :\n");

    for (int i = 0; i < size; i++)
    {
        arr[i] = temp[i];
        printf("%d |", arr[i]);
    }
}

void main()
{
    int arr[] = {50, 40, 70, 60, 90};
    int index[] = {3, 0, 4, 1, 2};
    int size = sizeof(arr) / sizeof(int);
    reorderAccordingToIndex(arr, index, size);
}