#pragma once
#include <string>
using namespace std;

class Worker
{
public:
	//��ʾְ����Ϣ
	virtual void ShowInfo() = 0;

	//ְ�����
	int m_ID;

	//ְ������
	string m_name;

	//ְ����λ
	string m_position;

	//ְ��ְ��
	string m_duty;
};