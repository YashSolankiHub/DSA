// C Program to find the largest number in the array.
#include <stdio.h>

// function to return max value
int getMax(int* arr, int size)
{
	int max = arr[0];
	for (int i = 1; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	return max;
}

// Driver code
int main()
{

	
	int arr[10]
		= { 135, 165, 1, 16, 511, 65, 654, 654,2,25 };

	printf("Largest Number in the Array: %d",
		getMax(arr, 10));
    
    // printf("\n%d",arr[10]);   //output ->garbage value


	return 0;
}
