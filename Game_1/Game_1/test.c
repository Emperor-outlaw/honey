#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h" 
void menu()
{
	printf("*****************\n");
	printf("**** 1��Play ****\n");
	printf("**** 0��Exit ****\n");
	printf("*****************\n");
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ����Ҫ�����Ϸ:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
