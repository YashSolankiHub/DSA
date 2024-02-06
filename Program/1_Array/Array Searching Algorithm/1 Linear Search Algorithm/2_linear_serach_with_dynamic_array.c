#include <stdio.h>
#include <stdlib.h>
int linear(int arr[], int size, int key_value);
int linear(int arr[], int size, int key_value)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key_value)
        {
            return i;
            break;
        }
    }
    return -1;
}

int main()
{
    int size;
    printf("Enter size of an array :");
    scanf("%d", &size);

    if (size <= 0)
    {
        printf("Invalid size!");
    }
    int *dyna_arr;
    dyna_arr = (int *)malloc(size * sizeof(int));

    if (dyna_arr == NULL)
    {
        printf("Memory allocation failed. Exiting...\n");
        return 1; // Exit with an error code
    }

    printf("Enter %d element :\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("\t\t\t%d", &dyna_arr[i]);
    }

    int key_value;
    printf("Enter the value that you want to search in array :");
    scanf("%d", &key_value);

    int result = linear(dyna_arr, size, key_value);

    if (result == -1)
    {
        printf("%d is not found!", key_value);
        while (result == -1)
        {
            printf("\nSerach Again.....\nEnter the value that you want to search in array :");
            scanf("%d", &key_value);
            int result = linear(dyna_arr, size, key_value);
            if (result != -1)
            {
                printf("%d is found at index %d", key_value, result);
                break;
            }
        }
    }
    else
        {
            printf("%d is found at index %d", key_value, result);
        }
}
