#define _CRT_SECURE_NO_WARNINGS 1
//ʵ��һ��ͨѶ¼�����ң�ɾ������ʾ����ӣ�����,�޸ģ�
#include "contact.h"
void menu()
{
	printf("*************************************\n");
	printf("****     1.ADD       2.DELET    *****\n");
	printf("****     3.MODIFY    4.SEARCH   *****\n");
	printf("****     5.SHOW      6.SORT     *****\n");
	printf("****     0.EXIT                 *****\n");
	printf("*************************************\n");
}
int main()
{
	int input = 0;
	//����һ��ͨѶ¼
	Contact con;
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do
	{
		menu();
		printf("���������ѡ��:> ");
		scanf("%d", &input);
		switch (input)
		{
		case  ADD:
			ADD_Contact(&con);
			break;
		case DELE:
			DELE_Contact(&con);
			break;
		case SEARCH:
			SEARCH_Contact(&con);
			break;
		case MODIFY:
			MODIFY_Contact(&con);
			break;
		case SORT:
			SORT_Contact(&con);
			break;
		case SHOW:
			SHOW_Contact(&con);
			break;
		case EXIT:
			printf("�˳�ͨѶ¼��\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}