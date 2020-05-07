#define _CRT_SECURE_NO_WARNINGS 1
//实现一个通讯录（查找，删除，显示，添加，排序,修改）
#include "contact.h"
void menu()
{
	printf("*************************************\n");
	printf("****     1.ADD       2.DELET    *****\n");
	printf("****     3.MODIFY    4.SEARCH   *****\n");
	printf("****     5.SHOW      6.SORT     *****\n");
	printf("****     0.EXIT                 *****\n");
	printf("*************************************\n");
}
int main()
{
	int input = 0;
	//创建一个通讯录
	Contact con;
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请输入你的选择:> ");
		scanf("%d", &input);
		switch (input)
		{
		case  ADD:
			ADD_Contact(&con);
			break;
		case DELE:
			DELE_Contact(&con);
			break;
		case SEARCH:
			SEARCH_Contact(&con);
			break;
		case MODIFY:
			MODIFY_Contact(&con);
			break;
		case SORT:
			SORT_Contact(&con);
			break;
		case SHOW:
			SHOW_Contact(&con);
			break;
		case EXIT:
			printf("退出通讯录！\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	} while (input);
	return 0;
}