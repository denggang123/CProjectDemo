#include <stdio.h>
#include <string.h>
#include "swap.h"
#include "bubble.h"

int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int sz = sizeof(arr)/sizeof(arr[0]);

    for (int i=0; i<sz; i++)
    {
        printf("%d ", arr[i]);
    }
    
    bubble(arr, sz);
    printf("\n升序排列后:\n");
    
    for (int i=0; i<sz; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
