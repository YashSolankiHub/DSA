#include<stdio.h>

int find_rotate_index(int arr[], int size)
{
    
    for(int i=0; i<size; i++)
        {
            if(arr[i] > arr[i+1])
                {
                    return i+1;
                }
                
        }
    return 0;
}

void main()
{
    int arr[]= {21,49,63,7,10,17};
    int size = sizeof(arr) / sizeof(int);
    int result = find_rotate_index(arr, size);
    printf("The array was rotate from index :%d", result);
    
}