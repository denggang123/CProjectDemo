#include "swap.h"

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
