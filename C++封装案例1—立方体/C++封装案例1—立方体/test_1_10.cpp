#define _CRT_SECURE_NO_WARNINGS 1
//��ϰ����1�������������
//1.�����������(Cube)
//2.������������������
//3.�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ���ȡ�
#include <iostream>
using namespace std;
class Cube
{
private:
	int c_l;
	int c_w;
	int c_h;

public:
	//����������ĳ�������
	void set_number(int l, int w, int h)
	{
		c_l = l;
		c_w = w;
		c_h = h;
	}
	//��ʾ������ĳ�������
	void get_number()
	{
		cout << "����" << c_l << " ��" << c_w << " �ߣ�" << c_h << endl;
	}
	//��������������
	int calculate_s()
	{
		return ((c_l * c_w + c_l * c_h + c_w * c_h) * 2);
	}
	//��������������
	int calculate_v()
	{
		return (c_l * c_w * c_h);
	}
	bool if_same(Cube &c_2)
	{
		cout << "first" << endl;
		if ((c_l * c_w * c_h) == c_2.calculate_v())
			return true;
		return false;
	}
};
bool if_same(Cube &c_1, Cube &c_2)
{
	cout << "secend" << endl;
	if (c_1.calculate_v() == c_2.calculate_v())
		return true;
	return false;
}
int main()
{
	//������һ��������
	Cube c_1;
	//���ó�������
	c_1.set_number(10, 10, 10);
	//��ʾ��������
	c_1.get_number();
	//������������
	cout << "��һ��������������" << c_1.calculate_s() << endl << "��һ��������������" << c_1.calculate_v() << endl;

	//�����ڶ���������
	Cube c_2;
	//���ó�������
	c_2.set_number(20, 20, 20);
	//��ʾ��������
	c_2.get_number();
	//������������
	cout << "�ڶ���������������" << c_2.calculate_s() << endl << "�ڶ���������������" << c_2.calculate_v() << endl;

	//�ж������������Ƿ����
	//��һ���ַ�����ȫ�ֺ���
	cout << "ȫ�ֺ���" << endl;
	if (if_same(c_1, c_2) == true)
		cout << "��ȣ�" << endl;
	else
		cout << "����ȣ�" << endl;

	//�ڶ��ַ�������Ա����
	cout << "��Ա����" << endl;
	if (c_1.if_same(c_2) == true)
		cout << "��ȣ�" << endl;
	else
		cout << "����ȣ�" << endl;
	system("pause");
	return 0;
}
