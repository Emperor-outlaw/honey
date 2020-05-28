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
	srand((unsigned int)time(NULL));
	//��������
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	init_board(mine, ROWS, COLS, '0');//���� ��ʼ��Ϊ��0��
	init_board(show, ROWS, COLS, '*');//������ ��ʼ��Ϊ ��*'
	//��ӡ����
	print_board(mine, ROW, COL);
	/*print_board(show, ROW, COL);*/
	//������
	set_mine(mine, ROW, COL, NUM);
	print_board(mine, ROW, COL);
	//����
	print_board(show, ROW, COL);
	fine_mine(mine, show, ROW, COL);	
}

int main()
{
	clock_t start, finish;
	double num = 0;
	int input = 0;
	do
	{
		menu();
		printf("���������ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			start = clock();
			game();
			finish = clock();
			num = (double)(finish - start);
			printf("������ʱ��time = %lf s\n", num / CLK_TCK);
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