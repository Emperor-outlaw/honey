

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

#include "contact.h"

//���˵�����
void menu()
{
	printf("*****************************************\n");
	printf("*****         ��ӭʹ��ͨѶ¼       ******\n");
	printf("*****     1.add        2.delete    ******\n");
	printf("*****     3.search     4.modify    ******\n");
	printf("*****     5.show       6.empty     ******\n");
	printf("*****     7.sort       0.exit      ******\n");
	printf("*****************************************\n");
}

//������
int main()
{
	int input = 0;
	//���ú���ָ���������ʽ����switch��case��䣬�����Ƴ���������߼�
	//����һ������ָ�����飬�����е�ÿ��Ԫ���Ǻ���ָ�룬�������β���Contact*������ֵ��void
	void (*arr[8]) (Contact*) = { NULL, addContact, delContact, searchContact, modifyContact, showContact, emptyContact, sortContact };

	Contact con; //����һ��ͨѶ¼
	initContact(&con); //��ʼ��ͨѶ¼
	do
	{
		menu();
		printf("���������ѡ��>");
		scanf("%d", &input);
		if (input > 0 && input < 8)
		{
			arr[input](&con);
		}
		else if (input == 0)
		{
			printf("�˳�����\n");
			break;
		}
		else
		{
			printf("����������������룡\n");
		}
	} while (input);
	return 0;
}
