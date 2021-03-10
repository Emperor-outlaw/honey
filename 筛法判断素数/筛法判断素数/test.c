#define _CRT_SECURE_NO_WARNINGS 1
//筛选法输出2~n以内的素数
#include <stdio.h>
#include <string.h>
#define MAX 100
int main()
{
	char xx[MAX + 10] = { 0 };
	memset(xx, 1, sizeof(xx));
	for (int i = 2; i <= MAX ; i++)
	{
		if (xx[i])
		{
			for (int j = 2; i * j <= MAX; j++)
			{
				xx[i * j] = 0;
			}
		}
	}
	int count = 0;
	for (int i = 2; i < MAX; i++)
	{
		if (xx[i])
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("count = %d\n", count);
	return 0;
}



























