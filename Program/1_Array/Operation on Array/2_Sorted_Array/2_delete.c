#include<stdio.h>
void delete(int arr[], int tot_element, int size, int pos)
{
    printf("%d is deleted\n",arr[pos-1]);
    for(int i=pos-1; i<=tot_element;i++)
        {
            arr[i]=arr[i+1];
        }
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
    
    // printf("%d\n",tot_element);
    for(int i=0;i<size;i++)
        {
            printf(" %d |",arr[i]);
        }

    int pos;
    printf("Enter position :");
    scanf("%d", &pos);
    
    delete(arr,tot_element,size, pos);
    
    for(int i=0;i<size;i++)
        {
            printf(" %d |",arr[i]);
        }


}