#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <iostream>
#include "employee.h"

//普通员工构造函数
Employee::Employee(int ID, string name, int duty)
{
	m_ID = ID;
	m_name = name;
	m_position = "普通员工";
	m_duty = "完成经理交给的任务";
}

//显示普通员工信息
void Employee::ShowInfo()
{
	cout << "职工编号：" << m_ID
		<< "\t  职工姓名：" << m_name
		<< "\t  职工岗位：" << m_position
		<< "\t  员工职责：" << m_duty
		<< endl;
}