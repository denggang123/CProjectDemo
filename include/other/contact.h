#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

#define MAX_PEOPLE 1000
#define DEFAULT_SZ 3
#define INC_SZ 2


int contact();

typedef struct PeoInfo
{
    char name[MAX_NAME];
    int age;
    char sex[MAX_SEX];
    char tele[MAX_TELE];
    char addr[MAX_ADDR];

} PeoInfo;

/**
 * @note: 不使用动态内存开辟实现的通讯录
typedef struct ContactList
{
    PeoInfo data[MAX_PEOPLE];  // 用来存放联系人的信息
    int sz;                    // 用来记录当前通讯录中一共有多少个人的信息
} ContactList;
*/

/**
 * @note: 使用动态内存开辟实现的通讯录
*/
typedef struct ContactList
{
    PeoInfo * data;  // 指向联系人列表的指针
    int sz;          // 用来记录当前通讯录中一共有多少个人的信息
    int capacity;    // 用来记录当前通讯录的容量
} ContactList;
