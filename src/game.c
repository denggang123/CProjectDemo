#include <stdio.h>
#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
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

void DisplayBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        // 打印一行的数据
        for (j = 0; j < col; j++)
        {
            if (j < col - 1)
                printf(" %c  |", board[i][j]);
            else
                printf(" %c  \n", board[i][j]);
        }

        // 打印分隔符
        if (i < row - 1)
        {
            for (j = 0; j < col; j++)
            {
                if (j < col - 1)
                    printf("----|");
                else
                    printf("---\n");
            }
        }
    }
}

void game_sanziqi()
{
    char board[ROW][COL] = {0};
    InitBoard(board, ROW, COL);
    printf("游戏暂未开发完成\n");
    DisplayBoard(board, ROW, COL);
}

void menu()
{
    printf("*************    请选择     *************\n");
    printf("*************   1 三子棋    *************\n");
    printf("*************   0 结束游戏  *************\n");
}

void game_play()
{
    int input = 0;
    do
    {
        menu();
        printf("请输入您的选择:>\n");
        scanf("%d", &input);
        switch (input)
        {
        case 0:
            printf("游戏已退出，欢迎下次再玩\n");
            break;
        case 1:
            game_sanziqi();
            // printf("游戏还未开发\n");
            break;
        default:
            printf("选择错误，请重新选择\n");
            break;
        }

    } while(input);
}
