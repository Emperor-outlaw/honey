#pragma once
#include "worker.h"

class Manager : public Worker
{
public:
	//��ͨԱ�����캯��
	Manager(int ID, string name, int duty);

	//��ʾ��ͨԱ����Ϣ
	virtual void ShowInfo();

};