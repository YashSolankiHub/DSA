#include<stdio.h>

void InsertionSort(int arr[], int size)
{
    for(int i=1; i<size; i++)
        {
            int temp= arr[i];
            int j=i-1;
            while(j>=0 && arr[j]>temp)
                {
                    arr[j+1] = arr[j];
                    j--;
                }
            arr[j+1] = temp;
        }

    for(int i=0; i<size; i++)
        {
            printf("%d |", arr[i]);
        }
}

void main()
{
    int arr[] = {30,8,2,15,12};
    int size = sizeof(arr) / sizeof(int);
    InsertionSort(arr, size);
}