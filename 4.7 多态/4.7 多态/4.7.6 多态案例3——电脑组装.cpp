#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//������Ҫ��ɲ���Ϊ CPU�����ڼ��㣩���Կ���������ʾ�����ڴ��������ڴ洢��

//��ÿ�������װ��������࣬�����ṩ��ͬ�ĳ���������ͬ�����������Intel���̺�Lenovo����

//�����������ṩ�õ��Թ����ĺ��������ҵ���ÿ����������Ľӿ�

//����ʱ��װ��̨��ͬ�ĵ��Խ��й���

//����CPU��
class CPU
{
public:
	virtual void calculate() = 0;
};

//�����Կ���
class VideoCard
{
public:
	virtual void display() = 0;
};

//�����ڴ���
class Memory
{
public:
	virtual void storage() = 0;
};

//������
class Computer
{
public:
	Computer(CPU *cpu, VideoCard *vdc, Memory *mey)
	{
		m_cpu = cpu;
		m_vdc = vdc;
		m_mey = mey;
	}
	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vdc != NULL)
		{
			delete m_vdc;
			m_vdc = NULL;
		}
		if (m_mey != NULL)
		{
			delete m_mey;
			m_mey = NULL;
		}
	}

	//�ṩ�����ĺ���
	void work()
	{
		//������������������ýӿ�
		m_cpu->calculate();
		m_vdc->display();
		m_mey->storage();
	}

private:
	CPU *m_cpu;
	VideoCard *m_vdc;
	Memory *m_mey;

};

//���峧��
//Inter����
class InterCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Inter��CPU��ʼ�����ˣ�" << endl;
	}
};

class InterVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Inter���Կ���ʼ��ʾ�ˣ�" << endl;
	}
};

class InterMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Inter���ڴ�����ʼ�洢�ˣ�" << endl;
	}
};


//Lenovo����
class LenovoCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Lenovo��CPU��ʼ�����ˣ�" << endl;
	}
};

class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo���Կ���ʼ��ʾ�ˣ�" << endl;
	}
};

class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo���ڴ�����ʼ�洢�ˣ�" << endl;
	}
};

void test01()
{
	//��һ̨����
	cout << "��һ̨�����" << endl;
	Computer computer1(new InterCPU, new InterVideoCard, new InterMemory);
	computer1.work();

	//�ڶ�̨�����
	cout << endl << "�ڶ�̨�����" << endl;
	Computer computer2(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2.work();

	//����̨�����
	cout << endl << "����̨�����" << endl;
	Computer computer3(new InterCPU, new LenovoVideoCard, new LenovoMemory);
	computer3.work();

}

int main()
{
	test01();
	return 0;
}