// Method 2 :

#include <stdio.h>

void d_rotate(int arr[], int size, int pos)
{
    // first block
    {
        int start = 0;
        int end = pos - 1 - 1;
        while (start < end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

    // second block
    {
        int start = pos - 1;
        int end = size - 1;
        while (start < end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d |", arr[i]);
    }
}

void main()
{
    int arr[] = {7, 5, 4, 11, 2, 10, 13};
    int size = sizeof(arr) / sizeof(int);
    int pos = 3;

    d_rotate(arr, size, pos);
}