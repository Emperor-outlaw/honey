#define _CRT_SECURE_NO_WARNINGS 1
#include "Sqlist.h"
void menu()
{
	printf("0.�˳�����\n");
	printf("1.������Ա�\n");
	printf("2.�����Ա�Ĵ�С\n");
	printf("3.��λ�ò������Ա��е�Ԫ��\n");
	printf("4.��ֵ�������Ա��е�Ԫ��\n");
	printf("5.�����Ա���ĳ��λ�ò���ĳ��Ԫ��\n");
	printf("6.ɾ�����Ա��е�ĳ��λ�õ�Ԫ��\n");
	printf("7.�������Ա���ĳ��λ��Ԫ�ص�ǰ��\n");
	printf("8.�������Ա���ĳ��λ��Ԫ�صĺ��\n");
	printf("9.��ӡ���Ա�\n");
}
int main()
{
	int i = 0;
	int opt = 0;
	int pos = 0;
	ElemType elem = 0;
	Status s = 0;
	int len = 0;
	Sqlist list;//����һ�����Ա�
	SqlistPtr L = &list;
	List_init(L);//��ʼ�����Ա�
	do
	{
		menu();
		printf("���������ѡ��:>");
		scanf("%d", &opt);
		switch (opt)
		{
		case 1:
			List_Clear(L);
			break;
		case 2:
			len = List_size(L);
			printf("���Ա�Ĵ�С��:>%d\n", len);
			break;
		case 3:
			printf("��������Ҫ������һ��λ�õ�Ԫ��:>");
			scanf("%d", &pos);
			s = List_Retrival(L, pos, &elem);
			if (s == success)
			{
				printf("���ҳɹ���");
				printf("%dλ�õ�Ԫ����%d\n", pos, elem);
			}
			else
				printf("����ʧ�ܣ�\n");
			break;
		case 4:
			printf("��������Ҫ���ҵ�Ԫ��:>");
			scanf("%d", &elem);
			s = List_Locate(L, elem, &pos);
			if (s == success)
			{
				printf("���ҳɹ���\n");
				printf("%dԪ�����ڵ�λ����%d\n", elem, pos);
			}
			else
				printf("����ʧ�ܣ�\n");
			break;
		case 5:
			/*printf("��������Ҫ����Ԫ�ص�λ�úͲ���Ԫ�ص�ֵ:>");
			scanf("%d %d", &pos, &elem);*/
		
			for (i = 1; i <= 20; i++)
			{
				s = List_insert(L, i, i);
			}
			if (s == success)
				printf("����ɹ���\n");
			else
				printf("����ʧ�ܣ�\n");
			break;
		case 6:
			len = List_Empty(L);
			if (0 == len)
			{
				printf("���Ա�Ϊ�գ��޷�ɾ����\n");
				break;
			}
			printf("��������Ҫɾ����һ��λ�õ�Ԫ��:>");
			scanf("%d", &pos);
			s = List_delete(L, pos);
			if (s = success)
				printf("ɾ���ɹ���\n");
			else
				printf("ɾ��ʧ�ܣ�\n");
			break;
		case 7:
			printf("��������Ҫ����һ��λ��Ԫ�ص�ǰ��:>");
			scanf("%d", &pos);
			s = List_prior(L, pos, &elem);
			if (s = success)
				printf("%dλ�õ�ǰ����%d\n", pos, elem);
			else
				printf("����ʧ�ܣ�\n");
			break;
		case 8:
			printf("��������Ҫ����һ��λ��Ԫ�ص�ǰ��:>");
			scanf("%d", &pos);
			s = List_Next(L, pos, &elem);
			if (s = success)
				printf("%dλ�õĺ����%d\n", pos, elem);
			else
				printf("����ʧ�ܣ�\n");
			break;
		case 9:
			List_Print(L);
			break;
		case 0:
			List_Destory(L);
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
			break;
		}
	}
	while (opt);
	return 0;
}