#pragma once
#include "worker.h"

class Boss : public Worker
{
public:
	//��ͨԱ�����캯��
	Boss(int ID, string name, int duty);

	//��ʾ��ͨԱ����Ϣ
	virtual void ShowInfo();
};