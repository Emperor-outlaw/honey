#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组
////方法一
//void PrintArryOne(int* parr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(parr + i));
//	}
//}
////方法二
//void PrintArryTwo(int* parr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *parr++);
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("方法一:");
//	PrintArryOne(arr, sz);
//	printf("\n方法二:");
//	PrintArryTwo(arr, sz);
//	return 0;
//}


////写一个函数，可以逆序一个字符串的内容
//#include <string.h>
//
////非递归
//void ReverseStrOne(char* str)
//{
//	int len = strlen(str);
//	int i = 0;
//	for (i = 0; i < len / 2; i++) //以中间元素为中点，依次交换数组中的前后对应元素
//	{
//		char tmp = str[i];
//		str[i] = str[len - i - 1];
//		str[len - i - 1] = tmp;
//	}
//}
//
////递归（方法一）
////思路：如果第一个字符不为'\0'，先逆序第一个字符后面的字符串，结束之后再将第一个字符放到上一步逆序字符串的后面，对于该逆序字符串采用同样的方式，依次往下递归，如果第一个字符为'\0'，则终止递归
//// 例如：（下面的例子并没有把每一步递归列出来，而是列出了递归的整体过程）
////abcdef //逆序该字符串
////afedcb //a不为空，逆序后面字符串（后面的字符串就是采用递归逆序得到的）
////fedcba //再将a放到上一步逆序字符串的后面
//void ReverseStrTwo(char* str)
//{
//	if (*str) //第一个字符串不空
//	{
//		ReverseStrTwo(str + 1); //逆序第一个字符后面的字符串
//		//将第一个字符放在上一步逆序的字符串后面（具体操作就是：将上一步逆序的字符串整体往前移动一位，再将第一个字符放到最后面）
//		char tmp = *str; //先保存第一个字符，以免被覆盖
//		char* p = str + 1; //操作指针
//		while (*p) //整体前移字符串，遇到'\0'停止
//		{
//			*(p - 1) = *p;
//			p++;
//		}
//		*(p - 1) = tmp; //第一个元素放到最后面
//	}
//}
//
////递归（方法二）
////思路:先将第一个字符和最后一个字符中间的字符串逆序，然后再将第一个字符和最后一个字符逆序，中间的字符串继续采用相同的方式逆序，
////     这样一直递归下去，直到中间的字符串为空或者只剩一个字符的时候终止递归
//// 例如：（下面的例子并没有把每一步递归列出来，而是列出了递归的整体过程）
//// abcdef
//// aedcbf //先将中间字符串逆序（中间字符串就是采用递归逆序得到的）
//// fedcba //再将前后两个字符逆序
////问题来了：
////1、当我需要逆序中间字符串的时候，我要怎么确定中间字符串的区间呢（每次往下递归的时候，区间都是不一样的）？
////答：我可以采用两个指针分别指向字符串两端，通过这种方式确定区间当然可以（见下面函数ReverseStrThree），还有别的方法没？
////当然有,我们以abcdef为例子思考，刚一开始是字符串abcdef，先递归逆序bcde，再将a和f互换，
////       而字符串bcde的左区间可以通过指向字符串abcdef首地址的指针加1就可以得到（指向首地址的指针一开始就知道，非常方便），那右区间呢？
////       如果f是'\0'的话，那么右区间就不用去找了，因为遇到'\0'停止就行了，就相当于对bcde逆序，那我们该怎样处理f呢？
////       在逆序bcde前先将f放到a的位置，为了避免a被覆盖，所以先将a保存起来，再将f之前的位置赋值成'\0'，接着就是递归逆序bcde，递归结束后，最后将a放到f之前的位置
////       字符串深层次的递归也是采用同样的方式，直到字符串为空或者仅剩余1个字符就终止递归(见下面函数ReverseStrFour)
//void ReverseStrThree(char* str, int left, int right) //left和right看作指向字符串两端的指针
//{
//	if (left < right) //left小于right才需要递归（也就是字符串至少还有两个字符）
//	{
//		ReverseStrThree(str, left + 1, right - 1); //逆序第一个字符和最后一个字符中间的字符串
//		//逆序第一个和最后一个字符
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//	}
//}
//
//void ReverseStrFour(char* str)
//{
//	int len = strlen(str);
//	if (len >= 2) //字符串至少应有两个字符才能递归
//	{
//		char tmp = str[0]; //保存第一个字符
//		str[0] = str[len - 1]; //将最后一个字符移动到前面
//		str[len - 1] = '\0'; //将最后一个字符赋值为'\0'
//		ReverseStrFour(str + 1); //逆序中间的字符串
//		str[len - 1] = tmp; //将第一个字符归位
//	}
//}
//
//int main()
//{
//	char str[10001] = { 0 };
//	//《第一步：获取字符串》
//	//scanf("%s", str); //注意:通过这种方式获取字符串，遇到空格或者回车就结束（不符合题意）(scanf会自动给字符串后面添加一个\0)
//	int i = 0;
//	char c = 0;
//	while (scanf("%c", &c)) //注意：这里scanf也可以换成：c = getchar()
//	{
//		if (c != '\n')
//			str[i++] = c;
//		else
//			break;
//	}
//
//	//《第二步：逆序字符串》
//	//非递归
//	ReverseStrOne(str);
//	printf("非递归反转字符串:%s\n", str);
//
//	//递归(两种)
//	ReverseStrTwo(str);
//	printf("递归（一）反转字符串:%s\n", str);
//	int len = strlen(str);
//	ReverseStrThree(str, 0, len - 1);
//	printf("递归（二）反转字符串:%s\n", str);
//	ReverseStrFour(str);
//	printf("递归（三）反转字符串:%s\n", str);
//	return 0;
//}


