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
	int pos = 0;
	int input = 0;
	ElemType elem = 0;
	Status s = 0;
	Ptr Header = NULL;//����һ��ָ��ͷ����ָ��
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	List_Create(&Header, arr, sz);//��ʼ�������Ա�
	do
	{
		menu();
		printf("���������ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			List_Clear(&Header);
			break;
		case 2:
			printf("���Ա�Ĵ�С��:>%d\n", List_size(&Header));
			break;
		case 3:
			printf("��������Ҫ������һ��λ�õ�Ԫ��:>");
			scanf("%d", &pos);
			s = List_Retrival(&Header, pos, &elem);
			if (s == success)
			{
				printf("���ҳɹ���\n");
				printf("%dλ�õ�Ԫ����%d\n", pos, elem);
			}
			else
				printf("����ʧ�ܣ�\n");
			break;
		case 4:
			printf("��������Ҫ���ҵ�Ԫ��:>");
			scanf("%d", &elem);
			s = List_Locate(&Header, elem, &pos);
			if (s == success)
			{
				printf("���ҳɹ���\n");
				printf("%dԪ�����ڵ�λ����%d\n", elem, pos);
			}
			else
				printf("����ʧ�ܣ�\n");
			break;
		case 5:
			printf("��������Ҫ����Ԫ�ص�λ�úͲ���Ԫ�ص�ֵ:>");
			scanf("%d %d", &pos, &elem);
			s = List_insert(&Header, pos, elem);
			if (s == success)
				printf("����ɹ���\n");
			else
				printf("����ʧ�ܣ�\n");
			break;
		case 6:
			if (List_Empty(&Header))
			{
				printf("���Ա�Ϊ�գ��޷�ɾ����\n");
				break;
			}
			printf("��������Ҫɾ����һ��λ�õ�Ԫ��:>");
			scanf("%d", &pos);
			s = List_delete(&Header, pos);
			if (s == success)
				printf("ɾ���ɹ���\n");
			else
				printf("ɾ��ʧ�ܣ�\n");
			break;
		case 7:
			printf("��������Ҫ����һ��λ��Ԫ�ص�ǰ��:>");
			scanf("%d", &pos);
			s = List_prior(&Header, pos, &elem);
			if (s == success)
				printf("%dλ�õ�ǰ����%d\n", pos, elem);
			else
				printf("����ʧ�ܣ�\n");
			break;
		case 8:
			printf("��������Ҫ����һ��λ��Ԫ�ص�ǰ��:>");
			scanf("%d", &pos);
			s = List_Next(&Header, pos, &elem);
			if (s == success)
				printf("%dλ�õĺ����%d\n", pos, elem);
			else
				printf("����ʧ�ܣ�\n");
			break;
		case 9:
			List_Print(&Header);
			break;
		case 0:
			List_Destory(&Header);
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
			break;
		}
	} while (input);
	return 0;		
}