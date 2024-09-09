#include<stdio.h>

void wave(int arr[], int size)
{
    int j=0;
    int temp[size];
    for(int i=0; i<size; i=i+2)
        {   
            if(arr[i] > arr[i+1])
                {
                    temp[j] = arr[i];
                    temp[j+1] = arr[i+1];
                    j=j+2;
                }
            else
                {
                    temp[j] = arr[i+1];
                    temp[j+1]= arr[i];
                    j=j+2;
                }
        }
    for(int i=0; i<size; i++)
        {
            printf("%d |", temp[i]);
        }
}

void main()
{
    int arr[] = {7,3,2,10,5,21,15};
    int size = sizeof(arr)/sizeof(int);
    wave(arr, size);
}