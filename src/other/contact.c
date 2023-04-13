#include "contact.h"

static void menu()
{
    printf("******************************************************\n");
    printf("************    1. add         2. del     ************\n");
    printf("************    3. search      4. modify  ************\n");
    printf("************    5. sort        6. print   ************\n");
    printf("************            0. exit           ************\n");
    printf("******************************************************\n");
}

static void InitContact(ContactList * con)
{
    con->sz = 0;
    /* 使用内存设置函数对数组进行初始化 */
    memset(con->data, 0, sizeof(con->data));  
}

enum Option
{
    EXIT,
    ADD,
    DEL,
    SEARCH,
    MODIFY,
    SORT,
    PRINT
};

int contact()
{
    int input = 0;

    /* 创建通讯录 */
    ContactList con;

    /* 初始化通讯录 */
    InitContact(&con);

    do
    {
        menu();
        printf("请输入您的选择:> \n");
        scanf("%d", &input);
        switch (input)
        {
        case ADD:
            break;
        case DEL:
            break;
        case MODIFY:
            break;
        case SEARCH:
            break;
        case PRINT:
            break;
        case SORT:
            break;
        case EXIT:
            break;
        default:
            break;
        }

    } while (input);

    return 0;
}