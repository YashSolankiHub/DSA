#include<stdio.h>

void sortArray(int arr[], int size)
{
   for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
            {
                if(arr[j] == i)
                    {
                        int temp = arr[j];
                        arr[j] = arr[i];
                        arr[i] = temp;
                        break;
                    }
            }
    }

    printf("\nArranged Array :\n");
    for(int i=0; i<size; i++)
        {
            if(arr[i] != i)
                {
                    arr[i] = -1;
                }
        }
    for(int i=0; i<size; i++)
        {
            printf("%d |", arr[i]);
        }

}

void main()
{
    int arr[] = { 3,5,2,0,10,7};
    int size = sizeof(arr) / sizeof(int);
    sortArray(arr, size);
}