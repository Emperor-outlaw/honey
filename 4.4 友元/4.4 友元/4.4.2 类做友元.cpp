//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Building
//{
//	//���߱����� GoodGay�� �� Building��ĺ����ѣ����Է������е�˽������
//	friend class GoodGay;
//public:
//	Building()
//	{
//		m_SittingRoom = "����";
//		m_BedRoom = "����";
//	}
//public:
//	string m_SittingRoom;  //����
//private:
//	string m_BedRoom;
//};
//
//class GoodGay
//{
//public:
//	GoodGay()
//	{
//		building = new Building;
//	}
//
//	void visit()
//	{
//		cout << "�û������ڷ��ʣ� " << building->m_SittingRoom << endl;
//		cout << "�û������ڷ��ʣ� " << building->m_BedRoom << endl;
//	}
//public:
//	Building *building;
//};
//
//void test01()
//{
//	GoodGay gg;
//	gg.visit();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}