#include <stdio.h>
#include <string.h>
#include "swap.h"

int main()
{
    int arr1[3][4] = {1, 2, 3, 4, 5};
    int arr2[3][4] = {{1, 2, 3}, 4, 5};
    int arr3[3][4] = {{1, 2, 3}, {4, 5}, 5};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\n",arr3[i][j]);
        }
    }
    // int a = 10;
    // int b = 23;
    // printf("交换前: a=%d, b= %d\n", a, b);
    // swap(&a, &b);
    // printf("交换后: a=%d, b= %d\n", a, b);
    return 0;
}
