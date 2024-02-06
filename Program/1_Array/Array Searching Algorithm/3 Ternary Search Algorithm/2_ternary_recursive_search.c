#include <stdio.h>

int ternary_recursive_search();

int ternary_recursive_search(int arr[], int l, int h , int value)
{
    if(l<=h)
        {
            int mid1 = l + (h-l)/3;
            int mid2 = h - (h-l)/3;

            if (arr[mid1] == value)
                {
                    return mid1;
                }
            if (arr[mid2] == value)
                {
                    return mid2;
                }

            if (value < arr[mid1])
                {
                    h = mid1-1;
                    return ternary_recursive_search(arr, l, h, value);
                }
            else if (value > arr[mid2]) 
                {
                    l = mid2+1;
                    return ternary_recursive_search(arr, l, h, value);
                }
            else
                {
                    l = mid1+1;
                    h = mid2-1;
                    return ternary_recursive_search(arr, l, h, value);
                }
    

        }
    return -1;
}
void main()
{
    int arr[]= {7,15,30,51,75,89,101,150,175};
    int l = 0;
    int n = sizeof(arr)/sizeof(int); // same--> int n = sizeof(arr)/sizeof(arr[0]); 
    // printf("%d",n);
    int h = n-1 ;
    int value;
    printf("Search value :");
    scanf("%d", &value);

    int result = ternary_recursive_search(arr, l, h, value);

    if (result == -1)
        {
            printf("%d is not found!", value);
        }
    else    
        {
            printf("%d is found at index %d", value, result);
        }


}