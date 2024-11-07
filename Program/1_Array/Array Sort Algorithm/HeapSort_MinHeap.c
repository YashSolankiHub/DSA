#include<stdio.h>

void heapify(int arr[], int size, int i)
{
    int min = i;
    int left = (2 * i) + 1;
    int right = (2 * i) + 2;

    if(left < size && arr[left] < arr[min])
        {
            min = left;
        }
        
    
    if(right < size && arr[right] < arr[min])
        {
            min = right;
        }

    if(min != i)
        {
            int temp =arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
            heapify(arr, size, min);
        }

    
}


void HeapSort(int arr[], int size)
{
    for(int i= (size/2)-1; i>=0; i--)
        {
            heapify(arr, size, i);
        }

    for(int i=size-1; i>0; i--)
        {
            int temp = arr[0];
            arr[0] = arr[i];
            arr[i] = temp;
            heapify(arr, i, 0);
        }
}

void printArray(int arr[], int size)
    {
        for(int i=0; i<size; i++)
            {
                printf("%d |",arr[i]);
            }
    }

void main()
{
    int arr[] ={10,2,15,7,30,5,8};
    int size = sizeof(arr)/sizeof(int);
    HeapSort(arr, size);
    printArray(arr, size);


}