//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//using namespace std;
//
////��̬ʹ��ʱ����������������Կ��ٵ���������ô����ָ�����ͷ�ʱ�޷����õ��������������
//
////����������������е�����������Ϊ ������ ���� ��������
//
////�������ʹ��������Ĺ���
////1�����Խ������ָ���ͷ����ഴ���ڶ����Ķ���
////2������Ҫ����ĺ���ʵ��
//
////�������ʹ�������������
////����Ǵ��鹹���������ڳ����࣬�޷�ʵ��������
//
////�������﷨��
////virtual ~����(){}
//
////���������﷨��
////virtual ~����(){} = 0;
////����::~����(){}
//
////class Animal
////{
////public:
////	Animal()
////	{
////		cout << "����Ĺ��캯��" << endl;
////	}
////	~Animal()
////	{
////		cout << "�������������" << endl;
////	}
////	virtual void speak() = 0;
////};
////
////class Cat :public Animal
////{
////public:
////	Cat(string name)
////	{
////		m_name = new string(name);
////		age = 10;
////		cout << "è�Ĺ��캯��" << endl;
////	}
////	~Cat()
////	{
////		if (m_name != NULL)
////		{
////			delete m_name;
////			m_name = NULL;
////		}
////		cout << "è����������" << endl;
////	}
////	virtual void speak()
////	{
////		cout << "è��˵��" << endl;
////	}
////	string *m_name;
////	int age;
////};
////
////void DoSpeak(Animal *animal)
////{
////	animal->speak();
////	delete animal;
////	//ͨ������ָ��ȥ�ͷſ��ܻᵼ�����������������ɾ�
////}
////
////void test01()
////{
////	DoSpeak(new Cat("Tom"));
////	//���֣�����������û�е������������������Ҳ����DoSpeak����ͨ������ָ���ͷţ��������ڶ������ٵ��ڴ�û�б��ͷţ������ڴ�й©
////	//������������ʹ�������
////}
////
////int main()
////{
////	test01();
////	return 0;
////}
//
////���ʾ��
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "����Ĺ��캯��" << endl;
//	}
//	////1��������
//	//virtual ~Animal()
//	//{
//	//	//cout << "�������������" << endl;
//	//}
//
//	//2����������
//	virtual ~Animal() = 0;
//	//����ʱ�ᱨ���޷��������ⲿ��������ӽ׶η����˴���
//	//ԭ���������鹹���Ǵ������� �������� ���������ʵ��(�����ǿպ���)(ʵ�����£�104�е�107��)
//	//ΪʲôҪ����Ҫ�к�������ʵ�֣���һ��Animal�ڲ��ж������ٵ��ڴ棬Ҫ��������ʱ���ͷţ���ʱ����������������
//
//	virtual void speak() = 0;
//};
//Animal::~Animal()
//{
//	cout << "��������������" << endl;
//}
//
//class Cat :public Animal
//{
//public:
//	Cat(string name)
//	{
//		m_name = new string(name);
//		age = 10;
//		cout << "è�Ĺ��캯��" << endl;
//	}
//	~Cat()
//	{
//		if (m_name != NULL)
//		{
//			delete m_name;
//			m_name = NULL;
//		}
//		cout << "è����������" << endl;
//	}
//	virtual void speak()
//	{
//		cout << "è��˵��" << endl;
//	}
//	string *m_name;
//	int age;
//};
//
//void DoSpeak(Animal *animal)
//{
//	animal->speak();
//	delete animal;
//	//ͨ������ָ��ȥ�ͷſ��ܻᵼ�����������������ɾ�
//}
//
//void test01()
//{
//	DoSpeak(new Cat("Tom"));
//	//���֣�����������û�е������������������Ҳ����DoSpeak����ͨ������ָ���ͷţ��������ڶ������ٵ��ڴ�û�б��ͷţ������ڴ�й©
//	//������������ʹ�������
//}
//
//int main()
//{
//	test01();
//	return 0;
//}