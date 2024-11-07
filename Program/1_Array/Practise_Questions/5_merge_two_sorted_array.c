#include<stdio.h>
void merge(int arrOne[], int sizearrOne, int arrTwo[], int sizearrTwo, int mergeArr[])
{
    int i=0, j=0, k=0;
    while(i < sizearrOne && j < sizearrTwo)
        {
            if(arrOne[i] <= arrTwo[j])
                {
                    mergeArr[k++] = arrOne[i++];
                }
            else
                {
                    mergeArr[k++] = arrTwo[j++];
                }
        }
    while(i < sizearrOne)
        {
            mergeArr[k++] = arrOne[i++];
        }
    while(i < sizearrTwo)
        {
            mergeArr[k++] = arrTwo[j++];
        }
}

void PrintArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
        {
            printf("%d |",arr[i]);
        }
}


void main()
{
    int arrOne[] = {3,7,9,15,19};
    int arrTwo[] = {2,4,8,13,16};
    int sizearrOne = sizeof(arrOne) / sizeof(int);
    int sizearrTwo = sizeof(arrTwo) / sizeof(int);
    int mergeArr[sizearrOne + sizearrTwo];
    merge(arrOne, sizearrOne, arrTwo, sizearrTwo, mergeArr);
    PrintArray(mergeArr, sizearrOne + sizearrTwo);
}