//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
////���ı��ļ��Ĳ��裺
////1������ͷ�ļ�
////#include <fstream>
//
////2������������
////ifstream ofs;
//
////3�����ļ� �� �ж��ļ��Ƿ�򿪳ɹ�
////ifs.open("�ļ�·��",�򿪷�ʽ);
//
////4��������
////���ַ�ʽ��ȡ
//
////5���ر��ļ�
////ifs.close();
//
//int main()
//{
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);
//
//	//bool ������.is_open() �ж��ļ��Ƿ�򿪳ɹ����򿪳ɹ������棬ʧ�ܷ��ؼ�
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return 0;
//	}
//
//	//���ļ�
//	////��һ�ַ�ʽ
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//
//	////�ڶ��ַ�ʽ
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf, sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	////�����ַ�ʽ
//	//string buf;
//	//while (getline(ifs, buf))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//�����ַ�ʽ
//	char c;
//	while ((c = ifs.get()) != EOF)
//	{
//		cout << c;
//	}
//
//	ifs.close();
//
//	return 0;
//}