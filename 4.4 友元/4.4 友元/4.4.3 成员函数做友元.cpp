#define _CRT_SECURE_NO_WARNINGS 1
//��ʾ������Ŀ�����еĳ�Ա������������ʵ��
//�����������汾�Ĵ��룬��һ��ʱ����ģ��漰�� ����ȫ���ͣ�incompete type�� 

//��һ��
#include <iostream>
#include <string>
using namespace std;
class GoodGay;  //ǰ������(��Ȼ������������ǵ�13����Ȼ�ᱨ��ʹ����δ�������͡�GoodGay��)
//ԭ��������֮�󣬶���֮ǰ�����ࣨGoodGay����һ������ȫ���ͣ�����֪��ǰ������������һ�����ͣ��� ��֪��������Щ��Ա
//����ȫ����ֻ�������޷�ʽʹ�ã����ܶ��� �����͵Ķ��󣬲���ȫ����ֻ�ܶ���ָ������͵� ָ�뼰���ã��������������������Ƕ��壩ʹ�ø�������Ϊ �β����ͻ򷵻����͵ĺ���
class Building
{
	//���߱����� GoodGay���е�visit1() �� Building��ĺ����ѣ����Է������е�˽������
	//ע�⣺���еĳ�Ա������Ԫ����ʱ ǰ��Ҫ�� ��������(GoodGay::),˵��ʱ�ĸ����µĳ�Ա
	friend void GoodGay::visit1();
public:
	Building();
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};

class GoodGay
{
public:
	GoodGay();
	void visit1();     //��visit1���Է���Building���е�˽�г�Ա
	void visit2();     //��visit2�����Է���Building���е�˽�г�Ա
public:
	Building *building;
};

Building::Building()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

GoodGay::GoodGay()
{
	building = new Building;
}

void GoodGay::visit1()
{
	cout << "�û������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "�û������ڷ��ʣ�" << building->m_BedRoom << endl;
}

void GoodGay::visit2()
{
	cout << "�û������ڷ��ʣ�" << building->m_SittingRoom << endl;
	//cout << "�û������ڷ��ʣ�" << building->m_BedRoom << endl;   //û�ж�visit2����Ԫ�����Բ��ܷ������˽�г�Ա
}

void test01()
{
	GoodGay gg;
	gg.visit1();
	gg.visit2();
}

int main()
{
	test01();
	return 0;
}

//�ڶ���
//#include <iostream>
//#include <string>
//using namespace std;
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit1();     //��visit1���Է���Building���е�˽�г�Ա
//	void visit2();     //��visit2�����Է���Building���е�˽�г�Ա
//public:
//	Building *building;
//};
//
//class Building
//{
//	//���߱����� GoodGay���е�visit1() �� Building��ĺ����ѣ����Է������е�˽������
//	//ע�⣺���еĳ�Ա������Ԫ����ʱ ǰ��Ҫ�� ��������(GoodGay::),˵��ʱ�ĸ����µĳ�Ա
//	friend void GoodGay::visit1();
//public:
//	Building();
//public:
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
//
//Building::Building()
//{
//	m_SittingRoom = "����";
//	m_BedRoom = "����";
//}
//
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//
//void GoodGay::visit1()
//{
//	cout << "�û������ڷ��ʣ�" << building->m_SittingRoom << endl;
//	cout << "�û������ڷ��ʣ�" << building->m_BedRoom << endl;
//}
//
//void GoodGay::visit2()
//{
//	cout << "�û������ڷ��ʣ�" << building->m_SittingRoom << endl;
//	//cout << "�û������ڷ��ʣ�" << building->m_BedRoom << endl;   //û�ж�visit2����Ԫ�����Բ��ܷ������˽�г�Ա
//}
//
//void test01()
//{
//	GoodGay gg;
//	gg.visit1();
//	gg.visit2();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}