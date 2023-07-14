#include "contact.h"


//初始化通讯录
void initContact(Contact* pcon)
{
	pcon->sz = 0;
	memset(pcon->data, 0, sizeof(pcon->data[0]) * MAX);
}


//按姓名查找
int* searchByName(const Contact* pcon)
{
	char name[20] = { 0 };
	int* arr = (int*)calloc(MAX + 1, sizeof(int)); //记录查找到的联系人下标，数组第一个元素记录查找到了多少个人，后面的元素是查找到的联系人下标
	printf("请输入姓名：");
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->data[i].name, name) == 0)
		{
			arr[arr[0]++] = i;
		}
	}
	return arr;
}

//按年龄查找
int* searchByAge(const Contact* pcon)
{
	int age = 0;
	int* arr = (int*)calloc(MAX + 1, sizeof(int));
	printf("请输入年龄：");
	scanf("%d", &age);
	int i = 0;
	for (i = 0; i < pcon->sz; i++)
	{
		if (pcon->data[i].age == age)
		{
			arr[arr[0]++] = i;
		}
	}
	return arr;
}

//按性别查找
int* searchBySex(const Contact* pcon)
{
	char sex[5] = { 0 }; 
	int* arr = (int*)calloc(MAX + 1, sizeof(int));
	printf("请输入性别：");
	scanf("%s", sex);
	int i = 0;
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->data[i].sex, sex) == 0)
		{
			arr[arr[0]++] = i;
		}
	}
	return arr;
}

//按电话查找
int* searchByTele(const Contact* pcon)
{
	char tele[12] = { 0 };
	int* arr = (int*)calloc(MAX + 1, sizeof(int));
	printf("请输入电话：");
	scanf("%s", tele);
	int i = 0;
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->data[i].tele, tele) == 0)
		{
			arr[arr[0]++] = i;
		}
	}
	return arr;
}

//按地址查找
int* searchByAddr(const Contact* pcon)
{
	char addr[20] = { 0 };
	int* arr = (int*)calloc(MAX + 1, sizeof(int));
	printf("请输入地址：");
	scanf("%s", addr);
	int i = 0;
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->data[i].addr, addr) == 0)
		{
			arr[arr[0]++] = i;
		}
	}
	return arr;
}

//添加联系人
void addContact(Contact* pcon)
{
	printf("【添加联系人开始！】\n");
	int n = 0;
	printf("请输入你要添加几个联系人：>");
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("正在添加第%d个联系人：\n", i + 1);
		printf("请输入姓名：");
		scanf("%s", pcon->data[pcon->sz].name);
		printf("请输入年龄：");
		scanf("%d", &pcon->data[pcon->sz].age);
		printf("请输入性别：");
		scanf("%s", pcon->data[pcon->sz].sex);
		printf("请输入电话：");
		scanf("%s", pcon->data[pcon->sz].tele);
		printf("请输入地址：");
		scanf("%s", pcon->data[pcon->sz].addr);
		pcon->sz++;
		printf("第%d个联系人添加结束！\n", i + 1);
	}
	printf("【添加联系人结束，总共添加了%d个联系人！】\n", n);
}

//删除联系人菜单
void deleMenu()
{
	printf("*****************************************\n");
	printf("*****    请选择你要按什么条件删除  ******\n");
	printf("*****      1.name       2.age      ******\n");
	printf("*****      3.tele       4.addr     ******\n");
	printf("*****      0.exit                  ******\n");
	printf("*****************************************\n");
}

