#include "calc_runtime.h"

double get_program_runtime(void (*function)())
{
    clock_t start_time = clock();
    double runtime;
    do
    {
        function();
        runtime = (double)(clock() - start_time) / CLOCKS_PER_SEC;
    } while (runtime < 0);
    return runtime;
}

void test_function()
{
    int sum = 0;
    for (int i = 1; i <= 1000000; i++)
    {
        sum += i;
    }
}

void test_clac_runtime()
{
    double runtime = get_program_runtime(&test_function);
    printf("test_function 的程序运行时间为 %lf\n", runtime);
}
