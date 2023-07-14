#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100 //通讯录的大小

//人的信息
typedef struct PerInfo
{
	char name[10];
	int age;
	char sex[5];
	char tele[12];
	char addr[20];
}PerInfo;

//通讯录
typedef struct Contact
{
	int sz; //通讯录中人的个数
	PerInfo data[MAX]; //存放100个人的信息
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