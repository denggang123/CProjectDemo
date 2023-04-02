#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "game_three_points_chess.h"

static void InitBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            board[i][j] = ' ';
        }
    }
}

static void DisplayBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        /* 打印一行的数据 */
        for (j = 0; j < col; j++)
        {
            if (j < col - 1)
                printf(" %c |", board[i][j]);
            else
                printf(" %c \n", board[i][j]);
        }

        /* 打印分隔符 */
        if (i < row - 1)
        {
            for (j = 0; j < col; j++)
            {
                if (j < col - 1)
                    printf("---|");
                else
                    printf("---\n");
            }
        }
    }
}

static void PlayerMove(char board[ROW][COL], int row, int col)
{
    printf("玩家走\n");
    int x = 0;
    int y = 0;
    while (1)
    {
        printf("请输入要下的坐标:>\n");

        /*
        不要直接这么写：scanf("%d%d", &x, &y); 因为如果用户输入的是字符而不是数字，那么 scanf 函数会将字符留在输入缓冲区
        中，并返回错误代码。然后程序会进入一个死循环！
        解决办法：在scanf函数前先清空输入缓冲区，以便接收正确的输入, 如果 scanf 函数返回值不等于 2，则提示输入有误并继续等
        待用户输入。这样可以避免程序陷入无限循环。
        */
        fflush(stdin);
        if (scanf("%d%d", &x, &y) != 2)
        {
            printf("输入有误，请重新输入数字！\n");
            continue;
        }

        if (x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if (board[x - 1][y - 1] == ' ')
            {
                board[x - 1][y - 1] = '*';
                break;
            }
            else
            {
                printf("该位置已被占用，请重新输入！\n");
            }
        }
        else
        {
            printf("输入坐标超出棋盘限制，请重新输入！\n");
        }
    }
}

static void ComputerMove(char board[ROW][COL], int row, int col)
{
    printf("电脑走\n");
    int x = 0;
    int y = 0;
    while (1)
    {
        x = rand() % row;
        y = rand() % col;
        if (board[x][y] == ' ')
        {
            board[x][y] = '#';
            break;
        }
    }
}

static int IsFull(char board[ROW][COL], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (board[i][j] == ' ')
                return 0;
        }
    }
    return 1;
}

/* 获取状态,共4种状态 (*)玩家赢 (#)(电脑赢) (E)平局 (C)继续 */
/* ATTENTION: 暴力法进行判断，还有优化空间(记录最近一次下的位置，则只需要局部搜索) */
static char GetStatus(char board[ROW][COL], int row, int col)
{
    /* 判断行 */
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col - 2; j++)
        {
            if (board[i][j] == board[i][j + 1] && board[i][j + 1] == board[i][j + 2] && board[i][j + 2] != ' ')
            {
                return board[i][j];
            }
        }
    }

    /* 判断列 */
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col - 2; j++)
        {
            if (board[i][j] == board[i + 1][j] && board[i + 1][j] == board[i + 2][j] && board[i + 2][j] != ' ')
            {
                return board[i][j];
            }
        }
    }

    /* 判断左上到右下对角 */
    for (int i = 0; i < row - 2; i++)
    {
        for (int j = 0; j < col - 2; j++)
        {
            if (board[i][j] == board[i + 1][j + 1] && board[i + 1][j + 1] == board[i + 2][j + 2] && board[i + 2][j + 2] != ' ')
            {
                return board[i][j];
            }
        }
    }

    /* 判断右上到左下对角 */
    for (int i = 0; i < row - 2; i++)
    {
        for (int j = 2; j < col; j++)
        {
            if (board[i][j] == board[i + 1][j - 1] && board[i + 1][j - 1] == board[i + 2][j - 2] && board[i + 2][j - 2] != ' ')
            {
                return board[i][j];
            }
        }
    }

    if (IsFull(board, row, col))
        return 'E';
    else
        return 'C';
}

void game_three_points_chess()
{
    char board[ROW][COL] = {0};
    char ret = '\0';
    InitBoard(board, ROW, COL);
    DisplayBoard(board, ROW, COL);
    while (1)
    {
        /* 玩家走 */
        PlayerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);

        /* 获取状态,共4种状态 (*)玩家赢 (#)(电脑赢) (E)平局 (C)继续 */
        ret = GetStatus(board, ROW, COL);
        if (ret != 'C')
            break;

        /* 设置随机数种子， 电脑走 */
        srand((unsigned int)time(NULL));
        ComputerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);

        /* 获取状态,共4种状态 (*)玩家赢 (#)(电脑赢) (E)平局 (C)继续 */
        ret = GetStatus(board, ROW, COL);
        if (ret != 'C')
            break;
    }

    if (ret == '*')
        printf("玩家获胜\n");
    else if (ret == '#')
        printf("电脑获胜\n");
    else
        printf("平局");
}