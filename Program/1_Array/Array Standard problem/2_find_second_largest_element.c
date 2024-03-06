#include<stdio.h>

void main()
{
    int arr[10] = {10,12,45,17,21,57,33};
    int size = sizeof(arr)/sizeof(int);
    int i;
    int max = 0;
    for (i=0; i<size; i++)
        {
            if(arr[i] > max)
                {
                    max = arr[i];
                }
        }
    int j;
    printf("%d\n", max);
    int second_max=0;
    for(j=0; j<size; j++)
        {
            if(arr[j] != max)
                {
                    if(arr[j] > second_max)
                        {
                            second_max = arr[j];
                        }
                }
        }
    printf("The second largest element is :%d", second_max);

}