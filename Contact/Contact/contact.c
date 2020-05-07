#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
S ret = { { 0 }, 0 };

void menu1()
{
	printf("************************************************\n");
	printf("********   1.By name       2.By age        *****\n");
	printf("********   3.By sex        4.By telephone  *****\n");
	printf("********   5.By address    0.EXIT          *****\n");
	printf("************************************************\n");
}
static void print(Contact* pcon,S* ppos)
{
	printf("搜索的结果是:>\n");
	printf("%-8s\t%-5s\t%-5s\t%-12s\t%-20s\n", "姓名", "性别", "年龄", "电话", "地址");
	int i = 0;
	int j = 0;
	for (; j < ppos->tmp; j++)
	{
		i = ppos->arr[j];
		printf("%-8s\t%-5s\t%-5d\t%-12s\t%-20s\n", pcon->date[i].NAME, pcon->date[i].SEX, pcon->date[i].AGE, pcon->date[i].TELE, pcon->date[i].ADDR);
	}
}

 S* Find_byname(Contact* pcon,char* pname)
{
	assert(pcon && pname);
	memset(&ret, 0, sizeof(ret));
	int flag = 0;
	int i = 0;
	int count = 0;
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->date[i].NAME, pname) == 0)
		{
			flag = 1;
			ret.arr[count] = i;
			ret.tmp = count+1;
			count++;
		}
	}
	if (flag == 1)
		return &ret;
	else
	{
		ret.tmp = -1;
		return &ret;
	}
}
 S* Find_byage(Contact* pcon,int* page)
{
	assert(pcon && page);
	memset(&ret, 0, sizeof(ret));
	int flag = 0;
	int count = 0;
	int i = 0;
	for (i = 0; i < pcon->sz; i++)
	{
		if (pcon->date[i].AGE == *page)
		{
			flag = 1;
			ret.arr[count] = i;
			ret.tmp = count + 1;
			count++;
		}
	}
	if (flag == 1)
		return &ret;
	else
	{
		ret.tmp = -1;
		return &ret;
	}
}
S* Find_bysex(Contact* pcon,char* psex)
{
	assert(pcon && psex);
	memset(&ret, 0, sizeof(ret));
	int flag = 0;
	int count = 0;
	int i = 0;
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->date[i].SEX, psex) == 0)
		{
			flag = 1;
			ret.arr[count] = i;
			ret.tmp = count + 1;
			count++;
		}
	}
	if (flag == 1)
		return &ret;
	else
	{
		ret.tmp = -1;
		return &ret;
	}
}
S* Find_bytele(Contact* pcon,char* ptele)
{
	assert(pcon && ptele);
	memset(&ret, 0, sizeof(ret));
	int flag = 0;
	int count = 0;
	int i = 0;
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->date[i].TELE, ptele) == 0)
		{
			flag = 1;
			ret.arr[count] = i;
			ret.tmp = count + 1;
			count++;
		}
	}
	if (flag == 1)
		return &ret;
	else
	{
		ret.tmp = -1;
		return &ret;
	}
}
S* Find_byaddr(Contact* pcon,char* paddr)
{
	assert(pcon);
	memset(&ret, 0, sizeof(ret));
	int i = 0;
	int flag = 0;
	int count = 0;
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->date[i].ADDR, paddr) == 0)
		{
			flag = 1;
			ret.arr[count] = i;
			ret.tmp = count + 1;
			count++;
		}
	}
	if (flag == 1)
		return &ret;
	else
	{
		ret.tmp = -1;
		return &ret;
	}
}
void InitContact(Contact* pcon)
{
	assert(pcon);
	pcon->sz = 0;
	memset(pcon->date, 0, sizeof(pcon->date));
}

