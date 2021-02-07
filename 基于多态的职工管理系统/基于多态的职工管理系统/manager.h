#pragma once
#include "worker.h"

class Manager : public Worker
{
public:
	//普通员工构造函数
	Manager(int ID, string name, int duty);

	//显示普通员工信息
	virtual void ShowInfo();

};