//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Building
//{
//	//告诉编译器 visit全局函数 是 Building类的好朋友，可以访问类中的私有内容
//	friend void visit(Building *building);
//public:
//	Building()
//	{
//		m_SittingRoom = "客厅";
//		m_BedRoom = "卧室";
//	}
//public:
//	string m_SittingRoom;  //客厅
//private:
//	string m_BedRoom;      // 卧室
//};
//
////全局函数visit访问Building类中的成员变量
//void visit(Building *building)
//{
//	cout << "正在访问：" << building->m_SittingRoom << endl;
//	cout << "正在访问：" << building->m_BedRoom << endl;    //函数想要访问类中的私有成员，要对函数做友元（第9行操作）
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