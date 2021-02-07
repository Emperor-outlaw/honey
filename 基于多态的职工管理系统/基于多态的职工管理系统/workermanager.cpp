#define _CRT_SECURE_NO_WARNINGS 1
#include "workermanager.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#include <fstream>
#define FILENAME "workerinformation.txt"
//���캯��
WorkerManager::WorkerManager()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	//1����һ��ʹ�ø�ϵͳ���ļ���û�б�����
	if (!ifs.is_open())
	{
		//��ʼ��ְ��������
		m_AllNum = 0;
		//��ʼ��ְ������ָ��
		m_EmpArr = NULL;
		return;
	}

	//2���ļ����ڣ������ļ�Ϊ��
	char ch = 0;
	ifs >> ch;
	if (ifs.eof())
	{
		//��ʼ��ְ��������
		m_AllNum = 0;
		//��ʼ��ְ������ָ��
		m_EmpArr = NULL;
		//��ʼ���ļ��Ƿ�Ϊ�ձ�־
		m_FileIsEmpty = false;
		ifs.close();
	}
	else
	{
		//3���ļ����ڣ����������ݲ�Ϊ��
		//��ʼ��ְ����������ȡ�ļ��е�ְ��������ֵ������
		m_AllNum = GetFileNum();

		//��ʼ��ְ������ָ��
		//1�����ٿռ�
		m_EmpArr = new Worker*[m_AllNum];
		//2�����ļ��е�ְ�����浽������
		InitEmpArr();

		//��ʼ���ļ��Ƿ�Ϊ�ձ�־
		m_FileIsEmpty = false;
		ifs.close();
	}

}

//��ʾ�˵�
void WorkerManager::ShowMenu()
{
	cout << "********��ӭ����ְ������ϵͳ********" << endl;
	cout << "********  0���Ƴ�����ϵͳ  *********" << endl;
	cout << "********  1������ְ����Ϣ  ********" << endl;
	cout << "********  2����ʾְ����Ϣ  ********" << endl;
	cout << "********  3��ɾ����ְְ��  ********" << endl;
	cout << "********  4���޸�ְ����Ϣ  ********" << endl;
	cout << "********  5������ְ����Ϣ  ********" << endl;
	cout << "********  6�����ձ������  ********" << endl;
	cout << "********  7����������ĵ�  ********" << endl;

}

//���ְ��
void WorkerManager::AddEmp()
{
	int AddNum = 0;
	cout << "��������Ҫ���ְ����������" << endl;
	while (1)
	{
		cin >> AddNum;
		if (AddNum > 0)
		{
			//�����µ������С
			int NewNum = AddNum + m_AllNum;

			//�����µĿռ��С
			Worker **NewSpace = new Worker*[NewNum];

			//�ж�ԭ�������Ƿ���ְ��
			if (m_EmpArr != NULL)
			{
				//ԭ��������ְ�������ҽ�ԭ���������ְ�����浽�¿��ٵĿռ���
				for (int i = 0; i < m_AllNum; i++)
				{
					NewSpace[i] = m_EmpArr[i];
				}
			}
			//���������
			for (int i = 0; i < AddNum; i++)
			{
				int id = 0;
				string name = { 0 };
				int duty = 0;
				cout << "������� " << i + 1 << "��ְ������Ϣ��" << endl;
				cout << "��ţ�";
				cin >> id;
				cout << "������";
				cin >> name;
				cout << "��ѡ���λ��" << endl;
				cout << "1����ͨԱ��" << endl;
				cout << "2������" << endl;
				cout << "3���ϰ�" << endl;
				while (1)
				{
					cin >> duty;
					Worker *w = NULL;
					switch (duty)
					{
					case 1:
						//�����ͨԱ��
						w = new Employee(id, name, duty);
						break;
					case 2:
						//��Ӿ���
						w = new Manager(id, name, duty);
						break;
					case 3:
						//����ϰ�
						w = new Boss(id, name, duty);
						break;
					default:
						cout << "�����������������룺";
						break;
					}
					//������ӵ�ְ�����浽�¿��ٵ�������
					NewSpace[m_AllNum + i] = w;
					break;
				}
			}
			//�ͷ�ԭ��������ռ䣬���ҽ�ԭ������ָ�� ָ�� �¿��ٵ�����ռ�
			delete[] m_EmpArr;
			m_EmpArr = NewSpace;

			//����ְ������Ĵ�С
			m_AllNum = NewNum;

			//�ļ��Ƿ�Ϊ�ձ�־��ֵΪ��
			m_FileIsEmpty = true;

			//�ɹ������ְ��
			cout << "�ɹ������" << AddNum << "��ְ��" << endl;

			//�������е����ݱ��浽�ļ���
			Save();
			break;
		}
		else
		{
			cout << "�����������������룺";
		}
	}
}

//��ʾְ��
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
		cout << "�ļ�Ϊ�գ�" << endl;
	}
}

