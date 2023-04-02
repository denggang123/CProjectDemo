#include "adjust_arr.h"

void adjust_array(int arr[], int sz)
/* adjust arr, make all the odd numbers before all the even numbers in the array */
{
    int left = 0;
    int right = sz - 1;
    while (left<right)
    {
        while((left<right) && (arr[left]%2 != 0))  // find a even number
        {
            left ++;
        }
        while((left<right) && (arr[right]%2 == 0))  // find an odd number
        {
            right --;
        }
        if (left < right)
        {
            swap(&arr[left], &arr[right]);
        }
    }

}