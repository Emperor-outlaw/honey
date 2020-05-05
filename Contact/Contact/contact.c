#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"


static void print_SeaCon(S* pS1)
{
	printf("搜索的结果是:>\n");
	int i = 0;
	for (i = 0; i < pS1->tmp; i++)
	{
		printf("%s", (*pS1).arr[i]);
	}
}
static int Find_byname(Contact* pcon)
{
	assert(pcon);
	S S1 = { { 0 }, 0 };
	int flag = 0;
	int i = 0;
	int j = 0;
	int arr[MAX] = { 1 };
	char name[NAME_MAX] = { 0 };
	printf("请输入搜索人的姓名:>");
	scanf("%s", name);
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->date[i].NAME, name) == 0)
		{
			for (j = 0;; j++)
			{
				flag = 1;
				S1.arr[j]= i;
				S1.tmp = j;
				break;
			}
		}
	}
	if (flag == 0)
	{
		S1.tmp = -1;
		return &S1;
	}
	else
	{
		return &S1;
	}
	print_SeaCon(&S1);
}
static int Find_byage(Contact* pcon)
{
	assert(pcon);
	int i = 0;
	char age = 0;
	printf("请输入搜索人的年龄:>");
	scanf("%s", age);
	for (i = 0; i < pcon->sz; i++)
	{
		if (pcon->date[i].AGE == age)
		{
			return i;
		}
	}
	return -1;
}
static int Find_bysex(Contact* pcon)
{
	assert(pcon);
	int i = 0;
	char sex[SEX_MAX] = { 0 };
	printf("请输入搜索人的性别:>");
	scanf("%s", sex);
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->date[i].SEX, sex) == 0)
		{
			return i;
		}
	}
	return -1;
}
static int Find_bytele(Contact* pcon)
{
	assert(pcon);
	int i = 0;
	char tele[TELE_MAX] = { 0 };
	printf("请输入搜索人的电话:>");
	scanf("%s", tele);
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->date[i].TELE, tele) == 0)
		{
			return i;
		}
		return -1;
	}
}
static int Find_byaddr(Contact* pcon)
{
	assert(pcon);
	int i = 0;
	char addr[NAME_MAX] = { 0 };
	printf("请输入搜索人的地址:>");
	scanf("%s", addr);
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->date[i].ADDR, addr) == 0)
		{
			return i;
		}
	}
	return -1;
}
void InitContact(Contact* pcon)
{
	assert(pcon);
	pcon->sz = 0;
	memset(pcon->date, 0, sizeof(pcon->date));
}
void SEARCH_Contact(Contact* pcon)
{
	int input = 0;
	do
	{
		printf("************************************************\n");
		printf("********   1.By name       2.By age        *****\n");
		printf("********   3.By sex        4.By telephone  *****\n");
		printf("********   5.By address    6.EXIT          *****\n");
		printf("************************************************\n");
		printf("请输入你要搜索方式:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Find_byname(pcon);
			break;
		case 2:
			Find_byage(pcon);
			break;
		case 3:
			Find_bysex(pcon);
			break;
		case 4:
			Find_bytele(pcon);
			break;
		case 5:
			Find_byaddr(pcon);
			break;
		case 0:
			printf("退出搜索！\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input);
}
void ADD_Contact(Contact* pcon)
{
	assert(pcon);
	//判断通讯录是否已满
	if (pcon->sz == MAX)
	{
		printf("通讯录已满！\n");
		return;
	}
	printf("请输入姓名:>");
	scanf("%s", pcon->date[pcon->sz].NAME);
	printf("请输入性别:>");
	scanf("%s", pcon->date[pcon->sz].SEX);
	printf("请输入年龄:>");
	scanf("%d", &(pcon->date[pcon->sz].AGE));
	printf("请输入电话:>");
	scanf("%s", pcon->date[pcon->sz].TELE);
	printf("请输入地址:>");
	scanf("%s", pcon->date[pcon->sz].ADDR);
	pcon->sz++;
	printf("录入成功!\n");
}
void DELE_Contact(Contact* pcon)
{
	assert(pcon);
	int i = 0;
	//char Name[NAME_MAX] = { 0 };
	//判断通讯录是否为空
	if (pcon->sz == 0)
	{
		printf("通讯录为空,无法删除！\n");
		return;
	}
	//printf("请输入要删除人的名字:>");
	//scanf("%s", Name);
	//查找联系人
	S* pos = Find_byname(pcon);
	if ((*pos).tmp == -1)
	{
		printf("此通讯录没有该人！\n");
		return;
	}
	//删除联系人
	for (i = pos; i < pcon->sz; i++)
	{
		pcon->date[i] = pcon->date[i + 1];
	}
	pcon->sz--;
	printf("删除成功！\n");
}

void SHOW_Contact(Contact* pcon)
{
	assert(pcon);
	printf("%-8s\t%-5s\t%-5s\t%-12s\t%-20s\n", "姓名", "性别", "年龄", "电话", "地址");
	int i = 0;
	for (i = 0; i < pcon->sz; i++)
	{
		printf("%-8s\t%-5s\t%-5s\t%-12s\t%-20s\n",pcon->date[i].NAME,pcon->date[i].SEX,pcon->date[i].AGE,pcon->date[i].TELE,pcon->date[i].ADDR);
	}
	if (i == 0)
	{
		printf("%-8s\t%-5s\t%-5s\t%-12s\t%-20s\n", "[空]", "[空]", "[空]", "[空]", "[空]");
	}
}