//根据选项删除联系人
void deleByCondition(Contact* pcon, int input)
{
	//定义一个函数指针数组，将每个查找函数作为数组元素
	int* (*fun[5])(Contact*) = { NULL, searchByName, searchByAge,  searchByTele, searchByAddr };
	int* arr = fun[input](pcon);
	if (arr[0] == 1) //没有重复的联系人，直接删除
	{
		int k = 0;
		for (k = arr[1]; k < pcon->sz - 1; k++) //删除
		{
			pcon->data[k] = pcon->data[k + 1];
		}
	}
	else if (arr[0] == 0)
	{
		printf("没有该联系人！\n");
		return;
	}
	else
	{
		printf("%-5s %-10s %-8s %-5s %-15s %-15s\n", "编号", "姓名", "年龄", "性别", "电话", "地址"); //打印标题
		int i = 0;
		for (i = 1; i <= arr[0]; i++)
		{
			printf("%-5d %-10s %-8d %-5s %-15s %-15s\n", i, pcon->data[i].name, pcon->data[i].age, pcon->data[i].sex, pcon->data[i].tele, pcon->data[i].addr);
		}
		while (1)
		{
			printf("联系人有多个，请输入你要删除的联系人编号：");
			int n = 0;
			scanf("%d", &n);
			if (n >= 1 && n <= arr[0]) //判断输入是否合法
			{
				int k = 0;
				for (k = arr[1]; k < pcon->sz - 1; k++) //删除
				{
					pcon->data[k] = pcon->data[k + 1];
				}
				break;
			}
			else
			{
				printf("输入错误，请重新输入！\n");
			}
		}
	}
	pcon->sz--;
	printf("【成功删除联系人！】\n");
}

//删除联系人
void delContact(Contact* pcon)
{
	int input = 0;
	do
	{
		deleMenu();
		printf("请输入你的选择：");
		scanf("%d", &input);
		if (input > 0 && input < 5)
		{
			deleByCondition(pcon, input);
		}
		else if (input == 0)
		{
			printf("退出删除联系人！\n");
			break;
		}
		else
		{
			printf("输入错误，请重新输入！\n");
		}
	} while (input);
}

//查找联系人菜单
void searchMenu()
{
	printf("*****************************************\n");
	printf("*****    请选择你要按什么条件查找  ******\n");
	printf("*****      1.name       2.age      ******\n");
	printf("*****      3.sex        4.tele     ******\n");
	printf("*****      5.addr       0.exit     ******\n");
	printf("*****************************************\n");
}

