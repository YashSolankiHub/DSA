#include<stdio.h>
#include<math.h>

int jump_search();
int min(step, size);
int min(step, size)
{
    if(size>step)
        {
            return step;
        }
    else    
        {
            return size;
        }
}
int jump_search(int arr[], int size ,int value) 
{
    int step = sqrt(size);  //3
    int prev = 0;
    while(arr[min(step, size)-1] < value)
        {   
            prev = step;               
            step = step + sqrt(size);    

            if(prev >= size)   
                {
                    return -1;
                }
        }

    while (arr[prev] < value)
        {
            prev ++;

            if(prev == min(step, size))
                {
                    return -1;
                }
        }

    if(arr[prev] == value)
        {
            return prev;
        }

    
    return -1;

}

void main()
{
    // int arr[]= {8,15,41,27,20,10,78,2,110};
    int arr[]= {7,13,15,17,30,45,53};
    int size = sizeof(arr)/sizeof(arr[0]);

    int value = 55;

    int result = jump_search(arr, size, value);

    if (result == -1)
        {
            printf("%d is not found!", value);
        }
    else    
        {
            printf("%d is found at %d index",value, result);
        }
}