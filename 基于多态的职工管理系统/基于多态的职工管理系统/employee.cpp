#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <iostream>
#include "employee.h"

//��ͨԱ�����캯��
Employee::Employee(int ID, string name, int duty)
{
	m_ID = ID;
	m_name = name;
	m_position = "��ͨԱ��";
	m_duty = "��ɾ�����������";
}

//��ʾ��ͨԱ����Ϣ
void Employee::ShowInfo()
{
	cout << "ְ����ţ�" << m_ID
		<< "\t  ְ��������" << m_name
		<< "\t  ְ����λ��" << m_position
		<< "\t  Ա��ְ��" << m_duty
		<< endl;
}