#define _CRT_SECURE_NO_WARNINGS 1
//��һ�������Ķ����ƴ洢��1�ĸ���
#include <stdio.h>
int main()
{
	int input = 0;
	int count = 0;
	printf("������һ����!\n");
	scanf("%d", &input);
	//���Ƶ�λ��
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