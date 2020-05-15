#define _CRT_SECURE_NO_WARNINGS 1
#include "Sqlist.h"
void menu()
{
	printf("0.退出操作\n");
	printf("1.清空线性表\n");
	printf("2.求线性表的大小\n");
	printf("3.按位置查找线性表中的元素\n");
	printf("4.按值查找线性表中的元素\n");
	printf("5.给线性表中某个位置插入某个元素\n");
	printf("6.删除线性表中的某个位置的元素\n");
	printf("7.查找线性表中某个位置元素的前驱\n");
	printf("8.查找线性表中某个位置元素的后继\n");
	printf("9.打印线性表\n");
}
int main()
{
	int i = 0;
	int pos = 0;
	int input = 0;
	ElemType elem = 0;
	Status s = 0;
	int len = 0;
	Sqlist list;//创建一个线性表
	SqlistPtr L = &list;
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int sz = sizeof(arr)/sizeof(arr[0]);
	List_Create(L, arr, sz);//初始化线性表
	do
	{
		menu();
		printf("请输入你的选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			List_Clear(L);
			break;
		case 2:
			len = List_size(L);
			printf("线性表的大小是:>%d\n", len);
			break;
		case 3:
			printf("请输入你要查找哪一个位置的元素:>");
			scanf("%d", &pos);
			s = List_Retrival(L, pos, &elem);
			if (s == success)
			{
				printf("查找成功！\n");
				printf("%d位置的元素是%d\n", pos, elem);
			}
			else
				printf("查找失败！\n");
			break;
		case 4:
			printf("请输入你要查找的元素:>");
			scanf("%d", &elem);
			s = List_Locate(L, elem, &pos);
			if (s == success)
			{
				printf("查找成功！\n");
				printf("%d元素所在的位置是%d\n", elem, pos);
			}
			else
				printf("查找失败！\n");
			break;
		case 5:
			printf("请输入你要插入元素的位置和插入元素的值:>");
			scanf("%d %d", &pos, &elem);
			s = List_insert(L, i, i);
			if (s == success)
				printf("插入成功！\n");
			else
				printf("插入失败！\n");
			break;
		case 6:
			if (!List_Empty(L))
			{
				printf("线性表为空，无法删除！\n");
				break;
			}
			printf("请输入你要删除哪一个位置的元素:>");
			scanf("%d", &pos);
			s = List_delete(L, pos);
			if (s == success)
				printf("删除成功！\n");
			else
				printf("删除失败！\n");
			break;
		case 7:
			printf("请输入你要求哪一个位置元素的前驱:>");
			scanf("%d", &pos);
			s = List_prior(L, pos, &elem);
			if (s == success)
				printf("%d位置的前驱是%d\n", pos, elem);
			else
				printf("查找失败！\n");
			break;
		case 8:
			printf("请输入你要求哪一个位置元素的前继:>");
			scanf("%d", &pos);
			s = List_Next(L, pos, &elem);
			if (s == success)
				printf("%d位置的后继是%d\n", pos, elem);
			else
				printf("查找失败！\n");
			break;
		case 9:
			List_Print(L);
			break;
		case 0:
			List_Destory(L);
			printf("退出程序\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
			break;
		}
	}while (input);
	return 0;
}