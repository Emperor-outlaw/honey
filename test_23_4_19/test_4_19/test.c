#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	//求10个整数中最大数
//	int arr[] = { 1, 2, 3, 3214, -3124, 3124, 3, 3, 0, 1234 };
//	int max = arr[0]; //默认数组中第一个数最大
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("最大的数为：%d\n", max);
//	return 0;
//}



////计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，打印出结果
//int main()
//{
//	int i = 1;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += 1.0 / i * flag;
//		flag = -flag;
//	}
//	printf("结果为：%lf\n", sum);
//	return 0;
//}

////编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int count = 0;
//	int i = 1;
//	int tmp = 0; //临时变量
//	for (i = 1; i <= 100; i++)
//	{
//		tmp = i;
//		while (tmp)
//		{
//			if (9 == tmp % 10)
//			{
//				count++;
//			}
//			tmp /= 10;
//		}
//	}
//	printf("1到100中数字9出现的次数为：%d\n", count);
//	return 0;
//}


////二分查找
////编写代码在一个整形有序数组中查找具体的某个数
////要求：找到了就打印数字所在的下标，找不到则输出：找不到。
//int main()
//{
//	////方法一:[left, right],左闭右闭区间
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int left = 0; //待查找区间的左区间下标
//	//int right = sizeof(arr) / sizeof(arr[0]) - 1; //待查找区间的右区间下标（注意要减1）
//	//int mid = 0;
//	//int k = 1; //待查找元素
//	//while (left <= right) //left小于等于right一直循环（注意有等号）
//	//{
//	//mid = left + (right - left) / 2;
//	//	if (arr[mid] == k)
//	//	{
//	//		printf("找到了，下标为：%d\n", mid);
//	//		break;
//	//	}
//	//	else if (arr[mid] < k) //查找元素只可能出现在中间元素的右区域
//	//	{
//	//		left = mid + 1; //更新区间下标
//	//	}
//	//	else if (arr[mid] > k)
//	//	{
//	//		right = mid - 1; //(注意需要减1)
//	//	}
//	//}
//	//if (left > right) //（注意是大于号）
//	//{
//	//	printf("没有找到!\n");
//	//}
//
//	//方法一:[left, right）,左闭右开区间
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]); //注意此处不需要减1
//	int mid = 0;
//	int k = 100;
//	while (left < right) //注意此处不需要减1
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] == k)
//		{
//			printf("找到了，下标为：%d\n", mid);
//			break;
//		}
//		else if (arr[mid] < k) //查找元素只可能出现在中间元素的右区域
//		{
//			left = mid + 1; //更新区间下标
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid; //(注意不需要减1)
//		}
//	}
//	if (left >= right) //（注意是大于等于号）
//	{
//		printf("没有找到!\n");
//	}
//	return 0;
//	//注：为什么没有(left, right]方式
//	//个人理解：因为每次计算中间下标都是两边之和除以2向下取整了
//}


////写一个代码打印1 - 100之间所有3的倍数的数字
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if (0 == i % 3)
//			printf("%d ", i);
//	}
//	return 0;
//}

////写代码将三个整数数按从大到小输出
//int main()
//{
//	int a = 10;
//	int b = -32;
//	int c = 20;
//	int tmp = 0;
//	if (b > a)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (c > a)
//	{
//		tmp = c;
//		c = a;
//		a = tmp;
//	}
//	if (c > b)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("三个数由小到大为：%d %d %d\n", a, b, c);
//	return 0;
//}


////写一个代码：打印100~200之间的素数
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (0 == i % j)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//打印1000年到2000年之间的闰年
//int main()
//{
//	int i = 1000;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

////给定两个数，求这两个数的最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int tmp = 0;
//	scanf("%d %d", &a, &b);
//	while (a % b != 0)
//	{
//		tmp = a % b;
//		a = b;
//		b = tmp;
//	}
//	printf("最大公约数为:>%d\n", b);
//	return 0;
//}



////猜数字游戏
//#include <time.h>
//#include <stdlib.h>
//void menu() //游戏菜单
//{
//	printf("**********************************\n");
//	printf("******       1. play         *****\n");
//	printf("******       0. exit         *****\n");
//	printf("**********************************\n");
//}
//
//void game() //玩游戏
//{
//	//1.产生要猜的随机数
//	int num = rand() % 100 + 1;
//	//2.进行猜数字
//	int tmp = 0;
//	while (1)
//	{
//		printf("请输入你要猜的数字:>");
//		scanf("%d", &tmp);
//		if (tmp > num)
//		{
//			printf("猜大了！\n");
//		}
//		else if (tmp < num)
//		{
//			printf("猜小了！\n");
//		}
//		else
//		{
//			printf("恭喜你，你猜对了！\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL)); //设置随机数生成器种子
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请输入你的选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game(); //玩游戏
//			break;
//		case 0:
//			printf("退出游戏!\n");
//			break;
//		default:
//			printf("输入错误，请重新选择!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



//描述：小乐乐最近接触了求和符号Σ，他想计算的结果。但是小乐乐很笨，请你帮助他解答。
//输入描述：输入一个正整数n(1 ≤ n ≤ 10^9)
//输出描述：输出一个值，为求和结果。
//示例1
//输入：1
//输出：1
//示例2
//输入：10
//输出：55
//解析：注意n的范围，不能用int类型，因为int类型最大为32767，而n可以取到10^9，应该用long long（10位数）;
//其次注意最后求和的结果不能放在long long变量里，会越界，因为当n取10^9已经非常接近long long的最大值了，应该将结果放在一个字符数组中，最后转换输出
//int main() {
//    long long n = 0; //注意使用long long类型，int最大取值（32767）,long long可以取到10位
//    scanf("%lld", &n);
//    if (n > 2)
//    {
//        if (n % 2 == 0)
//        {
//            printf("%lld", (1 + n) * n / 2);
//        }
//        else
//        {
//            //此处(1 + n) * (n / 2)这个n/2一定要待括号，因为我要n/2的向下取整的结果再去乘以（n+1）
//            //如果不带括号的话，它先计算（n+1）*n结果再除以2，结果就不是想要的。
//            // 第一次可能会觉得乘法和除法计算顺序是无所谓的，所以不带括号是可以的，但是顺序无所谓的前提条件是：都用他们的精确结果计算（意思是n/2结果为double类型就ok了）
//            //否则如果n不是2的整数倍，先计算(n+1)*n可能会导致结果变成2的整数倍，再除以2，最终所得到的结果就和先计算n/2（向下取整了，丢失精度了）再计算乘法结果相违背了
//            printf("%lld", ((1 + n) * (n / 2)) + n / 2 + 1);
//        }
//    }
//    else
//    {
//        printf("%d", 1);
//    }
//    return 0;
//}


////描述:KiKi想判断输入的字符是不是字母，请帮他编程实现。
////输入描述：多组输入，每一行输入一个字符。
////输出描述：针对每组输入，输出单独占一行，判断输入字符是否为字母，输出内容详见输出样例。
////示例1
////输入：
////A
////6
////输出：
////A is an alphabet.
////6 is not an alphabet.
//#include <stdio.h>
//int main() {
//    char c = 0;
//    while (scanf("%c", &c) != EOF) {
//        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
//        {
//            printf("%c is an alphabet.\n", c);
//            scanf("%c", &c); //将换行符消掉
//        }
//        else {
//            printf("%c is not an alphabet.\n", c);
//            scanf("%c", &c); //将换行符消掉
//        }
//    }
//    return 0;
//}
