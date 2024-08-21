#include <stdio.h>
int main()
{
    int arr[] = {25, 30, 12, 10, 7};
    int n = sizeof(arr) / sizeof(int);

    // Bubble short
    // int i = n - 1;
    // while (i >= 0)
    // {
    //     int j = n - 1;
    //     while (j >= 0)
    //         {
    //             if (arr[j] > arr[j - 1])
    //             {
    //                 int temp = arr[j];
    //                 arr[j] = arr[j - 1];
    //                 arr[j - 1] = temp;
    //             }
    //             j--;
    //         }
    //     i--;
    // }

    for (int i =(n-1); i>=0; i--)
    {
        for(int j=(n-1); j>=0; j-- )
            {
                if(arr[j]> arr[j-1])
                    {
                        int temp = arr[j];
                        arr[j] = arr[j-1];
                        arr[j-1] = temp;
                    }
            }
    }

    printf("\nSorted(desceding) x:- ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d, ", arr[i]);
    }
}