#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//���μ̳У�שʯ�̳У����ͼ������������ͼ������
//����������̳�ͬһ������
//����ĳ����ͬʱ�̳�������������

//�����������̳�
//�ڼ̳з�ʽǰ���virtual�ؼ���
//��ʱ�����ĸ����Ϊ�����

//������
class Animal
{
public:
	int age;
};
//����
class Sheep :virtual public Animal
{
};
//������
class Camel :virtual public Animal
{
};
//���գ�������
class Alpaca :public Sheep, public Camel
{
};

void test01()
{
	//���⣺������ն��ֱ�̳��˶�������䣨age�����������ּ̳���������������е�����
	//      ��ʱ��������˶�����
//	cout << "��̳�ǰ�Ĵ�С = " << sizeof(Alpaca) << endl;  //8
//	Alpaca alpaca;
////	alpaca.age = 10;              //��ʾ����age����ȷ����Ϊ�Ҳ�֪�������� ���� �����µ�age
////	cout << alpaca.age << endl;   //��ʾ����age����ȷ����Ϊ�Ҳ�֪�������� ���� �����µ�age
//	//1������ͨ��������������������ĸ�ֵ����(����Alpaca������Ȼ������age,�˷ѿռ䣬�����������ֻ��Ҫһ�ݾͿ���)
//	alpaca.Sheep::age = 100;
//	alpaca.Camel::age = 200;
//	cout << alpaca.Sheep::age << endl;    //��̳�֮ǰ���100  ֮�����200
//	cout << alpaca.Camel::age << endl;    //��̳�֮ǰ���200  ֮�����200

	//2����̳�
	cout << "��̳к�Ĵ�С = " << sizeof(Alpaca) << endl;  //12(һ��age,�������ָ��vbptr��ָ�������vbtable��)
	Alpaca alpaca;
	alpaca.age = 100;  //��̳к�Ͳ�����������
	cout << alpaca.age << endl;
}

int main()
{
	test01();
	return 0;
}