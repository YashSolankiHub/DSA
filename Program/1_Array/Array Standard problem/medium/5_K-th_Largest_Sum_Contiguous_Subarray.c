#include <stdio.h>
//sub array formula = (N * (N+1))/2
void subArray(int arr[], int size, int a)
{
    int i, j, k;
    int sizeOfSubArray = (size * (size+1))/2;
    int temp[sizeOfSubArray];
    int count=0;

    for (i = 0; i < size; i++)
    {
        for (j = i; j < size; j++)
        {
            int sum=0;
            for (k = i; k <= j; k++)
            {
                sum = sum + arr[k];
                printf("%d", arr[k]);
            }
            printf(", sum : %d",sum);
            temp[count] = sum;
            count++;
            printf("\n");
        }
    }

    printf("K-th Largest Sum Contiguous Subarray :%d",temp[a-1]);

    // printf("\n\n");
    // for(int i=0; i<sizeOfSubArray; i++)
    //     {
    //         printf("%d |", temp[i]);
    //     }
}

void main()
{
    int arr[] = {20, -5, -1};
    int size = sizeof(arr) / sizeof(int);
    int k;
    printf("\nEnter k:");
    scanf("%d", &k);
    subArray(arr, size, k);
}