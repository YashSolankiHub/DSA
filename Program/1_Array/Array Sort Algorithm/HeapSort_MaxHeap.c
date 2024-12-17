#include<stdio.h>
void swap(int *p, int*q)
{
    int temp = *p;
    *p= *q;
    *q= temp;

}

void heapify(int arr[], int size, int i)
{
    int largest = i;
    int left = (2 * i) + 1;
    int right = (2 * i) + 2;

    if(left < size && arr[left] > arr[largest])
        {
            largest = left;
        }
        
    
    if(right < size && arr[right] > arr[largest])
        {
            largest = right;
        }

    if(largest != i)
        {
            swap(&arr[i], &arr[largest]);
            heapify(arr, size, largest);
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
            swap(&arr[0], &arr[i]);
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