#include<stdio.h>
void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

void printArray(int arr[], int size)
    {
        for(int i=0; i<size; i++)
            {
                printf("%d |",arr[i]);
            }
    }


void ShellSort(int arr[], int size)
{
    for(int gap = size/2; gap>0; gap = gap/2)
        {
            for(int i=gap; i<size; i++)
                {
                    int temp = arr[i];
                    int j=i;
                    while(j>=gap && arr[j-gap] > temp)
                        {
                            arr[j] = arr[j-gap];
                            j = j-gap;
                        }
                    arr[j] = temp;
                    
                }
        }
}   


void main()
{
    int arr[] = {20,8,10,35,2,4,3,5};
    int size = sizeof(arr)/sizeof(int);
    ShellSort(arr, size);
    printArray(arr, size);

}
