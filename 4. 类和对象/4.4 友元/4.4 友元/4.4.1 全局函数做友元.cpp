//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Building
//{
//	//���߱����� visitȫ�ֺ��� �� Building��ĺ����ѣ����Է������е�˽������
//	friend void visit(Building *building);
//public:
//	Building()
//	{
//		m_SittingRoom = "����";
//		m_BedRoom = "����";
//	}
//public:
//	string m_SittingRoom;  //����
//private:
//	string m_BedRoom;      // ����
//};
//
////ȫ�ֺ���visit����Building���еĳ�Ա����
//void visit(Building *building)
//{
//	cout << "���ڷ��ʣ�" << building->m_SittingRoom << endl;
//	cout << "���ڷ��ʣ�" << building->m_BedRoom << endl;    //������Ҫ�������е�˽�г�Ա��Ҫ�Ժ�������Ԫ����9�в�����
//}
//void test01()
//{
//	Building building;
//	visit(&building);
//}
//int main()
//{
//	test01();
//	return 0;
//}