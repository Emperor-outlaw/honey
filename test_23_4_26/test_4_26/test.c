#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//采用自己写的一个库（加、减、乘、除），来计算加、减、乘、除
#pragma comment(lib, "calculator.lib")

//打印菜单函数
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
		printf("请输入你的选择:>");
		scanf("%d", &input);
		printf("请输入两个数:>");
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
			printf("退出程序！\n");
			break;
		default:
			printf("输入错误，请从新输入！\n");
			break;
		}
	} while (input);
	return 0;
}