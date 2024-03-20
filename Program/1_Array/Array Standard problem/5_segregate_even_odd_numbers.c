#include<stdio.h>
int even_odd(int arr[], int size)
    {
        int temp[size];
        int even_first=0;
        int odd_last = size-1;

        for(int i=0; i<size; i++)
            {
                if(arr[i] % 2 == 0)
                    {
                        temp[even_first]=arr[i];
                        even_first++;
                    }
                else
                    {
                        temp[odd_last]=arr[i];
                        odd_last--;
                    }
            }
        
        for(int i=0; i<size; i++)
            {
                printf("%d |",temp[i]);
            }

    }


void main()
{   
    int arr[] = {7,5,4,11,2,11,10,13,14,18,50};
    int size = sizeof(arr)/sizeof(int);

    even_odd(arr, size);

    

}