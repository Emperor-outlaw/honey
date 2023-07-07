#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

////5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
////A选手说：B第二，我第三
////B选手说：我第二，E第四
////C选手说：我第一，D第二
////D选手说：C最后，我第三
////E选手说：我第四，A第一
////比赛结束后，每位选手都说对了一半，请编程确定比赛的名次
//int main()
//{
//	for (int a = 1; a <= 5; a++)
//	{
//		for (int b = 1; b <= 5; b++)
//		{
//			for (int c = 1; c <= 5; c++)
//			{
//				for (int d = 1; d <= 5; d++)
//				{
//					for (int e = 1; e <= 5; e++)
//					{
//						if (((b == 2 && a != 3) || (b != 2 && a == 3)) &&
//							((b == 2 && e != 4) || (b != 2 && e == 4)) &&
//							((c == 1 && d != 2) || (c != 1 && d == 2)) &&
//							((c == 5 && d != 3) || (c != 5 && d == 3)) &&
//							((e == 4 && a != 1) || (e != 4 && a == 1)))
//						{
//							printf("选手A B C D E的排名依次为：%d %d %d %d %d\n", a, b, c, d, e);
//							return;
//						}
//					}
//				}
//			}
//		}
//	}
//}


////日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个
////以下为4个嫌疑犯的供词:
////A说：不是我
////B说：是C
////C说：是D。
////D说：C在胡说
////已知3个人说了真话，1个人说的是假话。
////现在请根据这些信息，写一个程序来确定到底谁是凶手
//int main()
//{
//	for (int i = 0; i < 4; i++)
//	{
//
//	}
//}


////在屏幕上打印杨辉三角
////   1
////  1 1
//// 1 2 1
////1 3 3 1
//// 
////1
////1 1
////1 2 1
////1 3 3 1
//int main()
//{
//	printf("请输入一个正整数：");
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10][10] = { 0 };
//	for (int i = 0; i < n; i++) // 控制行数
//	{
//		//打印每一行
//		for (int k = i; k < n - 1; k++) //打印空格
//		{
//			printf("  ");
//		}
//		for (int j = 0; j <= i; j++) //打印每一列：给数组赋值并打印
//		{
//			if (j == 0 || i == j)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//			printf("%-2d  ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//// 结点定义
//typedef struct Node {
//    char* token; // 指向条件
//    int matched; // 匹配标志，是否匹配
//    struct Node* next; // 指向下一个结点
//} Node;
//
//// 规则匹配函数:返回1说明匹配
//int match(char* pattern, char* fact) 
//{
//    if (strcmp(pattern, fact) == 0) 
//    {
//        return 1;
//    }
//    return 0;
//}
//
//// Rete算法主函数
//void reteAlgorithm(char** patterns, int numOfPatterns, char** facts, int numOfFacts) 
//{
//    // 根据条件个数创建一个数组，数组中每个元素是node*类型
//    Node** network = (Node**)malloc(sizeof(Node*) * numOfPatterns);
//
//    // 初始化网络结点
//    for (int i = 0; i < numOfPatterns; i++) // 将所有的条件加入
//    {
//        network[i] = (Node*)malloc(sizeof(Node)); // 先分配一个结点空间
//        network[i]->token = patterns[i]; 
//        network[i]->matched = 0;
//        network[i]->next = NULL;
//    }
//
//    // 进行规则匹配
//    for (int i = 0; i < numOfPatterns; i++) {
//        for (int j = 0; j < numOfFacts; j++) {
//            if (match(network[i]->token, facts[j])) {
//                network[i]->matched = 1;
//                printf("Pattern matched: %s\n", network[i]->token);
//            }
//        }
//    }
//
//    // 释放网络结点内存
//    for (int i = 0; i < numOfPatterns; i++) {
//        free(network[i]);
//    }
//}
//
//// 测试代码
//int main() {
//    char* patterns[] = { "A", "B", "C" };
//    char* facts[] = { "A", "C", "D" };
//
//    int numOfPatterns = sizeof(patterns) / sizeof(patterns[0]);
//    int numOfFacts = sizeof(facts) / sizeof(facts[0]);
//
//    reteAlgorithm(patterns, numOfPatterns, facts, numOfFacts);
//
//    return 0;
//}


