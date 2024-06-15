
#include <stdio.h>

void findElementRepetition(int arr[], int size) {
    int isUnique;
    for(int i=0; i<size; i++)
        {
            isUnique=1;
            int j;
            for(j=0; j<i; j++)
                {
                    if(arr[i] == arr[j] && i != j)
                        {
                            isUnique=0;
                            break;
                        }  
                    
                }
            if(isUnique)    
                {
                    printf("%d |",arr[i]);
                }
        }
}

int main() {
    int arr[] = {4,5,6,4,10,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    findElementRepetition(arr, size);

    return 0;
}


// #include<stdio.h>
// void main()
// {
//     int arr[] = {10,12,12,12,14,14,14,7,5,3,10,15};
//     int size = sizeof(arr)/sizeof(int);

//     for(int i=0; i<size; i++)
//         {   
//             int j;
//             for( j=0; j<i; j++)
//                 {
//                     if(arr[i] == arr[j]){

//                     break;
//                     }
//                 }
//             if (i == j)
//                 {
//                     printf("%d |", arr[i]);
//                 }
            
//         }


// }