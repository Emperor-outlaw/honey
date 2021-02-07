#pragma once
#include <string>
using namespace std;

class Worker
{
public:
	//显示职工信息
	virtual void ShowInfo() = 0;

	//职工编号
	int m_ID;

	//职工姓名
	string m_name;

	//职工岗位
	string m_position;

	//职工职责：
	string m_duty;
};