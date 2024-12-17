#include<stdio.h>

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

void wave(int arr[], int size)
{
    // int j=0;
    // int temp[size];
    for(int i=0; i<size; i=i+2)
        {   
            if(arr[i] < arr[i+1])
                {
                    swap(&arr[i], &arr[i+1]);
                }
        }
    for(int i=0; i<size; i++)
        {
            printf("%d |", arr[i]);
        }
}

void main()
{
    int arr[] = {7,3,2,10,5,21,15};
    int size = sizeof(arr)/sizeof(int);
    wave(arr, size);
}