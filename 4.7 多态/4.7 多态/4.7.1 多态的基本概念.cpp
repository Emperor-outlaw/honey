//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
////��̬��Ϊ����
////1����̬��̬���������� �� ������������ھ�̬��̬�����ú�����
////2����̬��̬�������� �� �麯��ʵ������ʱ��̬
//
////��̬��̬�Ͷ�̬��̬����
////1����̬��̬�ĺ�����ַ��󶨡�������׶�ȷ��������ַ
////2����̬��̬�ĺ�����ַ��󶨡������н׶�ȷ��������ַ
//
//
//////����ͨ����һ�������˽��̬
//////��һ����
////class Animal
////{
////public:
////	void speak()
////	{
////		cout << "������˵��" << endl;
////	}
////};
////
////class Cat :public Animal
////{
////public:
////	void speak()
////	{
////		cout << "è��˵��" << endl;
////	}
////};
////
////void DoSpeak(Animal &animal)
////{
////	animal.speak();
////}
////
////void test01()
////{
////	Cat cat;
////	//���⣺�Ҵ���һ��è�࣬����DoSpeak���DoSpeakʹ��һ��Animal������ý��յģ�����������
////	//���������C++������������ �����ָ�� ָ�� ����
////	//���⣺�Ҵ�cat��ȥ DoSpeak����Cat�����speak ���ǵ���Animal�����speak
////	//��������н�����ֵ��õ���Animal���е�speak
////	//ԭ�򣺲����˾�̬��̬��������ַ��󶨣������ڼ�animal�Ѿ�ָ����Animal���е�speak�����������㴫ʲô�������Ҷ���ָ��Animal��
////	DoSpeak(cat);
////	//�������Ҫ��è˵������ô���
////	//ʹ�ö�̬��̬
////	//������ڶ�����
////}
////
////int main()
////{
////	test01();
////
////	return 0;
////}
//
////�ڶ�����
////��̬����������
////1���м̳й�ϵ
////2��������д�����е��麯��
//
////��̬ʹ�ã�
////����ָ���������ָ������Ķ���
//class Animal
//{
//public:
//	//����ǰ�����virtual�ؼ��֣�����麯������ô�������ڱ����ʱ��Ͳ���ȷ������������
//	virtual void speak()
//	{
//		cout << "������˵��" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//public:
//	 void speak()
//	{
//		cout << "è��˵��" << endl;
//	}
//};
//
//class Dog :public Animal
//{
//public:
//	 void speak()
//	{
//		cout << "����˵��" << endl;
//	}
//};
//void DoSpeak(Animal &animal)
//{
//	animal.speak();
//}
//
//void test01()
//{
//	Cat cat;
//	DoSpeak(cat);
//	Dog dog;
//	DoSpeak(dog);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}