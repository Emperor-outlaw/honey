#pragma once
#include "worker.h"

class Employee : public Worker
{
public:
	//��ͨԱ�����캯��
	Employee(int ID, string name, int duty);

	//��ʾ��ͨԱ����Ϣ
	virtual void ShowInfo();
};