//查找联系人
void searchContact(const Contact* pcon)
{
	int input = 0;
	int* arr = NULL; //接收一个整形数组，数组中存放查找到的联系人下标
	do
	{
		searchMenu();
		printf("请输入你的选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//按姓名查找
			arr = searchByName(pcon);
			input = 0;
			break;
		case 2:
			//按年龄查找
			arr = searchByAge(pcon);
			input = 0;
			break;
		case 3:
			//按性别查找
			arr = searchBySex(pcon);
			input = 0;
			break;
		case 4:
			//按电话查找
			arr = searchByTele(pcon);
			input = 0;
			break;
		case 5:
			//按地址查找
			arr = searchByAddr(pcon);
			input = 0;
			break;
		case 0:
			//退出查找
			printf("退出查找！\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
		}
	} while (input);
	printf("%-10s %-8s %-5s %-15s %-15s\n", "姓名", "年龄", "性别", "电话", "地址"); //打印标题
	int i = 0;
	for (i = 1; i <= arr[0]; i++)
	{
		printf("%-10s %-8d %-5s %-15s %-15s\n", pcon->data[arr[i]].name, pcon->data[arr[i]].age, pcon->data[arr[i]].sex, pcon->data[arr[i]].tele, pcon->data[arr[i]].addr);
	}
	printf("【总共查找到了%d个联系人！】\n", arr[0]);
	if (arr != NULL)
	{
		free(arr);
	}
}

//修改联系人菜单
void modifyMenu()
{
	printf("*****************************************\n");
	printf("*****    请选择你要按什么条件修改  ******\n");
	printf("*****      1.name       2.age      ******\n");
	printf("*****      3.sex        4.tele     ******\n");
	printf("*****      5.addr       0.exit     ******\n");
	printf("*****************************************\n");
}

//按条件修改联系人
void modifyByCondition(Contact* pcon, int input)
{
	//定义一个函数指针数组，将每个查找函数作为数组元素
	int* (*fun[5])(Contact*) = { NULL, searchByName, searchByAge,  searchByTele, searchByAddr };
	int* arr = fun[input](pcon);
	if (arr[0] == 1) //没有重复的联系人，直接修改
	{
		printf("请输入姓名：");
		scanf("%s", pcon->data[arr[1]].name);
		printf("请输入年龄：");
		scanf("%d", &pcon->data[arr[1]].age);
		printf("请输入性别：");
		scanf("%s", pcon->data[arr[1]].sex);
		printf("请输入电话：");
		scanf("%s", pcon->data[arr[1]].tele);
		printf("请输入地址：");
		scanf("%s", pcon->data[arr[1]].addr);
	}
	else if (arr[0] == 0)
	{
		printf("没有该联系人！\n");
		return;
	}
	else
	{
		printf("%-5s %-10s %-8s %-5s %-15s %-15s\n", "编号", "姓名", "年龄", "性别", "电话", "地址"); //打印标题
		int i = 0;
		for (i = 1; i <= arr[0]; i++)
		{
			printf("%-5d %-10s %-8d %-5s %-15s %-15s\n", i, pcon->data[arr[i]].name, pcon->data[arr[i]].age, pcon->data[arr[i]].sex, pcon->data[arr[i]].tele, pcon->data[arr[i]].addr);
		}
		while (1)
		{
			printf("联系人有多个，请输入你要修改的联系人编号：");
			int n = 0;
			scanf("%d", &n);
			if (n >= 1 && n <= arr[0]) //判断输入是否合法
			{
				printf("请输入姓名：");
				scanf("%s", pcon->data[arr[n]].name);
				printf("请输入年龄：");
				scanf("%d", &pcon->data[arr[n]].age);
				printf("请输入性别：");
				scanf("%s", pcon->data[arr[n]].sex);
				printf("请输入电话：");
				scanf("%s", pcon->data[arr[n]].tele);
				printf("请输入地址：");
				scanf("%s", pcon->data[arr[n]].addr);
				break;
			}
			else
			{
				printf("输入错误，请重新输入！\n");
			}
		}
	}
	printf("【成功修改联系人！】\n");
}

//修改联系人
void modifyContact(Contact* pcon)
{
	int input = 0;
	do
	{
		modifyMenu();
		printf("请输入你的选择：");
		scanf("%d", &input);
		if (input > 0 && input < 5)
		{
			modifyByCondition(pcon, input);
		}
		else if (input == 0)
		{
			printf("退出删除联系人！\n");
			break;
		}
		else
		{
			printf("输入错误，请重新输入！\n");
		}
	} while (input);
}

//显示全部联系人
void showContact(const Contact* pcon)
{
	printf("%-10s %-8s %-5s %-15s %-15s\n", "姓名", "年龄", "性别", "电话", "地址"); //打印标题
	int i = 0;
	for (i = 0; i < pcon->sz; i++)
	{
		printf("%-10s %-8d %-5s %-15s %-15s\n", pcon->data[i].name, pcon->data[i].age, pcon->data[i].sex, pcon->data[i].tele, pcon->data[i].addr);
	}
	printf("【总共显示了%d个联系人！】\n", pcon->sz);
}

//清空联系人
void emptyContact(Contact* pcon)
{
	initContact(pcon);
}

//排序菜单函数
void sortMenu()
{
	printf("*****************************************\n");
	printf("*****    请选择你要按什么条件排序  ******\n");
	printf("*****            1.name            ******\n");
	printf("*****            2.age             ******\n");
	printf("*****            0.exit            ******\n");
	printf("*****************************************\n");
}

//按姓名比较
int sortByName(const void* p1, const void* p2)
{
	return (strcmp(((PerInfo*)p1)->name, ((PerInfo*)p2)->name));
}

//按年龄比较
int sortByAge(const void* p1, const void* p2)
{
	return (((PerInfo*)p1)->age - ((PerInfo*)p2)->age);
}

//排序联系人
void sortContact(Contact* pcon)
{
	int input = 0;
	do
	{
		sortMenu();
		printf("请输入你的选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//按姓名排序
			qsort(pcon->data, pcon->sz, sizeof(pcon->data[0]), sortByName); //使用库函数qsort
			break;
		case 2:
			//按年龄排序
			qsort(pcon->data, pcon->sz, sizeof(pcon->data[0]), sortByAge); //使用库函数qsort
			break;
		case 0:
			printf("退出排序！\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
		}
	} while (input);
}