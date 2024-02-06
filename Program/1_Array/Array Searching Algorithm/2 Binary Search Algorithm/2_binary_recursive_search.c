#include<stdio.h>

int binary_recursive_search();
int binary_recursive_search(int arr[], int l, int h, int value)
{
    if(l<=h)
        {
            int mid = (l+h)/2;

            if(arr[mid]== value)
                {
                    
                    return mid;
                }
            else if(value > arr[mid])
                {
                    l = mid + 1;
                    return binary_recursive_search(arr, l, h, value);
                }
            else if(value < arr[mid])
                {
                    h = mid - 1;
                    return binary_recursive_search(arr, l, h, value);
                }
        }
    return -1;
}

int main()
{
    int arr[]= {10,35,41,56,89,111};
    int n = sizeof(arr)/sizeof(int);
    int l = 0;
    int h = n-1;
    int value;
    printf("Search value :");
    scanf("%d",&value);

    int result = binary_recursive_search(arr, l, h, value);

    if(result == -1)
        {
            printf("%d is not found!", value);
            while(result == -1)
                {
                    printf("\nSearch agian.....");
                    printf("\nSearch value :");
                    scanf("%d",&value);

                    int result = binary_recursive_search(arr, l, h, value);

                    if(result != -1)
                        {
                            printf("%d is found at index %d", value, result);
                            break;
                        }


                }
        }
    else    
        {
            printf("%d is found at index %d", value, result);
        }

    
}