//void test(int arr[100], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	test(arr, 10);
//}

////练习使用库函数qsort
//#include <stdlib.h>
//#include <string.h>
//typedef struct Student
//{
//	int age;
//	char name[10];
//}Student;
//
////对整形比较
//int cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//
////对结构体年龄比较
//int cmp_struct_age(const void* p1, const void* p2)
//{
//	return ((Student*)p1)->age - ((Student*)p2)->age;
//}
//
////对结构体姓名比较
//int cmp_struct_name(const void* p1, const void* p2)
//{
//	return strcmp(((Student*)p1)->name, ((Student*)p2)->name);
//}
//
//void test1() // 对整形进行排序
//{
//	int arr[] = { 90, -67, -3, 0, 0, -3, 98, 3, 4, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(int), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void test2() // 对结构体年龄排序
//{
//	Student s[] = { {10, "zhangsan"}, {20, "lisi"}, {90, "wangwu"}, {87, "xiaoming"}, {30, "xiaohao"} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(Student), cmp_struct_age);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("age = %d, name = %s\n", s[i].age, s[i].name);
//	}
//}
//
//void test3() // 对结构体年龄排序
//{
//	Student s[] = { {10, "zhangsan"}, {20, "lisi"}, {90, "wangwu"}, {87, "xiaoming"}, {30, "xiaohao"} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(Student), cmp_struct_name);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("age = %d, name = %s\n", s[i].age, s[i].name);
//	}
//}
//
//int main()
//{
//	printf("对整形排序：\n");
//	test1(); // 对整形进行排序
//	printf("对结构体按年龄排序：\n");
//	test2(); // 对结构体年龄排序
//	printf("对结构体按姓名排序：\n");
//	test3(); // 对结构体姓名排序
//	return 0;
//}

//#include <stdlib.h>
//#include <string.h>
//
////自行实现库函数qsqrt
//typedef struct Student
//{
//	int age;
//	char name[10];
//}Student;
//
////对整形比较
//int cmp_int(const void *p1, const void *p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//
////对结构体年龄比较
//int cmp_struct_age(const void *p1, const void *p2)
//{
//	return ((Student*)p1)->age - ((Student*)p2)->age;
//}
//
////对结构体姓名比较
//int cmp_struct_name(const void* p1, const void* p2)
//{
//	return strcmp(((Student*)p1)->name, ((Student*)p2)->name);
//}
//
////对任意类型数据排序：采用快排思想:从小到大排序
//void my_qsort(void* base, int num, int size, int(*cmp)(void*, void*))
//{
//	char* ptmp = (char*)malloc(size); //开辟一个size大小的空间，用来保存枢轴
//	if (ptmp != NULL)
//	{
//		memcpy(ptmp, (char*)base, size); //保存枢轴
//	}
//	else
//	{
//		printf("开辟空间失败！\n");
//		return;
//	}
//	int left = 0;
//	int right = num - 1;
//	while (left < right)
//	{
//		while (left < right && cmp(ptmp, (char*)base + size * right) <= 0) //从后往前找小于枢轴的元素
//		{
//			right--;
//		}
//		memcpy((char*)base + size * left, (char*)base + size * right, size); //将找到的元素复制到前面
//		while (left < right && cmp(ptmp, (char*)base + size * left) >= 0) //从前往后找大于枢轴的元素
//		{
//			left++;
//		}
//		memcpy((char*)base + size * right, (char*)base + size * left, size); //将找到的元素往复制到后面
//	}
//	memcpy((char*)base + size * left, ptmp, size); //枢轴归位
//
//	//判断是否还要递归
//	if (left > 1) // 第一次写的时候没有想好递归的条件
//	{
//		my_qsort((char*)base, left, size, cmp); //对左子表排序
//	}
//	if (num - 1 - left > 1) // 第一次写的时候写错了排序数组的起始位置，left没有加1
//	{
//		my_qsort((char*)base + size * (1 + left), num - 1 - left, size, cmp); //对右子表排序
//	}
//}
//
//void test1() // 对整形进行排序
//{
//	int arr[] = {90, -67, -3, 0, 0, -3, 98, 3, 4, 6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_qsort(arr, sz, sizeof(int), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void test2() // 对结构体年龄排序
//{
//	Student s[] = { {10, "zhangsan"}, {20, "lisi"}, {90, "wangwu"}, {87, "xiaoming"}, {30, "xiaohao"} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	my_qsort(s, sz, sizeof(Student), cmp_struct_age);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("age = %d, name = %s\n", s[i].age, s[i].name);
//	}
//}
//
//void test3() // 对结构体年龄排序
//{
//	Student s[] = { {10, "zhangsan"}, {20, "lisi"}, {90, "wangwu"}, {87, "xiaoming"}, {30, "xiaohao"} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	my_qsort(s, sz, sizeof(Student), cmp_struct_name);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("age = %d, name = %s\n", s[i].age, s[i].name);
//	}
//}
//
//int main()
//{
//	printf("对整形排序：\n");
//	test1(); // 对整形进行排序
//	printf("对结构体按年龄排序：\n");
//	test2(); // 对结构体年龄排序
//	printf("对结构体按姓名排序：\n");
//	test3(); // 对结构体姓名排序
//	return 0;
//}




