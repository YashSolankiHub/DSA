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

    // int i=0;
    // while(i<size)
    //     {
    //         temp[i] = arr[large];
    //         large--;
    //         i++;
    //         temp[i] = arr[small];
    //         small++;
    //         i++;
    //     }

    for (int i=0; i<size;i++)
        {
            printf(" %d |", temp[i]);
        }

}
void main()
{
   
    int arr[] = {45,25,90,10,6,11};
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