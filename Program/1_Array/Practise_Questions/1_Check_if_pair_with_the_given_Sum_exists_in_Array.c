/*
 * This C program tells if there exists a pair in array
 * whose sum results in x.
 */

#include <stdio.h>

// Function to find and print pair
int chkPair(int A[], int size, int x)
{
    for (int i = 0; i < (size - 1); i++) {
        for (int j = (i + 1); j < size; j++) {
            if (A[i] + A[j] == x) {
                return 1;
            }
        }
    }

    return 0;
}
    
int main(void)
{
    int A[] = { 5,3,10 };
    int x = 13;
    int size = sizeof(A) / sizeof(A[0]);

    if (chkPair(A, size, x)) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }

    return 0;
}

