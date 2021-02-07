#define _CRT_SECURE_NO_WARNINGS 1
#include "workermanager.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#include <fstream>
#define FILENAME "workerinformation.txt"
//构造函数
WorkerManager::WorkerManager()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	//1、第一次使用该系统，文件还没有被创建
	if (!ifs.is_open())
	{
		//初始换职工的人数
		m_AllNum = 0;
		//初始化职工数组指针
		m_EmpArr = NULL;
		return;
	}

	//2、文件存在，但是文件为空
	char ch = 0;
	ifs >> ch;
	if (ifs.eof())
	{
		//初始换职工的人数
		m_AllNum = 0;
		//初始化职工数组指针
		m_EmpArr = NULL;
		//初始换文件是否为空标志
		m_FileIsEmpty = false;
		ifs.close();
	}
	else
	{
		//3、文件存在，并且有数据不为空
		//初始化职工人数（获取文件中的职工人数赋值给它）
		m_AllNum = GetFileNum();

		//初始化职工数组指针
		//1、开辟空间
		m_EmpArr = new Worker*[m_AllNum];
		//2、将文件中的职工保存到数组中
		InitEmpArr();

		//初始换文件是否为空标志
		m_FileIsEmpty = false;
		ifs.close();
	}

}

//显示菜单
void WorkerManager::ShowMenu()
{
	cout << "********欢迎来到职工管理系统********" << endl;
	cout << "********  0、推出管理系统  *********" << endl;
	cout << "********  1、增加职工信息  ********" << endl;
	cout << "********  2、显示职工信息  ********" << endl;
	cout << "********  3、删除离职职工  ********" << endl;
	cout << "********  4、修改职工信息  ********" << endl;
	cout << "********  5、查找职工信息  ********" << endl;
	cout << "********  6、按照编号排序  ********" << endl;
	cout << "********  7、清空所有文档  ********" << endl;

}

//添加职工
void WorkerManager::AddEmp()
{
	int AddNum = 0;
	cout << "请输入你要添加职工的数量：" << endl;
	while (1)
	{
		cin >> AddNum;
		if (AddNum > 0)
		{
			//计算新的数组大小
			int NewNum = AddNum + m_AllNum;

			//开辟新的空间大小
			Worker **NewSpace = new Worker*[NewNum];

			//判断原来数组是否有职工
			if (m_EmpArr != NULL)
			{
				//原来数组有职工，并且将原来数组里的职工保存到新开辟的空间里
				for (int i = 0; i < m_AllNum; i++)
				{
					NewSpace[i] = m_EmpArr[i];
				}
			}
			//添加新数据
			for (int i = 0; i < AddNum; i++)
			{
				int id = 0;
				string name = { 0 };
				int duty = 0;
				cout << "请输入第 " << i + 1 << "个职工的信息：" << endl;
				cout << "编号：";
				cin >> id;
				cout << "姓名：";
				cin >> name;
				cout << "请选择岗位：" << endl;
				cout << "1、普通员工" << endl;
				cout << "2、经理" << endl;
				cout << "3、老板" << endl;
				while (1)
				{
					cin >> duty;
					Worker *w = NULL;
					switch (duty)
					{
					case 1:
						//添加普通员工
						w = new Employee(id, name, duty);
						break;
					case 2:
						//添加经理
						w = new Manager(id, name, duty);
						break;
					case 3:
						//添加老板
						w = new Boss(id, name, duty);
						break;
					default:
						cout << "输入有误，请重新输入：";
						break;
					}
					//将新添加的职工保存到新开辟的数组中
					NewSpace[m_AllNum + i] = w;
					break;
				}
			}
			//释放原来的数组空间，并且将原来数组指针 指向 新开辟的数组空间
			delete[] m_EmpArr;
			m_EmpArr = NewSpace;

			//更新职工数组的大小
			m_AllNum = NewNum;

			//文件是否为空标志赋值为真
			m_FileIsEmpty = true;

			//成功添加完职工
			cout << "成功添加了" << AddNum << "名职工" << endl;

			//将数组中的数据保存到文件中
			Save();
			break;
		}
		else
		{
			cout << "输入有误，请重新输入：";
		}
	}
}

//显示职工
void WorkerManager::DisplayEmp()
{
	if (m_AllNum != 0)
	{
		for (int i = 0; i < m_AllNum; i++)
		{
			m_EmpArr[i]->ShowInfo();
		}
	}
	else
	{
		cout << "文件为空！" << endl;
	}
}

//保存数据到文件中
void WorkerManager::Save()
{
	ofstream ofs;
	//以输出的方式打开文件——写文件
	ofs.open(FILENAME, ios::out);

	//写文件
	for (int i = 0; i < m_AllNum; i++)
	{
		ofs << m_EmpArr[i]->m_ID << " "
			<< m_EmpArr[i]->m_name << " "
			<< m_EmpArr[i]->m_position << " "
			<< m_EmpArr[i]->m_duty << endl;
	}

	//关闭文件
	ofs.close();
}

