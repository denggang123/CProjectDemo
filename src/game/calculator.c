#include "calculator.h"

static int Add(int x, int y)
{
    return x + y;
}

static int Sub(int x, int y)
{
    return x - y;
}

static int Mul(int x, int y)
{
    return x * y;
}

static int Div(int x, int y)
{
    return x / y;
}

static void menu()
{
    printf("*************** 1. 加法    2. 减法 *******************\n");
    printf("*************** 3. 乘法    4. 除法 *******************\n");
    printf("***************      0. 退出      *******************\n");
}

void calc(int (*run_calc)(int, int))
{
    int x = 0;
    int y = 0;
    int ret = 0;
    printf("请输入两个数:>\n");
    scanf("%d%d", &x, &y);
    ret = run_calc(x, y);
    printf("得到的结果是%d\n", ret);
}

void calculator()
{
    
    int input = 0;
    int (*p_calc[5]) (int, int) = {NULL, Add, Sub, Mul, Div};
    do
    {
        menu();
        printf("请输入您的选择:>\n");
        scanf("%d", &input);
        if (input>=1 && input <=4)
        {
            calc(p_calc[input]);
        }
        else if (input == 0)
        {
            ;
        }
        else
        {
            printf("输入错误，请重新输入\n");
        }

    } while (input);
}