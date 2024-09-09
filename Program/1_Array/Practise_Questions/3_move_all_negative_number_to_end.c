#include <stdio.h>

int CountNegative(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {

        if (arr[i] < 0)
        {
            count++;
        }
    }
    return count;
}

void Org(int arr[], int size)
{
    int tempCountNeg = CountNegative(arr, size);
    int temp[tempCountNeg];
    int j = 0;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            temp[j] = arr[i];
            j++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (!(arr[i] < 0))
        {
            arr[count] = arr[i];
            count++;
        }
    }

    // printf("%d ", count);
    j=0;
    while (count < size)
    {
        arr[count++] = temp[j++];
    }

    
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

}

void main()
{
    int arr[] = {1, -1, 5, -3, -2, 10, 12, -24, 16, 49};
    int size = sizeof(arr) / sizeof(int);
    Org(arr, size);
}