#pragma once
#include <iostream>
#include "worker.h"
using namespace std;
class WorkerManager
{
public:
	//���캯��
	WorkerManager();

	//��ʾ�˵�
	void ShowMenu();

	//���ְ��
	void AddEmp();

	//��ʾְ��
	void DisplayEmp();

	//��������ӵ��ļ���
	void Save();

	//�ļ��Ƿ�Ϊ�ձ�־
	bool m_FileIsEmpty;

	//��ȡ�ļ���ְ������Ŀ
	int GetFileNum();

	//��ʼ��ְ������
	void InitEmpArr();

	//������ж�Ա���Ƿ����(���ڷ����������е��±�)
	int IsExit(int ret);

	//��Ա�����ɾ��Ա��
	void DeleteEmp();

	//�޸�ְ����Ϣ
	void ModifyInformation();

	//����ְ����Ϣ
	void SearchEmp();

	//���ձ������
	void Sort();

	//����ĵ�
	void Empty();

	//��������
	~WorkerManager();

	//��¼ְ��������
	int m_AllNum;

	//ְ�������ָ��
	Worker **m_EmpArr;
};