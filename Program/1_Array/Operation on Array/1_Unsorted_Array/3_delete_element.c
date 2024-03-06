#include <stdio.h>
#include<stdlib.h>
void delete_element(int arr[], int tot_element, int pos)
{
    printf("%d is deleted!\n", arr[pos - 1]);
    for (int i = pos - 1; i < tot_element-1 ; i++)
    {
        arr[i] = arr[i + 1];
    }
}
void main()
{
    int arr[] = {10, 15, 2, 4, 12, 63};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Size of Array : %d\n", size);

    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            printf("%d |", arr[i]);
            count += 1;
        }
    }
    printf("Total element -> %d", count);
    while (count >= 1)
    {
        int pos;
        printf("\nEnter position where you want to delete elemet :");
        scanf("%d", &pos);

        while (!(pos >= 1 && pos <= count))
        {
            printf("\nPlease enter valid position: ");
            scanf("%d", &pos);
        }
        
        delete_element(arr, count, pos);

        for (int i = 0; i < count-1; i++)
        {

            printf("%d |", arr[i]);
        }
        count--;
     printf("Total element -> %d", count);
    }
    printf("\nArray is Empty!");
    exit(0);
}