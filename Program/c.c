#include <stdio.h>

int main() {
    int array[10] = {1, 2, 3, 0, 5, 6,7,8,9,10}; 
    
    
    int count = 0;
    while (array[count] != 0 && count < 10) {
        count++;
    }

    // Printing the elements of the array
    printf("Elements in the array: %d", count);
    
    printf("\n");

    return 0;
}
