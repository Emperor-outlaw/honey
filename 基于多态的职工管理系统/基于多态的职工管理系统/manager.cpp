#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <iostream>
#include "manager.h"

//��ͨԱ�����캯��
Manager::Manager(int ID, string name, int duty)
{
	m_ID = ID;
	m_name = name;
	m_position = "����";
	m_duty = "����ϰ彻�������񣬲���Ա���·�����";
}

//��ʾ��ͨԱ����Ϣ
void Manager::ShowInfo()
{
	cout << "ְ����ţ�" << m_ID
		<< "\t  ְ��������" << m_name
		<< "\t  ְ����λ��" << m_position
		<< "\t  ����ְ��" << m_duty
		<< endl;
}