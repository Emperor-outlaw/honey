#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "manager.h"
#include "student.h"
//�����߲˵�����
void mag_menu()
{
	printf("*****************************************************************\n");
	printf("*********              ��ӭ�����������ҳ                **********\n");
	printf("*****************************************************************\n");
	printf("*********               1.��ѯѧ������                 **********\n");
	printf("*********               0.������һ��                   **********\n");
	printf("*****************************************************************\n");
}

//�����߿���ƽ̨����
void mag_control_platform(MYSQL* pmysql, int id)
{
	int input = 0;
	do
	{
		mag_menu();
		printf("���������ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			search_profile(pmysql); //ֱ�ӵ���student.cpp�ļ��еĺ���
			//��ѯѧ������
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while (input);
}