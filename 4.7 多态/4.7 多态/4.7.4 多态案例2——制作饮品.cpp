//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
////������Ʒ���·�Ϊ����ˮ��>���ݡ�>���뱭�С�>���븨��
//
//class AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil() = 0;
//
//	//����
//	virtual void Brew() = 0;
//
//	//���뱭��
//	virtual void PourInCup() = 0;
//
//	//���븨��
//	virtual void PutSomething() = 0;
//
//	//�涨����
//	void MakeDrinking()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
////��������
//class Coffee :public AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "�����ɽ" << endl;
//	}
//
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݿ���" << endl;
//	}
//
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << "�����ȵ��뱭��" << endl;
//	}
//
//	//���븨��
//	virtual void PutSomething()
//	{
//		cout << "����ţ�̺���" << endl;
//	}
//};
//
////������
//class Tea :public AbstractDrinking
//{
//public:
//	//��ˮ
//	 virtual void Boil()
//	{
//		cout << "��ũ��ɽȪ" << endl;
//	}
//
//	//����
//	 virtual void Brew()
//	{
//		cout << "���ݲ�Ҷ" << endl;
//	}
//
//	//���뱭��
//	 virtual void PourInCup()
//	{
//		cout << "����ˮ���뱭��" << endl;
//	}
//
//	//���븨��
//	 virtual void PutSomething()
//	{
//		cout << "��������" << endl;
//	}
//};
//
//void DoWork(AbstractDrinking *drink)
//{
//	drink->MakeDrinking();
//}
//
//void test01()
//{
//	DoWork(new Coffee);
//	cout << "�����������ָ��ߡ�������������" << endl;
//	DoWork(new Tea);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}