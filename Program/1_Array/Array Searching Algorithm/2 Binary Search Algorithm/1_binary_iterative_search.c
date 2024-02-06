#include<stdio.h>

int iterative_binary_search();
int iterative_binary_search(int arr[], int l, int h, int value)
{
    while(l<=h && value>=arr[l] && value<=arr[h])
        {
            int mid = (l+h)/2;

            if(arr[mid] == value)
                {
                    return mid;
                }
            else if(value > arr[mid])
                {
                    l = mid + 1;
                }
            else if(value < arr[mid])
                {
                    h = mid - 1;
                }
        }
    return -1;
}
int main()
{
    int arr[]= {10,31,45,81,95,102};
    // int arr[]= {15,10,25,31,7,18,50};
    // int arr[] = {15,20,7,2,5,45,80,17};
    int n = sizeof(arr)/sizeof(int);
    int h = n-1;
    int value;
    printf("Search value :");
    scanf("%d",&value);

    int result = iterative_binary_search(arr, 0, h, value);

    if(result == -1)
        {
            printf("%d is not found!", value);
            while( result == -1)
                {
                    printf("\nSearch Again...");
                    printf("Search value :");
                    scanf("%d",&value);
                    int result = iterative_binary_search(arr, 0, h, value);
                    if(result != -1)
                        {
                            printf("%d is found at index %d",value, result);
                            break;
                        }
                }
        }
    else    
        {
            printf("%d is found at index %d",value, result);
        }
}