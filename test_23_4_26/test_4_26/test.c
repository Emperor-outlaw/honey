#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�����Լ�д��һ���⣨�ӡ������ˡ�������������ӡ������ˡ���
#pragma comment(lib, "calculator.lib")

//��ӡ�˵�����
void menu()
{
	printf("**************************************\n");
	printf("******     1.add        2.sub   ******\n");
	printf("******     3.mul        4.div   ******\n");
	printf("******     0.exit               ******\n");
	printf("**************************************\n");
}

int main()
{
	double a = 0;
	double b = 0;
	int input = 0;
	do
	{
		menu();
		printf("���������ѡ��:>");
		scanf("%d", &input);
		printf("������������:>");
		scanf("%lf %lf", &a, &b);
		switch (input)
		{
		case 1:
			printf("%lf\n", a + b);
			break;
		case 2:
			printf("%lf\n", a - b);
			break;
		case 3:
			printf("%lf\n", a * b);
			break;
		case 4:
			printf("%lf\n", a / b);
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("���������������룡\n");
			break;
		}
	} while (input);
	return 0;
}