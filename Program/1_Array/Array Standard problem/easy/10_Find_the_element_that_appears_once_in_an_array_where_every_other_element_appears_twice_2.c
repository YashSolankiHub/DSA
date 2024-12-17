#include <stdio.h>

void once(int arr[], int size)
{
    int isOnce;
    for (int i = 0; i < size; i++)
    {
        isOnce = 1;
        int j;
        for (j = 0; j < size; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                isOnce = 0;
                break;
            }
        }
        if (isOnce)
        {
            printf("%d |", arr[i]);
        }
    }
}

void main()
{
    int arr[] = {7, 11, 3, 7, 2, 11, 3,0};
    int size = sizeof(arr) / sizeof(int);
    once(arr, size);


    
}