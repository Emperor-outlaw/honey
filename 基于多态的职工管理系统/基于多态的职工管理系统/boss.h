#pragma once
#include "worker.h"

class Boss : public Worker
{
public:
	//普通员工构造函数
	Boss(int ID, string name, int duty);

	//显示普通员工信息
	virtual void ShowInfo();
};