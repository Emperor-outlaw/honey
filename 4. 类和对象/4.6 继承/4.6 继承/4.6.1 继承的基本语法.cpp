//#define _CRT_SECURE_NO_WARNINGS 1
////�̳�������������������֮һ
////��Щ������֮��������Ĺ�ϵ�����Ƿ��֣�������Щ��ʱ���¼���ĳ�Ա����ӵ����һ���Ĺ��ԣ������Լ�������
////��ʱ�����ǿ��Կ������ü̳еļ����������ظ��Ĵ���
//
////�﷨��class ���� ���̳з�ʽ ����
////���� Ҳ�� ������
////���� Ҳ�� ����
//
////�������еĳ�Ա���������󲿷֣�
////һ���Ǵӻ���̳й����ģ�һ�����Լ����ӵĳ�Ա
////�ӻ���̳й����ı����乲�ԣ��������ĳ�Ա�����������
//
////���磺�ܶ���վ�ж��й�����ͷ���������ĵײ�����������������б�ֻ���������ݲ�ͬ
////1����ͨд��
////#include <iostream>
////using namespace std;
//////Javaҳ��
////class Java
////{
////public:
////	void header()
////	{
////		cout << "��ҳ�������Ρ���¼��ע��......" << endl;
////	}
////	void footer()
////	{
////		cout << "�������ġ�����������վ�ڵ�ͼ......" << endl;
////	}
////	void left()
////	{
////		cout << "Java��python��C++" << endl;
////	}
////	void content()
////	{
////		cout << "Javaѧ����Ƶ" << endl;
////	}
////};
//////Pythonҳ��
////class Python
////{
////public:
////	void header()
////	{
////		cout << "��ҳ�������Ρ���¼��ע��......" << endl;
////	}
////	void footer()
////	{
////		cout << "�������ġ�����������վ�ڵ�ͼ......" << endl;
////	}
////	void left()
////	{
////		cout << "Java��python��C++" << endl;
////	}
////	void content()
////	{
////		cout << "Pythonѧ����Ƶ" << endl;
////	}
////};
//////C++ҳ��
////class CPP
////{
////public:
////	void header()
////	{
////		cout << "��ҳ�������Ρ���¼��ע��......" << endl;
////	}
////	void footer()
////	{
////		cout << "�������ġ�����������վ�ڵ�ͼ......" << endl;
////	}
////	void left()
////	{
////		cout << "Java��python��C++" << endl;
////	}
////	void content()
////	{
////		cout << "C++ѧ����Ƶ" << endl;
////	}
////};
////void test01()
////{
////	cout << "Javaҳ��" << endl;
////	Java java;
////	java.header();
////	java.footer();
////	java.left();
////	java.content();
////	cout << "--------------------------�ָ���-----------------------" << endl;
////	cout << "Pythonҳ��" << endl;
////	Python python;
////	python.header();
////	python.footer();
////	python.left();
////	python.content();
////	cout << "--------------------------�ָ���-----------------------" << endl;
////	cout << "C++ҳ��" << endl;
////	CPP cpp;
////	cpp.header();
////	cpp.footer();
////	cpp.left();
////	cpp.content();
////}
////int main()
////{
////	test01();
////	return 0;
////}
//
////2���̳�ʵ��
//#include <iostream>
//using namespace std;
////����ҳ��
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��......" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ......" << endl;
//	}
//	void left()
//	{
//		cout << "Java��python��C++" << endl;
//	}
//};
////Javaҳ��
//class Java :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Java��Ƶ" << endl;
//	}
//};
////Pythonҳ��
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python��Ƶ" << endl;
//	}
//};
////C++ҳ��
//class CPP :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "C++��Ƶ" << endl;
//	}
//};
//void test01()
//{
//	cout << "Javaҳ��" << endl;
//	Java java;
//	java.header();
//	java.footer();
//	java.left();
//	java.content();
//	cout << "--------------------------�ָ���-----------------------" << endl;
//	cout << "Pythonҳ��" << endl;
//	Python python;
//	python.header();
//	python.footer();
//	python.left();
//	python.content();
//	cout << "--------------------------�ָ���-----------------------" << endl;
//	cout << "C++ҳ��" << endl;
//	CPP cpp;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//}
//int main()
//{
//	test01();
//	return 0;
//}