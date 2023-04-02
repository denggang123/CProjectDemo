#include "print.h"

void print_arr_1d(int arr[], int sz)
{
    for (int i=0; i<sz; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
