#include<stdio.h>

void merge(int arr[], int l, int r, int mid)
{
    int n1 = mid-l+1;
    int n2 = r-mid;
    int leftArray[n1];
    int rightArray[n2];

    int i,j;
    for(i=0; i<n1; i++)
        {
            leftArray[i] = arr[l+i];
        }
    
    for(j=0; j<n2; j++)
        {
            rightArray[j] = arr[mid+1+j];
        }

    i=0, j=0;
    int k= l;
    
    while(i < n1 && j < n2)
        {
            if(leftArray[i] <= rightArray[j])
                {
                    arr[k] = leftArray[i];
                    k++;
                    i++;
                }
            else
                {
                    arr[k] = rightArray[j];
                    k++;
                    j++;
                }
        }

    while(i < n1)
        {
            arr[k] = leftArray[i];
            k++;
            i++;
        }

    while(j < n2)
        {
            arr[k] = rightArray[j];
            j++;
        }

}

void mergesort(int arr[], int l, int r)
{
    if(l < r)
        {
            int mid = l + ((r-l)/2);
            mergesort(arr, l, mid);
            mergesort(arr, mid+1, r);

            merge(arr, l, r, mid);
            
        }
}

void PrintArray(int arr[], int size)
    {
        for(int i=0 ; i<size; i++)
            {
                printf("%d |", arr[i]);
            }
    }

void main()
{
    int arr[] = {38,27,3,43,9,82,10};
    int size = sizeof(arr)/ sizeof(int);
    mergesort(arr, 0, size -1);
    PrintArray(arr, size);
}