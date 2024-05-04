#include<stdio.h>

void BubbleSort(int arr[], int size)
{
    for(int i=0; i<size-1; i++)
        {
            for(int j=0; j<size-i; j++)
                {
                    if(arr[j+1] < arr[j])
                        {
                            int temp = arr[j];
                            arr[j] = arr[j+1];
                            arr[j+1] = temp;
                        }
                }
        }

    for(int i=0; i<size; i++)
        {
            printf("%d |", arr[i]);
        }
}
void main()
{
    int arr[] = {30,8,2,15,12,22};
    int size = sizeof(arr) / sizeof(int);
    BubbleSort(arr, size);
}