#define _CRT_SECURE_NO_WARNINGS 1
#include "sweep.h"
void menu()
{
	printf("***********************************\n");
	printf("***           1.paly            ***\n");
	printf("***           0.exit            ***\n");
	printf("***********************************\n");
}
void game()
{

}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("���������ѡ��:>");
		scnaf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("�������������ѡ��!\n");
			break;
		}
	} while (input);
	return 0;
}