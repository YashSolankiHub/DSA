#include <stdio.h>

void leaders(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int j;
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] <= arr[j])
            {
                break;
            }
        }
        if (j == size)
        {
            printf("%d |", arr[i]);
        }
    }
}

void main()
{
    int arr[] = {3, 15, 11, 2, 27, 10, 21, 18};
    int size = sizeof(arr) / sizeof(int);

    leaders(arr, size);
}