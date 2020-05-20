#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
//获取电脑的当前时间
//#include <stdio.h>
//#include <windows.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	while (1)
//	{
//		char tmpbuf[128] = { 0 };
//		time_t ltime;
//		int i = 10;
//		_strtime(tmpbuf);//获取当前操作系统的时间
//		printf("OS time:\t\t\t\t%s\n", tmpbuf);
//		_strdate(tmpbuf);//获取当前操作系统的日期
//		printf("OS date:\t\t\t\t%s\n", tmpbuf);
//		time(&ltime);
//		printf("Time in seconds since UTC 1/1/70:\t%d\n", ltime);
//		printf("UNIX time and date:\t\t\t%s", ctime(&ltime));
//		Sleep(1000);
//		system("cls");
//	}
//	return 0;
//}

////猜数字游戏
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//void menu()
//{
//	printf("************************************\n");
//	printf("****     1.paly      0.exit   ******\n");
//	printf("************************************\n");
//}
//void game()
//{
//	int num = 0;
//	int ret = rand() % 100 + 1;
//	printf("现在已经产生了一个小于100的随机数，你可以进行猜数字游戏了！\n");
//	while (1)
//	{
//		printf("请输入你要猜的数字:>");
//		scanf("%d", &num);
//		if (num > ret)
//			printf("你猜大了！\n");
//		else if (num < ret)
//			printf("你猜小了！\n");
//		else
//		{
//			printf("恭喜你猜对了！\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请输入你的选择:>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出程序！\n");
//			break;
//		default:
//			printf("输入错误，请重新选择！\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

////将数组A里面的内容和数组B里面的内容交换（数组一样大）
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr1[] = { 1, 3, 5, 7, 9 };
//	int arr2[] = { 0, 2, 4, 6, 8 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	printf("arr1中的元素是：");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\narr2中的元素是：");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//    for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	printf("\narr1中的元素是：");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\narr2中的元素是：");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

////求和1/1-1/2+1/3-1/4...-1/100 
//#include <stdio.h>
//int main()
//{
//	/*int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2)
//			sum += 1.0 / i;
//		else
//			sum += (-1)*(1.0 / i);
//	}
//	printf("sum = %lf ", sum);*/
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("sum = %lf", sum);
//	return 0;
//}

//////求1~100之间的数中9的个数 
//#include <stdio.h>
//int main()
//{
//	//对任意大的数字都可以求9的个数
//	/*int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		int num = i;
//		while (num)
//		{
//			if (num % 10 == 9)
//			{
//				count++;
//				num /= 10;
//			}
//			else
//				num /= 10;
//		}
//	}
//	printf("count = %d\n", count);*/
//	//只适用于小于100的数求9的个数
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (9 == i % 10)
//			count++;
//		if (9 == i / 10)//此处不能用else，因为用99进到if就不会进到else,从而算不上十位上的9
//			count++;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

////函数的调用，求一个数是不是素数
//#include <stdio.h>
//#include <math.h>
//int is_prime(int num)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(num); i++)
//	{
//		if (num%i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int num = 0;
//	printf("请输入一个数:>");
//	scanf("%d", &num);
//	int ret = is_prime(num);
//	if (ret)
//		printf("是素数！\n");
//	else
//		printf("不是素数！\n");
//	return 0;
//}