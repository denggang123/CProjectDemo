#include "swap.h"
#include <stdio.h>

/*将数组按照升序的顺序进行排列*/
void bubble(int arr[], int sz)
{
    for (int i=0; i<sz; i++)
    {
        for (int j=0; j<sz-1-i; j++)
        {
            int flag = 1;

            if (arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
                flag = 0;
            }
            
            if (flag == 1)
                break;
        }
    }
}


void bubble_test()
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
    printf("\n");

}
