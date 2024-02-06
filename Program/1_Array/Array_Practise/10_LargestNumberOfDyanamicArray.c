#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size;
    printf("Enter size of an array :");
    scanf("%d",&size);

    if(size <= 0)
        {
            printf("Invalid size!");
        }
    int *dyna_arr;
    dyna_arr = (int*)malloc(size* sizeof(int));

     if (dyna_arr == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1; // Exit with an error code
    }

    printf("Enter %d element :\n",size);
    for(int i = 0; i<size; i++)
        {
            scanf("\t\t\t%d", &dyna_arr[i]);
        }

    printf("Dynamin array :");
    for(int i=0; i<size; i++)
        {
            printf(" %d",dyna_arr[i]);
        }

    int max = dyna_arr[0];
    for(int i = 0; i<size; i++)
        {
            if(max < dyna_arr[i])
                {
                    max = dyna_arr[i];
                }
        }

    int min = dyna_arr[0];
    for(int i = 0; i<size; i++)
        {
            if(min > dyna_arr[i])
                {
                    min = dyna_arr[i];
                }
        }

    printf("\nThe largest number of an array is :%d",max);
    printf("\nThe smallest number of an array is :%d",min);
    
}