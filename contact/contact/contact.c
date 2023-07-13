#define _CRT_SECURE_NO_WARNINGS

//实现一个通讯录
//通讯录可以存储多人信息，人数不定，每个人的信息包括：姓名、性别、年龄、电话、住址
//提供方法：
//1、添加联系人信息
//2、删除指定联系人信息
//3、查找指定联系人信息
//4、修改指定联系人信息
//5、显示所有联系人信息
//6、清空所有联系人
//7、以名字排序所有联系人

#include <stdio.h>
#include <stdlib.h>

//主菜单函数
void menu()
{
	printf("*****************************************\n");
	printf("*****     1.add        2.delete    ******\n");
	printf("*****     3.search     4.modify    ******\n");
	printf("*****     5.show       6.empty     ******\n");
	printf("*****     7.sort       0.exit      ******\n");
	printf("*****************************************\n");
}

//主函数
int main()
{
	menu();
	int* p = NULL;
	p = (int*)malloc(100000 * sizeof(int));
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen nihao ");
		return 0;
	}
	if (p == NULL)
	{
		perror("malloc ni");
		return 1;
	}
	printf("%p\n", p);
	printf("结束！\n");
	return 0;
}
