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

static void InitContact(ContactList *con)
{
    /* 动态开辟3个联系人的空间 */
    con->data = (PeoInfo *)calloc(DEFAULT_SZ, sizeof(PeoInfo));
    if (con->data == NULL)
    {
        perror("InitContact");
        return;
    }
    /* 当前0个联系人信息 */
    con->sz = 0;
    /* 当前容量为3 */
    con->capacity = DEFAULT_SZ;
}

static void Print(const ContactList *con)
{
    printf("%-20s\t %-10s\t %-10s\t %-12s\t %-20s\n", "姓名", "年龄", "性别", "电话", "地址");
    for (int i = 0; i < con->sz; i++)
    {
        printf("%-20s\t %-10d\t %-10s\t %-12s\t %-20s\n", con->data[i].name, con->data[i].age, con->data[i].sex, con->data[i].tele, con->data[i].addr);
    }
    printf("当前通讯录容量：%d, 当前联系人个数：%d\n", con->capacity, con->sz);
}

static void AddContact(ContactList *con)
{
    /* 先判断是否需要扩容 如需要 先扩容 */
    if (con->sz == con->capacity)
    {
        PeoInfo *tmp = (PeoInfo *)realloc(con->data, (con->capacity + INC_SZ)*sizeof(PeoInfo));
        if (tmp != NULL)
        {
            con->data = tmp;
            con->capacity += INC_SZ;
        }
        else
        {
            printf("容量已达到最大！");
            return;
        }
    }

    /* 增加一个人的信息 */
    printf("请输入姓名:>");
    scanf("%s", con->data[con->sz].name);
    printf("请输入年龄:>");
    scanf("%d", &(con->data[con->sz].age));
    printf("请输入性别:>");
    scanf("%s", con->data[con->sz].sex);
    printf("请输入手机号:>");
    scanf("%s", con->data[con->sz].tele);
    printf("请输入地址:>");
    scanf("%s", con->data[con->sz].addr);

    con->sz++;
    printf("增加成功\n");
}

static int FindByName(const ContactList *con, const char *name)
{
    for (int i = 0; i < con->sz; i++)
    {
        if (strcmp(con->data[i].name, name) == 0)
        {
            return i;
        }
    }
    return -1;
}

static void DelContact(ContactList *con)
{
    if (con->sz == 0)
    {
        printf("通讯录为空，无需删除\n");
        return;
    }
    /* 删除一个人的信息，要先找到这个人的信息，根据名字来找吧 */
    char name[MAX_NAME] = {0};
    printf("请输入要删除的人的姓名:>\n");
    scanf("%s", name);

    int pos = FindByName(con, name);

    if (pos == -1)
    {
        printf("要删除的人的信息不存在！\n");
        return;
    }

    for (int i = pos; i < con->sz - 1; i++)
    {
        con->data[i] = con->data[i + 1];
    }

    con->sz--;
    printf("删除成功\n");
}

static void SearchContact(ContactList *con)
{
    char name[MAX_NAME] = {0};
    printf("请输入要查找的人的姓名:>\n");
    scanf("%s", name);
    int pos = FindByName(con, name);

    if (pos == -1)
    {
        printf("要查找的人的信息不存在！\n");
        return;
    }
    printf("%-20s\t %-10s\t %-10s\t %-12s\t %-20s\n", "姓名", "年龄", "性别", "电话", "地址");
    printf("%-20s\t %-10d\t %-10s\t %-12s\t %-20s\n", con->data[pos].name, con->data[pos].age, con->data[pos].sex, con->data[pos].tele, con->data[pos].addr);
}

static void ModifyContact(ContactList *con)
{
    char name[MAX_NAME] = {0};
    printf("请输入要更新的人的姓名:>\n");
    scanf("%s", name);
    int pos = FindByName(con, name);

    if (pos == -1)
    {
        printf("要更新的人的信息不存在！\n");
        return;
    }
    printf("请输入姓名:>");
    scanf("%s", con->data[pos].name);
    printf("请输入年龄:>");
    scanf("%d", &(con->data[pos].age));
    printf("请输入性别:>");
    scanf("%s", con->data[pos].sex);
    printf("请输入手机号:>");
    scanf("%s", con->data[pos].tele);
    printf("请输入地址:>");
    scanf("%s", con->data[pos].addr);
}

static void DestoryContact(ContactList *con)
{
    free(con->data);
    con->data = NULL;
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
            AddContact(&con);
            break;
        case DEL:
            DelContact(&con);
            break;
        case MODIFY:
            ModifyContact(&con);
            break;
        case SEARCH:
            SearchContact(&con);
            break;
        case PRINT:
            Print(&con);
            break;
        case SORT:
            printf("该功能暂时未开发\n");
            break;
        case EXIT:
            DestoryContact(&con);
            break;
        default:
            printf("选择错误，请重新选择\n");
            break;
        }

    } while (input);

    return 0;
}