#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "manager.h"
#include "student.h"
//管理者菜单函数
void mag_menu()
{
	printf("*****************************************************************\n");
	printf("*********              欢迎进入管理者主页                **********\n");
	printf("*****************************************************************\n");
	printf("*********               1.查询学生资料                 **********\n");
	printf("*********               0.返回上一层                   **********\n");
	printf("*****************************************************************\n");
}

//管理者控制平台函数
void mag_control_platform(MYSQL* pmysql, int id)
{
	int input = 0;
	do
	{
		mag_menu();
		printf("请输入你的选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			search_profile(pmysql); //直接调用student.cpp文件中的函数
			//查询学生资料
			break;
		case 0:
			printf("退出程序！\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input);
}