//�������ݵ��ļ���
void WorkerManager::Save()
{
	ofstream ofs;
	//������ķ�ʽ���ļ�����д�ļ�
	ofs.open(FILENAME, ios::out);

	//д�ļ�
	for (int i = 0; i < m_AllNum; i++)
	{
		ofs << m_EmpArr[i]->m_ID << " "
			<< m_EmpArr[i]->m_name << " "
			<< m_EmpArr[i]->m_position << " "
			<< m_EmpArr[i]->m_duty << endl;
	}

	//�ر��ļ�
	ofs.close();
}

//��ȡ�ļ��е�ְ����Ŀ
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

//��ʼ��ְ������
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
		if (position == "��ͨԱ��")
		{ 
			w = new Employee(id, name,1);
		}
		else if (position == "����")
		{
			w = new Manager(id, name, 2);
		}
		else if (position == "�ϰ�")
		{
			w = new Boss(id, name, 3);
		}
		m_EmpArr[i++] = w;
	}

	ifs.close();
}

//������ж�Ա���Ƿ����(���ڷ����������е��±�)
int WorkerManager::IsExit(int ret)
{
	for (int i = 0; i < m_AllNum; i++)
	{
		if (m_EmpArr[i]->m_ID == ret)
			return i;
	}
	return -1;
}


//��Ա�����ɾ��Ա��
void WorkerManager::DeleteEmp()
{
	int ret = 0;
	cout << "��������Ҫɾ����Ա����ţ�" << endl;
	cin >> ret;

	//�ж�Ա���Ƿ����
	int val = IsExit(ret);
	if (-1 != val)
	{
		//����
		//ɾ����Ԫ�ظ��ǣ�
		for (int i = val; i < m_AllNum - 1; i++)
		{
			m_EmpArr[i] = m_EmpArr[i + 1];
		}
		//���������Ա����
		m_AllNum--;
		//�����ļ��е�ְ����Ϣ
		Save();
		cout << "ɾ���ɹ���" << endl;
	}
	else
	{
		//������
		cout << "Ա�������ڣ�" << endl;
	}
}

//�޸�ְ����Ϣ
void WorkerManager::ModifyInformation()
{
	int ret = 0;
	cout << "��������Ҫ�޸ĵ�ְ����ţ�" << endl;
	cin >> ret;

	//�ж�Ա���Ƿ����
	int val = IsExit(ret);
	if (-1 != val)
	{
		cout << "������Ա������Ϣ��" << endl;
		cout << "��ţ�";
		cin >> m_EmpArr[val]->m_ID;
		cout << "������";
		cin >> m_EmpArr[val]->m_name;
		cout << "��ѡ���λ��" << endl;
		cout << "1����ͨԱ��" << endl;
		cout << "2������" << endl;
		cout << "3���ϰ�" << endl;
		int tmp = 0;
		cin >> tmp;
		switch (tmp)
		{
		case 1:
			m_EmpArr[val]->m_position = "��ͨԱ��";
			m_EmpArr[val]->m_duty = "��ɾ�����������";
			break;
		case 2:
			m_EmpArr[val]->m_position = "����";
			m_EmpArr[val]->m_duty = "����ϰ彻�������񣬲���Ա���·�����";
			break;
		case 3:
			m_EmpArr[val]->m_position = "�ϰ�";
			m_EmpArr[val]->m_duty = "����˾����ְ��";
			break;
		}
		//�����ļ��е�ְ����Ϣ
		Save();
		cout << "�޸ĳɹ���" << endl;
	}
	else
	{
		//������
		cout << "Ա�������ڣ�" << endl;
	}
}

//����ְ����Ϣ
void WorkerManager::SearchEmp()
{
	cout << "��ѡ����Ĳ��ҷ�ʽ��" << endl;
	cout << "1�����" << endl;
	cout << "2������" << endl;
	int ret = 0;
	cin >> ret;

	//�Ƿ���ҵ�ְ���ı�־
	int flag = 0;
	if (1 == ret)
	{
		//���ձ�Ų���
		int tmp = 0;
		cout << "��������Ҫ���ҵ��˱�ţ�" << endl;
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
			cout << "û�д��ˣ�" << endl;
		}
	}
	else
	{
		//������������
		string name = { 0 };
		cout << "��������Ҫ�����˵�������" << endl;
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
			cout << "û�д��ˣ�" << endl;
		}
	}
}

//���ձ������
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
	cout << "������ɣ�" << endl;
	//�����ļ���ְ������
	Save();
}

//����ĵ�
void WorkerManager::Empty()
{


}

//��������
WorkerManager::~WorkerManager()
{
	if (m_EmpArr != NULL)
	{
		//�ͷ�ְ������ָ��ָ��Ŀռ�
		delete[] m_EmpArr;
		m_EmpArr = NULL;
	}
}