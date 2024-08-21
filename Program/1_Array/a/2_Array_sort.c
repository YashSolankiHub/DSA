#include<stdio.h>
int main()
{
    int arr[] = {25,30,12,10,7};
    int n = sizeof(arr)/sizeof(int);
    //Bubble short
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
            }
        }
    }

     printf("\nSorted(ascending) x:- ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d, ", arr[i]);
    }
     
}