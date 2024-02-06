#include<stdio.h>
void insert(int arr[], int tot_element, int value, int size)
{
    int i;
    for(i=tot_element-1; (i>=0 && arr[i]>value); i--)
        {
            arr[i+1] = arr[i];
        }
    arr[i+1]= value;
}

void main()
{
    int arr[7]={3,5,8,13,17};
    int size = sizeof(arr)/sizeof(arr[0]);
    int tot_element=0;
    for(int i=0;i<size;i++)
        {
            if(arr[i] != 0)
                {
                    tot_element++;
                }
        }
    
    printf("%d",tot_element);
    int value;
    printf("Enter value :");
    scanf("%d",&value);
    insert(arr, tot_element, value, size);
    
    for(int i=0;i<size;i++)
        {
            printf(" %d |",arr[i]);
        }


}