//获取文件中的职工数目
int WorkerManager::GetFileNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	string buf;
	int count = 0;
	while (getline(ifs, buf))
	{
		count++;
	}
	return count;
}

//初始化职工数组
void WorkerManager::InitEmpArr()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	string position;
	string duty;
	int i = 0;
	while (ifs >> id && ifs >> name && ifs >> position && ifs >> duty)
	{
		Worker *w = NULL;
		if (position == "普通员工")
		{ 
			w = new Employee(id, name,1);
		}
		else if (position == "经理")
		{
			w = new Manager(id, name, 2);
		}
		else if (position == "老板")
		{
			w = new Boss(id, name, 3);
		}
		m_EmpArr[i++] = w;
	}

	ifs.close();
}

//按编号判断员工是否存在(存在返回在数组中的下标)
int WorkerManager::IsExit(int ret)
{
	for (int i = 0; i < m_AllNum; i++)
	{
		if (m_EmpArr[i]->m_ID == ret)
			return i;
	}
	return -1;
}


//按员工编号删除员工
void WorkerManager::DeleteEmp()
{
	int ret = 0;
	cout << "请输入你要删除的员工编号：" << endl;
	cin >> ret;

	//判断员工是否存在
	int val = IsExit(ret);
	if (-1 != val)
	{
		//存在
		//删除（元素覆盖）
		for (int i = val; i < m_AllNum - 1; i++)
		{
			m_EmpArr[i] = m_EmpArr[i + 1];
		}
		//更新数组成员数量
		m_AllNum--;
		//更新文件中的职工信息
		Save();
		cout << "删除成功！" << endl;
	}
	else
	{
		//不存在
		cout << "员工不存在！" << endl;
	}
}

//修改职工信息
void WorkerManager::ModifyInformation()
{
	int ret = 0;
	cout << "请输入你要修改的职工编号：" << endl;
	cin >> ret;

	//判断员工是否存在
	int val = IsExit(ret);
	if (-1 != val)
	{
		cout << "请输入员工的信息：" << endl;
		cout << "编号：";
		cin >> m_EmpArr[val]->m_ID;
		cout << "姓名：";
		cin >> m_EmpArr[val]->m_name;
		cout << "请选择岗位：" << endl;
		cout << "1、普通员工" << endl;
		cout << "2、经理" << endl;
		cout << "3、老板" << endl;
		int tmp = 0;
		cin >> tmp;
		switch (tmp)
		{
		case 1:
			m_EmpArr[val]->m_position = "普通员工";
			m_EmpArr[val]->m_duty = "完成经理交给的任务";
			break;
		case 2:
			m_EmpArr[val]->m_position = "经理";
			m_EmpArr[val]->m_duty = "完成老板交给的任务，并给员工下发任务";
			break;
		case 3:
			m_EmpArr[val]->m_position = "老板";
			m_EmpArr[val]->m_duty = "管理公司所有职务";
			break;
		}
		//更新文件中的职工信息
		Save();
		cout << "修改成功！" << endl;
	}
	else
	{
		//不存在
		cout << "员工不存在！" << endl;
	}
}

//查找职工信息
void WorkerManager::SearchEmp()
{
	cout << "请选择你的查找方式：" << endl;
	cout << "1、编号" << endl;
	cout << "2、姓名" << endl;
	int ret = 0;
	cin >> ret;

	//是否查找到职工的标志
	int flag = 0;
	if (1 == ret)
	{
		//按照编号查找
		int tmp = 0;
		cout << "请输入你要查找的人编号：" << endl;
		cin >> tmp;
		for (int i = 0; i < m_AllNum; i++)
		{
			if (m_EmpArr[i]->m_ID == tmp)
			{
				m_EmpArr[i]->ShowInfo();
				flag = 1;
			}
		}
		if (flag == 0)
		{
			cout << "没有此人！" << endl;
		}
	}
	else
	{
		//按照姓名查找
		string name = { 0 };
		cout << "请输入你要查找人的姓名：" << endl;
		cin >> name;
		for (int i = 0; i < m_AllNum; i++)
		{
			if (m_EmpArr[i]->m_name == name)
			{
				m_EmpArr[i]->ShowInfo();
				flag = 1;
			}
		}
		if (flag == 0)
		{
			cout << "没有此人！" << endl;
		}
	}
}

//按照编号排序
void WorkerManager::Sort()
{
	for (int i = 0; i < m_AllNum - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < m_AllNum; j++)
		{
			if (m_EmpArr[j]->m_ID < m_EmpArr[min]->m_ID)
			{
				min = j;
			}
		}
		if (min != i)
		{
			Worker* tmp = m_EmpArr[i];
			m_EmpArr[i] = m_EmpArr[min];
			m_EmpArr[min] = tmp;
		}
	}
	cout << "排序完成！" << endl;
	//更新文件中职工数据
	Save();
}

//清空文档
void WorkerManager::Empty()
{


}

//析构函数
WorkerManager::~WorkerManager()
{
	if (m_EmpArr != NULL)
	{
		//释放职工数组指针指向的空间
		delete[] m_EmpArr;
		m_EmpArr = NULL;
	}
}