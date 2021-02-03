#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//电脑主要组成部件为 CPU（用于计算），显卡（用于显示），内存条（用于存储）

//将每个零件封装出抽象基类，并且提供不同的厂商生产不同的零件，例如Intel厂商和Lenovo厂商

//创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口

//测试时组装三台不同的电脑进行工作

//抽象CPU类
class CPU
{
public:
	virtual void calculate() = 0;
};

//抽象显卡类
class VideoCard
{
public:
	virtual void display() = 0;
};

//抽象内存条
class Memory
{
public:
	virtual void storage() = 0;
};

//电脑类
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

	//提供工作的函数
	void work()
	{
		//让零件工作起来，调用接口
		m_cpu->calculate();
		m_vdc->display();
		m_mey->storage();
	}

private:
	CPU *m_cpu;
	VideoCard *m_vdc;
	Memory *m_mey;

};

//具体厂商
//Inter厂商
class InterCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Inter的CPU开始计算了！" << endl;
	}
};

class InterVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Inter的显卡开始显示了！" << endl;
	}
};

class InterMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Inter的内存条开始存储了！" << endl;
	}
};


//Lenovo厂商
class LenovoCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Lenovo的CPU开始计算了！" << endl;
	}
};

class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo的显卡开始显示了！" << endl;
	}
};

class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo的内存条开始存储了！" << endl;
	}
};

void test01()
{
	//第一台电脑
	cout << "第一台计算机" << endl;
	Computer computer1(new InterCPU, new InterVideoCard, new InterMemory);
	computer1.work();

	//第二台计算机
	cout << endl << "第二台计算机" << endl;
	Computer computer2(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2.work();

	//第三台计算机
	cout << endl << "第三台计算机" << endl;
	Computer computer3(new InterCPU, new LenovoVideoCard, new LenovoMemory);
	computer3.work();

}

int main()
{
	test01();
	return 0;
}