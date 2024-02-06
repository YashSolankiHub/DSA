// C Program to illustrate the 3d array
#include <stdio.h>

int main()
{

    // 3D array declaration
    int arr[2][2][2] = {
        {{10, 20} /* 1st row*/, {30, 40} /* 2nd row*/}, // 1st dimensional
        {{50, 60} /* 1st row*/, {70, 80} /* 2nd row*/}  // 2nd dimensional
    };


    int arr1[2][2][3] = {
                { {1,2,3}, {10,20,30}}, 
                { {4,5,6}, {40,50,60}}
    };

    // printing elements
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("%d ", arr1[i][j][k]);
            }
            printf("\n");
        }
        printf("\n \n");
    }

    return 0;
}
