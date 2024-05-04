#include<stdio.h>

int find_rotate_index(int arr[], int size)
{
    int min=arr[0], min_index = 0;
    for(int i=0; i<size; i++)
        {
            if(arr[i] < min)
                {
                    min = arr[i];
                    min_index = i;
                }
        }
    return min_index;
}

void main()
{
    int arr[]= {21,49,63,7,10,17};
    int size = sizeof(arr) / sizeof(int);
    int result = find_rotate_index(arr, size);
    printf("The array was rotate from index :%d", result);
    
}