////求出0～100000之间的所有“水仙花数”并输出。
////“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
////如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//#include <math.h>
//int IsNarNum(int n)
//{
//	//printf("%d\n", n);
//	int count = 0;
//	int tmp = n;
//	long long sum = 0;
//	while (tmp) //计算有多少位
//	{
//		count++;
//		tmp /= 10;
//	}
//	tmp = n;
//	while (tmp)
//	{
//		sum += (long long)pow(tmp % 10, count);
//		tmp /= 10;
//	}
//	if (sum == n)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100000; i++)
//	{
//		if (1 == IsNarNum(i))
//		{
//			printf("%d ", i); //输出
//			count++; //计数器加1
//			if (count != 0 && count % 10 == 0) //为了好看，10个一换行
//				printf("\n");
//		}
//	}
//	printf("总共有：%d\n", count);
//	return 0;
//}

////求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
////例如：2 + 22 + 222 + 2222 + 22222
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int tmp = 0;
//	printf("请输入一个正整数:>");
//	scanf("%d", &n);
//	for (i = 0; i < 5; i++)
//	{
//		tmp = tmp * 10 + 2; //计算每一项
//		sum += tmp; //求和
//	}
//	printf("Sn = %d\n", sum);
//	
//}

////打印菱形
//void PrintRhombus(int n)
//{
//	int i = 0;
//	int j = 0;
//	//第一步：先打印菱形上半部分
//	for (i = 0; i < n; i++)
//	{
//		//打印一行
//		for(j = 0; j < n - 1 - i; j++) //打印空格
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++) //打印*
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//第二步：打印菱形下半部分
//	for (i = 0; i < n - 1; i++)
//	{
//		//打印一行
//		for (j = 0; j <= i; j++) //打印空格
//		{
//			printf(" ");
//		}
//		for (j = 0; j < (n - 1 - i) * 2 - 1; j++) //打印*
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入菱形的边长:>");
//	scanf("%d", &n);
//	PrintRhombus(n);
//	return 0;
//}

int main()
{
	int n = 5;
	int i = 0;
	int arr[5] = { 0 };
	while (scanf("%d", arr + i) == 1)
	{
		i++;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}