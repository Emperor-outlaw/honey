//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//using namespace std;
////C++���������ٸ�һ�������4������
////1��Ĭ�Ϲ��캯�����޲Σ�������Ϊ�գ�
////2��Ĭ�������������޲Σ�������Ϊ�գ�
////3��Ĭ�Ͽ������캯���������Խ���ֵ����
////4����ֵ����� operator=�������Խ���ֵ����
//
//////��һ�������д��󣬵ڶ��������ǶԵ�һ�����޸ģ�
////class Person
////{
////public:
////	Person(int age)
////	{
////		//��̬����һ���ڴ�
////		this->age = new int(age);
////	}
////	~Person()
////	{
////		//������ʱ���ͷŶ�̬�ڴ�
////		if (age != NULL)
////		{
////			delete age;
////			age = NULL;
////		}
////	}
////public:
////	int *age;
////};
//////�������������ָ�����������ֵʱҲ�������ǳ��������
//////�����test01�������л��������Ϊp1 = p2 ��һ��ǳ����
//////ǳ�����������İ�ֵȫ������ȥ������p1��ageָ���p2��ageָ��ֵһ����ָ��ͬһ����̬�ڴ�ռ䣩
//////�ڶ�̬�ڴ��ͷŵ�ʱ��p1,p2��Ҫ�ͷţ��൱�ڶ�һ���ռ��ͷ������Σ��ڶ����ǷǷ�������
////void test01()
////{
////	Person p1(10);
////	Person p2(20);
////	p1 = p2;
////	cout << "p1 = " << p1.age << endl;
////	cout << "p2 = " << p2.age << endl;
////}
////int main()
////{
////	test01();
////	return 0;
////}
//
//
////�ڶ�������
////��ͨ����ֵ����������������
//class Person
//{
//public:
//	Person(int age)
//	{
//		//��̬����һ���ڴ�
//		this->age = new int(age);
//	}
//	~Person()
//	{
//		//������ʱ���ͷŶ�̬�ڴ�
//		if (age != NULL)
//		{
//			delete age;
//			age = NULL;
//		}
//	}
//	////��һ�ֽ����������ֱ�ӰѶ�����ֵ ��ֵ����
//	//void operator=(Person &p)  //�˴����������ã���Ȼ�����ֻ����ǳ�������������
//	//{
//	//	*age = *p.age;
//	//}
//	//�ڶ��ֽ�������������
//	 Person & operator=(Person &p) //��ʽ����
//	{
//		//���ж϶����Ƿ������ԣ���������ͷŸɾ���Ȼ���������
//		if (age != NULL)
//		{
//			delete age;
//			age = NULL;
//		}
//		//���
//		age = new int(*p.age);
//		return *this;
//	}
//public:
//	int *age;
//};
//void test01()
//{
//	Person p1(10);
//	Person p2(20);
//	Person p3(30);
//	p3 = p2 = p1;
//	cout << "p1 = " << *p1.age << endl;
//	cout << "p2 = " << *p2.age << endl;
//	cout << "p3 = " << *p3.age << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}