#define _CRT_SECURE_NO_WARNINGS 1
////演示多个字符从两边移动，向中间移动
////"welcome to bit!!!"
////"w###############!"
////"we#############!!"
////..................
////"welcome to bit!!!"
//#include <stdio.h>
//#include <windows.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	char arr[] = "In the future,my name is Changan,and you call it your hometown,because Changan returns to your hometown,and there is Changan in your hometown.";
//	char arr1[] = "                                                                                                                                               ";
//	int len = strlen(arr);
//	int left = 0;
//	int right = len - 1;
//	int i = 0;
//	while (left <= right)
//	{
//		arr1[left] = arr[left];
//		arr1[right] = arr[right];
//		printf("%s\n", arr1);
//		left++;
//		right--;
//		//Sleep(1000);
//		system("cls");
//	}
//	system("pause");
//	return 0;
//}

////编写代码实现, 模拟用户登陆情景, 并且只能登陆三次, 如果三次均输入错误, 则退出程序.
//#include <stdio.h>
//#include <string.h>
//#include <Windows.h>
//int main()
//{
//	char password[20] = { 0 };
//	printf("你只有三次机会输入密码！\n");
//	int n = 3;
//	while (n--)
//	{
//		printf("第%d次输入密码,请输入密码:>\n", 3 - n);
//		scanf("%s", password);
//		if (0 == strcmp(password, "wanghailou"))
//		{
//			printf("登录成功！\n");
//			Sleep(1000);
//			printf("I LOVE YOU\n");
//			break;
//		}
//		else
//			if (n != 0)
//			    printf("输入错误，请重新输入！\n");
//	}
//	if (n == -1)
//		printf("恭喜你，三次密码全部输入错误！\n");
//	system("pause");
//	return 0;
//}

////功能：输入密码正确后展示一段效果
//#include <stdio.h>
//#include <string.h>
//#include <Windows.h>
//#include <stdlib.h>
//int main()
//{
//	int n = 3;//允许输入密码的次数
//	char password[20] = { 0 };
//	char arr[] = " I LOVE YOU ";
//	char arr1[] = "            ";
//	int len = strlen(arr);
//	printf("你只有三次机会输入密码！\n");
//	while (n--)
//	{
//		printf("第%d次输入密码，请输入密码:>", 3 - n);
//		scanf("%s", password);
//		if (0 == strcmp(password, "I LOVE YOU"))
//		{
//			printf("恭喜你输入密码正确，请等待3秒钟！\n");
//			Sleep(3000);
//			int left = 0;
//			int right = len - 1;
//			while (left <= right)
//			{
//				arr1[left] = arr[left];
//				arr1[right] = arr[right];
//				printf("%s", arr1);
//				Sleep(1000);
//				system("cls");
//				left++;
//				right--;
//			}
//			printf("SO , DO YOU LOVE ME?\n");
//			system("pause");
//			return 0;
//		}
//		else
//		{
//			printf("密码输入错误，请重新输入！\n");
//		}
//	}
//	printf("恭喜你三次密码全部输入错误！\n");
//	return 0;
//}
//关机程序
//#include <stdio.h>
//#include <string.h>
//#include <Windows.h>
//int main()
//{
//	char arr[20] = { 0 };
//	system("shutdown -s -t 60");//关机命令
//	printf("请注意你的电脑将要在60秒内关机，如果你想要解除关机，就请输入：我是猪\n");
//	while (1)
//	{
//		scanf("%s", arr);
//		if (strcmp(arr, "我是猪")==0)
//		{
//			system("shutdown -a");//解除关机命令
//			break;
//		}
//		else
//			printf("输入错误，请重新输入！\n");
//	}
//	printf("恭喜你成功解除关机指令！\n");
//	return 0;
//}