/*
 * This C program tells if there exists a pair in array
 * whose sum results in x.
 */

#include <stdio.h>

// Function to find and print pair
void chkPair(int A[], int size, int x, int index[])
{
    int k=0;
    for (int i = 0; i < (size - 1); i++) {
        for (int j = (i + 1); j < size; j++) {
            if (A[i] + A[j] == x) {
                index[k++] = i;
                index[k] = j;
                break;
            }
        }
    }

    for(int i=0; i<2; i++)
        {
            printf("%d |",index[i]);
        }

}
    
void main()
{
    int A[] = { 5,3,10 };
    int x = 13;
    int size = sizeof(A) / sizeof(A[0]);
    int index[2];
    chkPair(A, size, x, index);

}

