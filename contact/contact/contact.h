#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DEFAULT_MAX 2 //通讯录的默认大小
#define SCALE 2 //通讯录每次扩容增加的幅度

//联系人的信息
typedef struct PerInfo
{
	char name[10]; //姓名
	int age; //年龄
	char sex[5]; //性别
	char tele[12]; //电话
	char addr[20]; //地址
}PerInfo;

//通讯录
typedef struct Contact
{
	int sz; //通讯录中人的个数
	int capacity; //通讯录最大容量
	PerInfo* data; //指向存放联系人信息的数组，数组空间动态开辟
}Contact;

//初始化通讯录
void initContact(Contact* pcon);

//添加联系人
void addContact(Contact* pcon);

//删除联系人
void delContact(Contact* pcon);

//查找联系人
void searchContact(const Contact* pcon);

//修改联系人
void modifyContact(Contact* pcon);

//显示全部联系人
void showContact(const Contact* pcon);

//清空联系人
void emptyContact(Contact* pcon);

//排序联系人
void sortContact(Contact* pcon);