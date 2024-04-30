#include<stdio.h>
void main()
{
    int arr[] = {10,12,12,12,14,14,14,7,5,3,10,15};
    int size = sizeof(arr)/sizeof(int);

    for(int i=0; i<size; i++)
        {   
            int j;
            for( j=0; j<i; j++)
                {
                    if(arr[i] == arr[j]){

                    break;
                    }
                }
            if (i == j)
                {
                    printf("%d |", arr[i]);
                }
            
        }


}