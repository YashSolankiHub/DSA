#include <stdio.h>
#include<stdlib.h>
int find_trinagle(int arr[], int size)
{
    int count = 0;
    printf("All tringle pair :\n");
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
                                printf("%d %d %d",arr[i], arr[j], arr[k]);
                                printf("\n");
                                count++;
                            }
                        }
                }
        }
    printf("\nTotal number of possible tringle :%d", count);

}

void main()
{
    int arr[] = {5,7,3,6,10,4};
    int size = sizeof(arr)/sizeof(int);
    find_trinagle(arr, size);
 
}