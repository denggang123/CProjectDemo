#include <stdio.h>

void print_arr_1d(int arr[], int sz)
{
    for (int i=0; i<sz; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


/* 对size字节空间的内容进行逐个交换 */
static void swap(char* p1, char* p2, int size)
{
    for (int i=0; i<size; i++)
    {
        char tmp = *p1;
        *p1 = *p2;
        *p2 = tmp;
        p1 ++;
        p2 ++;
    }
}

/**
 * @brief: bubble sort function
 * @note : ascending or descending is up to \param compar
*/
void bubble(void *base, int num, int size, int (*compar) (const void* p1, const void* p2))
{
    for (int i = 0; i < num; i++)
    {
        /* 单趟排序 */
        int flag = 1;
        
        for (int j = 0; j < num - 1 - i; j++)
        {
            
            if (compar((char *)base + j*size, (char *)base + (j+1)*size))
            {
                /* 交换:逐字节交换 */
                swap((char *)base + j*size, (char *)base + (j+1)*size, size);
                flag = 0;
            }
        }
        if (flag == 1)
            break;
    }
}

int compar_int (const void* p1, const void* p2)
{
    return *((int *)p1) - *((int *)p2);
}


void bubble_test()
{
    int arr[] = {255, 8, 7, 6, 5, 4, 3, 2, 1};
    int num = sizeof(arr) / sizeof(arr[0]);
    print_arr_1d(arr, num);
    int size = sizeof(arr[0]);
    bubble(arr, num, size, compar_int);
    print_arr_1d(arr, num);
}


