
#include <stdio.h>
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d |", arr[i]);
    }
}
void MergeSort(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    printf("\n\nMergeSort function called....");
    printf("\nleft :%d", left);
    printf("\nright :%d", right);
    printf("\nmid :%d", mid);
    printf("\nn1 :%d", n1);
    printf("\nn2 :%d", n2);
    printf("\n");
    for(int p=0; p<=right; p++)
        {
            printf("%d |",arr[p]);
        }
    printf("\n");


    int leftArray[n1];
    int rightArray[n2];
    int i, j, k;
    printf("\n");
    for (i = 0; i < n1; i++)
    {
        leftArray[i] = arr[left + i];
        printf("%d |",leftArray[i]);
    }
    
    printf("\n");
    for (j = 0; j < n2; j++)
    {
        rightArray[j] = arr[mid+1+j];
        printf("%d |",rightArray[j]);
        
    }
    printf("\n\n");


    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2)
    {
        if (leftArray[i] <= rightArray[j])
        {
            arr[k] = leftArray[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = rightArray[j];
            j++;
            k++;
        }
    }

    while (i < n1)
    {
        arr[k] = leftArray[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = rightArray[j];
        j++;
        k++;
    }
}

void DivideArray(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        printf("\n\nDivideArray function called...");
        printf("\nleft :%d", left);
        printf("\nright :%d", right);
        printf("\nmid :%d", mid);
        printf("\n");
        for (int i = left; i <= right; i++)
        {
            printf("%d |", arr[i]);
        }

        DivideArray(arr, left, mid);
        DivideArray(arr, mid + 1, right);
        MergeSort(arr, left, mid, right);
    }
}



void main()
{
    int arr[] = {38,27,43,3,9,82,10};
    int size = sizeof(arr) / sizeof(int);
    // printArray(arr, size);
    DivideArray(arr, 0, size - 1);
    printArray(arr, size);
}
