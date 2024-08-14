#include<stdio.h>
int linear_serach();
int linear_serach(int arr[], int size, int key_value)
{
    for(int i=0; i<size; i++)
        {
            if(arr[i] == key_value)
                {
                    return i;
                    break;
                }
        }
    return -1;
}

int main()
{
    int arr[] = {10,25,30,45,14,78,25,100,125};
    int key_value = 25;

    int size = sizeof(arr)/sizeof(int);

    int result = linear_serach(arr, size, key_value);
    if(result == -1)
        {
            printf("%d is not found in array!", key_value);
        }
    else    
        {
            printf("%d is found at %d index",key_value, result);
        }

        
    return 0;
}

