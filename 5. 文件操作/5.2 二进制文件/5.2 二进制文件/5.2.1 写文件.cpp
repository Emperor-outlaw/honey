//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <fstream>
//using namespace std;
////�����Ʒ�ʽд�ļ���Ҫ������������ó�Ա����write
////����ԭ�ͣ�ostream& write (const chat * buffer, int len)
////�������ͣ�buffer:ָ���ڴ���һ�δ洢�ռ�   len:��д���ֽ���
////�����ƿ��Զ�д�Զ�������
//
//class Person
//{
//public:
//	char buf[100];
//	char sex[100];
//	int age;
//};
//
//void test01()
//{
//	//1������ͷ�ļ�
//
//	//2���������������
//	ofstream ofs("person.txt", ios::out | ios::binary);//���Դ����������ʱ����ļ���ofs�����ж�Ӧ�Ĺ��캯����
//
//	//3�����ļ�
//	//ofs.open("person.txt", ios::out | ios::binary);
//
//	//4��д�ļ�
//	Person p = { "����¥", "��", 20 };   //����д�������
//	ofs.write((const char *)&p, sizeof(p));
//
//	//5���ر��ļ�
//	ofs.close();
//}
//int main()
//{
//	test01();
//	return 0;
//}