////杨氏矩阵
////有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在
////要求：时间复杂度小于O(N)
//int main()
//{
//	int a[4][5] = { {1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15}, {16,17,18,19,20} };
//	printf("请输入你要查找的数：");
//	int input = 0;
//	scanf("%d", &input);
//	int i = 0, j = 0;
//	for (i = 0; i < 4; i++)
//	{
//		if (input <= a[i][4])
//			break;
//	}
//	for (j = 0; i < 4 && j < 5; j++)
//	{
//		if (input == a[i][j])
//		{
//			printf("找到了，下标为：%d, %d\n", i, j);
//			return 0;
//		}
//	}
//	printf("没有找到!\n");
//}


////字符串左旋
////实现一个函数，可以左旋字符串中的k个字符
////例如：
////ABCD左旋一个字符得到BCDA
////ABCD左旋两个字符得到CDAB、
////思路：将带旋转的字符串复制一份，拼接在后面，旋转几个就直接从第几个位置行取字符串个长度就是所得旋转后的字符串
//#include <string.h>
//int main()
//{
//	char str[100] = { 0 };
//	int input = 0;
//	printf("请输入一个字符串：");
//	scanf("%s", str);
//	printf("请输入你要旋转多少个字符：");
//	scanf("%d", &input);
//
//	int len = strlen(str); // 求字符串的长度
//	strncpy(str + len, str, len); //给原来的字符串后面再拼接一份字符串，拷贝结束后会自动添加字符串结束标志
//	int k = input % len; //处理旋转的字符个数
//	for (int i = 0; i < len; i++) //输出旋转后的字符串
//	{
//		printf("%c", str[k + i]);
//	}
//}



//字符串旋转结果
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
//思路：如果两个字符串长度不相等，则一定不会是旋转之后得到的；相等情况下，将一个字符串复制一份拼接在其后面，然后在拼接后的字符串里，找另一个字符串
#include <string.h>
int main()
{
	char str1[100] = { 0 };
	char str2[100] = { 0 };
	printf("请输入第一个字符串：");
	scanf("%s", str1);
	printf("请输入第二个字符串：");
	scanf("%s", str2);

	int len1 = strlen(str1); // 求字符串1的长度
	int len2 = strlen(str2); // 求字符串2的长度
	if (len1 != len2)
	{
		printf("不能旋转得到！\n");
		return 0;
	}

	strncpy(str1 + len1, str1, len1); //给原来的字符串后面再拼接一份字符串
	//在拼接后的字符串中查找另外一个字符串
	for (int i = 0; i <= len1; i++)
	{
		if (strncmp(str1 + i, str2, len1) == 0)
		{
			printf("可以旋转得到！\n");
			return 0;
		}
	}
	printf("不能旋转得到！\n");
	return 0;
}