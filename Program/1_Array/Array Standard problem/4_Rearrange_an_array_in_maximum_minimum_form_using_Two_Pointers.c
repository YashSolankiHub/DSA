#include<stdio.h>

void arrange(int arr[], int size)
{
    int small = 0;
    int large = size-1;
    int temp[size-1];

    for(int i=0; i<size;)
        {
            temp[i] = arr[large--];
            i++;
            temp[i] = arr[small++];
            i++;

        }

    for (int i=0; i<size;i++)
        {
            printf(" %d |", temp[i]);
        }

}
void main()
{
   
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(int);

    printf("Input array: ");
    for(int i=0; i<size; i++)
        {
            printf(" %d |", arr[i]);
        }
    printf("\n");
    printf("Arranged array: ");
    arrange(arr, size);


}

// int a,c;
    // int b = 10;

    // a = b--;
    // c = b;


    // printf("%d\n",a);
    // printf("%d",c);