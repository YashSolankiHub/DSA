#include <stdio.h>

void main()
{
    int arr[10] = {10, 15, 20, 35, 63, 48, 7};

    int size = sizeof(arr) / sizeof(arr[0]);

    // for (int i = 0; i < size; i++)

    // {
    //     printf("%d\n", arr[i]);
    // }

    printf("Capacity of arr :%d\n", size);
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            printf("%d |", arr[i]);
            count += 1;
        }
    }

    printf(" -->Total element :%d\n", count);

    int last = count;
    printf("\nInsert element at the end of an array");
    while (last < size)
    {
        int value;
        printf("\nEnter value :");
        scanf("%d", &value);
        arr[last] = value;
        printf("Capacity of arr :%d\n", size);
        for (int i = 0; i < last+1; i++)
        {
            printf("%d |", arr[i]);

        }
        last++;
        printf(" -->Total element :%d\n", last);
    }
    printf("Array is full");
    exit(0);
        
}