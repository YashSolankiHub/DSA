
#include <stdio.h>
//sub array formula = (N * (N+1))/2
void subArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            printf("[");
            for (int k = i; k <= j; k++)
            {
                printf("%d,", arr[k]);
            }
            printf("]");
            printf("\n");
        } 
    }


}

void main()
{
    int arr[] = {1,2,3,4};
    int size = sizeof(arr) / sizeof(int);
    subArray(arr, size);
}