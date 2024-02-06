#include <stdio.h>
#include <stdlib.h> // Required for malloc and free



int main() {
    int size;

    // Prompt the user to enter the size of the dynamic array
    printf("Enter the size of the dynamic array: ");
    scanf("%d", &size);

    // Check if the user entered a valid size
    if (size <= 0) {
        printf("Invalid array size. Please enter a positive integer.\n");
        return 1; // Exit with an error code
    }

    // Declare a pointer to int to represent the dynamic array
    int *dynamicArray;

    // Allocate memory for the dynamic array using malloc
    dynamicArray = (int*)malloc(size * sizeof(int));

    // Check if memory allocation was successful
    if (dynamicArray == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1; // Exit with an error code
    }

    // Initialize the elements of the dynamic array
    printf("Enter %d elements for the dynamic array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &dynamicArray[i]);
    }

    // Display the elements of the dynamic array
    printf("Dynamic Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", dynamicArray[i]);
      
    }
    printf("\n");

    printf("Revrese Dynamic Array :");
    for(int i = (size-1); i>=0; i--)
        {
            printf("%d ",dynamicArray[i]);
        }

    // Deallocate the dynamically allocated memory when done
    free(dynamicArray);

    return 0; // Exit with a success code
}
