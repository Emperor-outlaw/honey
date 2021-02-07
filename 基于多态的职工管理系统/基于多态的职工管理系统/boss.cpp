#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <iostream>
#include "boss.h"

//普通员工构造函数
Boss::Boss(int ID, string name, int duty)
{
	m_ID = ID;
	m_name = name;
	m_position = "老板";
	m_duty = "管理公司所有职务";
}

//显示普通员工信息
void Boss::ShowInfo()
{
	cout << "职工编号：" << m_ID
		<< "\t  职工姓名：" << m_name
		<< "\t  职工岗位：" << m_position
		<< "\t  老板职责：" << m_duty
		<< endl;
}