void SEARCH_Contact(Contact* pcon)
{
	//1.判断通讯录是否为空
	if (pcon->sz == 0)
	{
		printf("通讯录为空,无法删除！\n");
		return;
	}
	S* pos = NULL;
	int input = 0;
	//创建一个人的信息结构体
	Peoinfor Option;
	//初始化
	memset(&Option, 0, sizeof(Option));
	//搜索联系人
	do
	{
		menu1();
		printf("请输入你要搜索方式:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入要搜索人的名字:>");
			scanf("%s", Option.NAME);
		    pos = Find_byname(pcon, Option.NAME);
			if (pos->tmp == -1)
				printf("没有该联系人！\n");
			else
			    print(pcon, pos);
			break;
		case 2:
			printf("请输入要搜索人的年龄:>");
			scanf("%d", &(Option.AGE));
			pos = Find_byage(pcon, &(Option.AGE));
			if (pos->tmp == -1)
				printf("没有该联系人！\n");
			else
				print(pcon, pos);
			break;
		case 3:
			printf("请输入要搜索人的性别:>");
			scanf("%s", Option.SEX);
			pos = Find_bysex(pcon, Option.SEX);
			if (pos->tmp == -1)
				printf("没有该联系人！\n");
			else
				print(pcon, pos);
			break;
		case 4:
			printf("请输入要搜索人的电话:>");
			scanf("%s", Option.TELE);
			pos = Find_bytele(pcon, Option.TELE);
			if (pos->tmp == -1)
				printf("没有该联系人！\n");
			else
				print(pcon, pos);
			break;
		case 5:
			printf("请输入要搜索人的地址:>");
			scanf("%s", Option.ADDR);
			pos = Find_byaddr(pcon,Option.ADDR);
			if (pos->tmp == -1)
				printf("没有该联系人！\n");
			else
				print(pcon, pos);
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
	//创建一个人的信息结构体
	Peoinfor Option;
	//初始化
	memset(&Option, 0, sizeof(Option));
	int input = 0;
	int input1 = 0;
	S* pos = NULL;
	int i = 0;
	//1.判断通讯录是否为空
	if (pcon->sz == 0)
	{
		printf("通讯录为空,无法删除！\n");
		return;
	}
	//2.查找联系人
	//3.删除联系人
	do
	{
		menu1();
		printf("请选择你要通过哪种方式来删除:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入要删除人的名字:>");
			scanf("%s", Option.NAME);
			pos = Find_byname(pcon, Option.NAME);//查找联系人
			if (pos->tmp == -1)
				printf("没有该联系人！\n");
		    if ((pos->tmp) > 1)
			{
				printf("此通讯录有多个信息相同的联系人！\n");
				print(pcon, pos);
				printf("请输入你要删除第几个人:>");
				scanf("%d", &input1);
				pos->arr[0] = pos->arr[input1-1];
				pos->tmp = 1;
			}
			if ((pos->tmp) == 1)//删除联系人
			{
				for (i = pos->arr[0]; i < pcon->sz; i++)
				{
					pcon->date[i] = pcon->date[i + 1];
				}
				pcon->sz--;
				printf("删除成功！\n");
			}
			break;
		case 2:
			printf("请输入要删除人的年龄:>");
			scanf("%d", &(Option.AGE));
			pos = Find_byage(pcon, &(Option.AGE));
			if (pos->tmp == -1)
				printf("没有该联系人！\n");
			if ((pos->tmp) >1)
			{
				printf("此通讯录有多个信息相同的联系人！\n");
				print(pcon, pos);
				printf("请输入你要删除第几个人:>");
				scanf("%d", &input1);
				pos->arr[0] = pos->arr[input1 - 1];
				pos->tmp = 1;
			}
			if ((pos->tmp) == 1)
			{
				for (i = pos->arr[0]; i < pcon->sz; i++)
				{
					pcon->date[i] = pcon->date[i + 1];
				}
				pcon->sz--;
				printf("删除成功！\n");
			}
			break;
		case 3:
			printf("请输入要删除人的性别:>");
			scanf("%s", Option.SEX);
			pos = Find_bysex(pcon, Option.SEX);
			if (pos->tmp == -1)
				printf("没有该联系人！\n");
			if ((pos->tmp) >1)
			{
				printf("此通讯录有多个信息相同的联系人！\n");
				print(pcon, pos);
				printf("请输入你要删除第几个人:>");
				scanf("%d", &input1);
				pos->arr[0] = pos->arr[input1 - 1];
				pos->tmp = 1;
			}
			if ((pos->tmp) == 1)
			{
				for (i = pos->arr[0]; i < pcon->sz; i++)
				{
					pcon->date[i] = pcon->date[i + 1];
				}
				pcon->sz--;
				printf("删除成功！\n");
			}
			break;
		case 4:
			printf("请输入要删除人的电话:>");
			scanf("%s", Option.TELE);
			pos = Find_bytele(pcon, Option.TELE);
			if (pos->tmp == -1)
				printf("没有该联系人！\n");
			if ((pos->tmp) > 1)
			{
				printf("此通讯录有多个信息相同的联系人！\n");
				print(pcon, pos);
				printf("请输入你要删除第几个人:>");
				scanf("%d", &input1);
				pos->arr[0] = pos->arr[input1 - 1];
				pos->tmp = 1;
			}
			if ((pos->tmp) == 1)
			{
				for (i = pos->arr[0]; i < pcon->sz; i++)
				{
					pcon->date[i] = pcon->date[i + 1];
				}
				pcon->sz--;
				printf("删除成功！\n");
			}
			break;
		case 5:
			printf("请输入要删除人的地址:>");
			scanf("%s", Option.ADDR);
			pos = Find_byaddr(pcon, Option.ADDR);
			if (pos->tmp == -1)
				printf("没有该联系人！\n");
			if ((pos->tmp) > 1)
			{
				printf("此通讯录有多个信息相同的联系人！\n");
				print(pcon, pos);
				printf("请输入你要删除第几个人:>");
				scanf("%d", &input1);
				pos->arr[0] = pos->arr[input1 - 1];
				pos->tmp = 1;
			}
			if ((pos->tmp) == 1)
			{
				for (i = pos->arr[0]; i < pcon->sz; i++)
				{
					pcon->date[i] = pcon->date[i + 1];
				}
				pcon->sz--;
				printf("删除成功！\n");
			}
			break;
		case 0:
			printf("退出删除！\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input);
}

void MODIFY_Contact(Contact* pcon)
{
	int input = 0;
	int input1 = 0;
	int i = 0;
	S* pos = NULL;
	char Name[NAME_MAX] = { 0 };
	//1.判断通讯录是否为空
	if (pcon->sz == 0)
	{
	   printf("通讯录为空,无法修改！\n");
	   return;
	}
	//2.查找联系人
	printf("请输入你要修改的联系人的名字:>");
	scanf("%s", Name);
	pos = Find_byname(pcon, Name);
	// 3.修改联系人
	if (pos->tmp == -1)
		printf("没有该联系人！\n");
	if ((pos->tmp) > 1)
	{
		printf("此通讯录有多个信息相同的联系人！\n");
		print(pcon, pos);
		printf("请输入你要修改第几个人:>");
		scanf("%d", &input1);
		pos->arr[0] = pos->arr[input1 - 1];
		pos->tmp = 1;
	}
	if (pos->tmp == 1)
	{
		printf("请输入姓名:>");
		scanf("%s", pcon->date[pos->arr[0]].NAME);
		printf("请输入性别:>");
		scanf("%s", pcon->date[pos->arr[0]].SEX);
		printf("请输入年龄:>");
		scanf("%d", &(pcon->date[pos->arr[0]].AGE));
		printf("请输入电话:>");
		scanf("%s", pcon->date[pos->arr[0]].TELE);
		printf("请输入地址:>");
		scanf("%s", pcon->date[pos->arr[0]].ADDR);
	}
	printf("修改成功！\n");
}

//年龄排序（由小到大）
static void sort_age(Contact* pcon)
{
	int i = 0;
	int j = 0;
	int flag = 1;
	for (i = 0; i < pcon->sz; i++)
	{
		for (j = 0; j < pcon->sz - i - 1; j++)
		{
			if (pcon->date[j].AGE > pcon->date[j + 1].AGE)
			{
				flag = 0;
				Peoinfor tmp = pcon->date[j + 1];
				pcon->date[j + 1] = pcon->date[j];
				pcon->date[j] = tmp;
			}
		}
		if (flag == 1)
		{
			printf("排序完成！\n");
			return;
		}
	}
	printf("排序完成！\n");
}
//性别排序（男在前，女在后）
void sort_sex(Contact* pcon)
{
	int left = 0;
	int right = pcon->sz - 1;
	while (left < right)
	{
		//从左开始找‘女’
		while (strcmp(pcon->date[left].SEX, "女") != 0 && left < right)
			left++;
		//从右开始找‘男’
		while (strcmp(pcon->date[right].SEX, "男") != 0 && left < right)
			right--;
		//找到交换，再找下一对
		if (left < right)
		{
			Peoinfor tmp = pcon->date[right];
			pcon->date[right] = pcon->date[left];
			pcon->date[left] = tmp;
			left++;
			right--;
		}
	}
	printf("排序完成！\n");
}
//名字排序
void sort_name(Contact* pcon)
{
	int i = 0;
	int j = 0;
	int flag = 1;
	for (i = 0; i < pcon->sz; i++)
	{
		for (j = 0; j < pcon->sz - i - 1; j++)
		{
			if (strcmp(pcon->date[j].NAME, pcon->date[j + 1].NAME) > 0)
			{
				flag = 0;
				Peoinfor tmp = pcon->date[j + 1];
				pcon->date[j + 1] = pcon->date[j];
				pcon->date[j] = tmp;
			}
		}
		if (flag == 1)
		{
			printf("排序完成！\n");
			return;
		}
	}
	printf("排序完成！\n");
}

void SORT_Contact(Contact* pcon)
{
	int input = 0;
	do
	{
		printf("**********************************\n");
		printf("****    1.name      2.age     ****\n");
		printf("****    3.sex       0.exit    ****\n");
		printf("**********************************\n");
		printf("请输入你要通过哪种方式排序:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("你选择的是姓名排序！\n");
			sort_name(pcon);
			break;
		case 2:
			printf("你选择的是年龄排序，则将年龄由小到大排序！\n");
			sort_age(pcon);
			break;
		case 3:
			printf("你选择的是性别排序，则将男的排在前面，女的在后面！\n");
			sort_sex(pcon);
			break;
		case 0:
			printf("退出排序！\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	}while(input);
}
void SHOW_Contact(Contact* pcon)
{
	assert(pcon);
	printf("%-8s\t%-5s\t%-5s\t%-12s\t%-20s\n", "姓名", "性别", "年龄", "电话", "地址");
	int i = 0;
	for (i = 0; i < pcon->sz; i++)
	{
		printf("%-8s\t%-5s\t%-5d\t%-12s\t%-20s\n",pcon->date[i].NAME,pcon->date[i].SEX,pcon->date[i].AGE,pcon->date[i].TELE,pcon->date[i].ADDR);
	}
	if (i == 0)
	{
		printf("%-8s\t%-5s\t%-5s\t%-12s\t%-20s\n", "[空]", "[空]", "[空]", "[空]", "[空]");
	}
}
