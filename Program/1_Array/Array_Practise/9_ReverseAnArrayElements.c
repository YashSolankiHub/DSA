// Iterative C program to reverse an array
#include<stdio.h>

/* Function to reverse arr[] from start to end*/
void reverseArray(int arr[], int start, int end)
    {
        int temp;
        while(start < end)
            {
                temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;
                start++;
                end--;

            }
        printf("Revrese array is :");
        for(int i = 0; i<6; i++)
            {
                printf("%d ", arr[i]);
            }
    }

void reverseWithFor(int arr[], int start, int end)
    {
        printf("\nReverse(for) array is :");
        for(int i = end; i>=start; i--)
            {
                printf("%d ", arr[i]);
            }

        
        
    }


int main()
{
    int arr[]= {10,20,30,40,50,60};
    int arr1[] = {25,50,75,100,125,150};
    reverseArray(arr, 0, 5);
    reverseWithFor(arr1,0,5);

}

/* Driver function to test above functions */
