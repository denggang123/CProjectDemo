#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "bubble.h"
#include "swap.h"
#include "game.h"
#include "adjust_arr.h"
#include "calc_runtime.h"
#include "print.h"



int main()
{
    int arr[10] = {1,3,2,4,5,6,7,8,9,10};
    int sz = sizeof(arr)/sizeof(arr[0]);
    print_arr_1d(arr, sz);
    adjust_array(arr, sz);
    print_arr_1d(arr, sz);
    bubble(arr, sz);
    print_arr_1d(arr, sz);
    return 0;
}
