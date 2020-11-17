#define _CRT_SECURE_NO_WARNINGS 1
//求一个整数的二进制存储中1的个数
#include <stdio.h>
int main()
{
	int input = 0;
	int count = 0;
	printf("请输入一个数!\n");
	scanf("%d", &input);
	//右移的位数
	int ret = sizeof(int) * 8;
	while (ret--)
	{
		if (1 == (input & 1))
			count++;
		input >>= 1;
	}
	printf("count = %d\n", count);
	return 0;
}