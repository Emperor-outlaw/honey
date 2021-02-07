#pragma once
#include "worker.h"

class Employee : public Worker
{
public:
	//普通员工构造函数
	Employee(int ID, string name, int duty);

	//显示普通员工信息
	virtual void ShowInfo();
};