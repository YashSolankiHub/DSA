#include <stdio.h>
#include<stdlib.h>
int find_trinagle(int arr[], int size)
{
    int count = 0;
    for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
                {
                    for(int k=j+1; k<size; k++)
                        {
                            if(arr[i]+arr[j] > arr[k] && 
                                arr[i]+arr[k] > arr[j] &&
                                 arr[k] + arr[j] > arr[i]
                            )
                            {
                                count++;
                            }
                        }
                }
        }
    return count;
}

void main()
{
    int arr[] = {3,4,7,2};
    int size = sizeof(arr)/sizeof(int);
    int result = find_trinagle(arr, size);
    printf("The possible trinagle is :%d", result);
 
}