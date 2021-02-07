#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include "workermanager.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

int main()
{
	WorkerManager wm;
	int ret = 0;
	do
	{
		wm.ShowMenu();
		cout << "���������ѡ��: "<< endl;
		cin >> ret;
		switch (ret)
		{
		case 1:
			//����ְ����Ϣ
			wm.AddEmp();
			system("pause");
			system("cls");
			break;
		case 2:
			//��ʾְ����Ϣ
			wm.DisplayEmp();
			system("pause");
			system("cls");
			break;
		case 3:
			//�����ɾ����ְְ��
			wm.DeleteEmp();
			system("pause");
			system("cls");
			break;
		case 4:
			//�޸�ְ����Ϣ
			wm.ModifyInformation();
			system("pause");
			system("cls");
			break;
		case 5:
			//����ְ����Ϣ
			wm.SearchEmp();
			system("pause");
			system("cls");
			break;
		case 6:
			//���ձ������
			wm.Sort();
			system("pause");
			system("cls");
			break;
		case 7:
			//��������ĵ�
			wm.Empty();

			break;
		case 0:
			//�˳�ϵͳ
			cout << "�˳�ְ������ϵͳ!" << endl;
			break;
		default:
			//������Ļ����������
			cout << "������������������!" << endl;
			break;
		}
	} while (ret);

	return 0;

}
