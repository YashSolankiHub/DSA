#include<stdio.h>

int search(int arr[], int size, int value)
{
    for(int i=0; i<size;i++)
        {
            if(arr[i] == value)
                {
                    return i;
                }
        }
    return -1;
}

void rotate(int arr[], int size, int index)
{
    int temp[size], j=0;
    for(int i=index; i<size; i++)
        {
            temp[j] = arr[i];
            j++;
        }
    
    for(int i=0; i<index; i++)
        {
            temp[j] = arr[i];
            j++;
        }
    
    for(int i=0; i<size; i++)
        {
            printf("%d |", temp[i]);
        }
}

void main()
{
    int arr[] = {12,15,17,21,5,60,41,50};
    int size = sizeof(arr) / sizeof(int);
    int value = 21;
    printf("Input array :");
    for(int i=0; i<size; i++)
        {
            printf("%d |", arr[i]);
        }
    printf("\n");

    int result = search(arr, size, value);
    if(result == -1)
        {
            printf("Value not found");
        }
    else
        {
            printf("%d value is found at index : %d\n",value, result);
            rotate(arr, size, result);
        }



}