#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <iostream>
#include "boss.h"

//��ͨԱ�����캯��
Boss::Boss(int ID, string name, int duty)
{
	m_ID = ID;
	m_name = name;
	m_position = "�ϰ�";
	m_duty = "����˾����ְ��";
}

//��ʾ��ͨԱ����Ϣ
void Boss::ShowInfo()
{
	cout << "ְ����ţ�" << m_ID
		<< "\t  ְ��������" << m_name
		<< "\t  ְ����λ��" << m_position
		<< "\t  �ϰ�ְ��" << m_duty
		<< endl;
}