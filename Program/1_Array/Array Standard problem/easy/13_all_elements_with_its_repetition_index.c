#include <stdio.h>

void findElementRepetition(int arr[], int size) {
    int isUnique;
    for(int i=0; i<size; i++)
        {
            printf("%d ",arr[i]);
            isUnique=1;
            int j;
            for(j=size-1; j>=i; j--)
                {
                    if(arr[i] == arr[j] && i != j)
                        {
                            printf("- Repeated at index : %d",j);
                            isUnique=0;
                            break;
                        }  
                    
                }    
            printf("\n");
        }
}

int main() {
    int arr[] = {4,5,6,4,10,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    findElementRepetition(arr, size);

    return 0;
}
