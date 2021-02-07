#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <iostream>
#include "manager.h"

//普通员工构造函数
Manager::Manager(int ID, string name, int duty)
{
	m_ID = ID;
	m_name = name;
	m_position = "经理";
	m_duty = "完成老板交给的任务，并给员工下发任务";
}

//显示普通员工信息
void Manager::ShowInfo()
{
	cout << "职工编号：" << m_ID
		<< "\t  职工姓名：" << m_name
		<< "\t  职工岗位：" << m_position
		<< "\t  经理职责：" << m_duty
		<< endl;
}