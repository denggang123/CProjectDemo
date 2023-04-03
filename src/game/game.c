#include <stdio.h>
#include "game.h"
#include "game_three_points_chess.h"
#include "calculator.h"


void menu()
{
    printf("*************    请选择     *************\n");
    printf("*************   1 三子棋    *************\n");
    printf("*************   2 计算器    *************\n");
    printf("*************   0 结束游戏  *************\n");
}

void game_play()
{
    int input = 0;
    do
    {
        menu();
        printf("\n请输入您的选择:>\n");
        scanf("%d", &input);
        switch (input)
        {
        case 0:
            printf("游戏已退出，欢迎下次再玩\n");
            break;
        case 1:
            game_three_points_chess();
            break;
        case 2:
            calculator();
            break;
        default:
            printf("选择错误，请重新选择\n");
            break;
        }

    } while (input);
}
