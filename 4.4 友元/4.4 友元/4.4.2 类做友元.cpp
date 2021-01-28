//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Building
//{
//	//告诉编译器 GoodGay类 是 Building类的好朋友，可以访问类中的私有内容
//	friend class GoodGay;
//public:
//	Building()
//	{
//		m_SittingRoom = "客厅";
//		m_BedRoom = "卧室";
//	}
//public:
//	string m_SittingRoom;  //客厅
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
//		cout << "好基友正在访问： " << building->m_SittingRoom << endl;
//		cout << "好基友正在访问： " << building->m_BedRoom << endl;
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