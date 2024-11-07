#include<stdio.h>

void Product(int arr[], int size)
{
    int temp[size];
    int prod;
    for(int i=0; i<size; i++)
        {
            prod = 1;
            for(int j=0; j<size; j++)
                {
                    if(arr[i] != arr[j])
                        {   
                            prod = prod * arr[j];
                        }
                }
            
            temp[i] = prod;
        }
    
    for(int i=0; i<size; i++)
        {
            printf("%d |",temp[i]);
        }

}


void main()
{
    int arr[] = {1,2,3,4};
    int size = sizeof(arr)/sizeof(int);
    Product(arr, size);
    

}