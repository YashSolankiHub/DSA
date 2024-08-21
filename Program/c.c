#include <stdio.h>

int main() {
    int array[10] = {1, 2, 3, 5}; 
    
    
    int count = 0;
    while (array[count] != 0 && count < 10) {
        count++;
    }

    // Printing the elements of the array
    printf("Elements in the array: %d", count);
    
    printf("\n");

    // for (int i=0; i<10; i++)
    //     {
    //         printf("%d |",array[i]);
    //     }
    return 0;


}
