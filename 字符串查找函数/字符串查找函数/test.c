#define _CRT_SECURE_NO_WARNINGS 1
//���ַ���1�в�����һ���ַ���2
//�ҵ��������ַ���2�����ַ����ַ���1�е�һ�γ��ֵ�λ��
//û�ҵ�������NULL
#include <stdio.h>
#include <string.h>
#define MAX 100
char * str_str(const char* str1,const char *str2)
{
	if (str2[0] == 0)
		return NULL;
	for (int i = 0; str1[i]; i++)
	{
		if (str1[i] == str2[0])
		{
			int j = 0;
			while (str1[i + j] == str2[j] && str2[j])
			{
				j++;
			}
			if (str2[j] == 0)
			{
				return &str1[i];
			}
		}
	}
	return NULL;
}
int main()
{
	char xx[5] = { 0 };
	char x[3] = { 0 };
	scanf("%s%s", xx, x);
	char* ptr = str_str(xx, x);
	if (ptr)
	{
		printf("%s\n", ptr);
	}
	else
	{
		printf("û���ҵ���\n");
	}
	return 0;
}