#define _CRT_SECURE_NO_WARNINGS

//ʵ��һ��ͨѶ¼
//ͨѶ¼���Դ洢������Ϣ������������ÿ���˵���Ϣ�������������Ա����䡢�绰��סַ
//�ṩ������
//1�������ϵ����Ϣ
//2��ɾ��ָ����ϵ����Ϣ
//3������ָ����ϵ����Ϣ
//4���޸�ָ����ϵ����Ϣ
//5����ʾ������ϵ����Ϣ
//6�����������ϵ��
//7������������������ϵ��

#include <stdio.h>
#include <stdlib.h>

//���˵�����
void menu()
{
	printf("*****************************************\n");
	printf("*****     1.add        2.delete    ******\n");
	printf("*****     3.search     4.modify    ******\n");
	printf("*****     5.show       6.empty     ******\n");
	printf("*****     7.sort       0.exit      ******\n");
	printf("*****************************************\n");
}

//������
int main()
{
	menu();
	int* p = NULL;
	p = (int*)malloc(100000 * sizeof(int));
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen nihao ");
		return 0;
	}
	if (p == NULL)
	{
		perror("malloc ni");
		return 1;
	}
	printf("%p\n", p);
	printf("������\n");
	return 0;
}
