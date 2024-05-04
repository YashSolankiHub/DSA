#include <stdio.h>

void selectionSort(int arr[], int size)
{
    for(int i=0; i<size; i++)
        {
            int min = arr[i];
            int min_index=i;
            for(int j=i+1; j<size; j++)
                {
                    if(arr[j] < min)
                        {
                            min = arr[j];
                            min_index = j;
                        }
                }
            int temp = min;
            arr[min_index] = arr[i];
            arr[i] = temp;
        }
    for (int i = 0; i < size; i++)
    {
        printf("%d |", arr[i]);
    }
}
void main()
{
    int arr[] = {30,8,2,15,12,22};
    int size = sizeof(arr) / sizeof(int);
    selectionSort(arr, size);
}