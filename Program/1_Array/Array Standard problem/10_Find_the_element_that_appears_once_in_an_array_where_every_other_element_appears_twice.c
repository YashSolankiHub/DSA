#include <stdio.h>
#include <stdlib.h>
struct arraywithsize
{
    int *a;
    int s;
};
struct arraywithsize find_appear_once(int arr[], int size)
{

    int *temp = (int *)malloc(size * sizeof(int));
    int k = 0;
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            temp[k] = arr[i];
            k++;
        }
    }
    struct arraywithsize result;
    result.a = temp;
    result.s = k;

    return result;
}
void main()
{
    int arr[] = {7, 3, 7, 11, 2, 3};
    int size = sizeof(arr) / sizeof(int);
    
    struct arraywithsize result = find_appear_once(arr, size);
    for(int i=0; i<result.s; i++)
        {
            printf("%d |", result.a[i]);
        }
}