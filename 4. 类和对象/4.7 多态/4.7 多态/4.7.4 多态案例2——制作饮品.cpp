//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
////制作饮品大致分为：煮水—>冲泡—>倒入杯中—>加入辅料
//
//class AbstractDrinking
//{
//public:
//	//煮水
//	virtual void Boil() = 0;
//
//	//冲泡
//	virtual void Brew() = 0;
//
//	//倒入杯中
//	virtual void PourInCup() = 0;
//
//	//加入辅料
//	virtual void PutSomething() = 0;
//
//	//规定流程
//	void MakeDrinking()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
////制作咖啡
//class Coffee :public AbstractDrinking
//{
//public:
//	//煮水
//	virtual void Boil()
//	{
//		cout << "煮百岁山" << endl;
//	}
//
//	//冲泡
//	virtual void Brew()
//	{
//		cout << "冲泡咖啡" << endl;
//	}
//
//	//倒入杯中
//	virtual void PourInCup()
//	{
//		cout << "将咖啡倒入杯中" << endl;
//	}
//
//	//加入辅料
//	virtual void PutSomething()
//	{
//		cout << "加入牛奶和糖" << endl;
//	}
//};
//
////制作茶
//class Tea :public AbstractDrinking
//{
//public:
//	//煮水
//	 virtual void Boil()
//	{
//		cout << "煮农夫山泉" << endl;
//	}
//
//	//冲泡
//	 virtual void Brew()
//	{
//		cout << "冲泡茶叶" << endl;
//	}
//
//	//倒入杯中
//	 virtual void PourInCup()
//	{
//		cout << "将茶水倒入杯中" << endl;
//	}
//
//	//加入辅料
//	 virtual void PutSomething()
//	{
//		cout << "加入柠檬" << endl;
//	}
//};
//
//void DoWork(AbstractDrinking *drink)
//{
//	drink->MakeDrinking();
//}
//
//void test01()
//{
//	DoWork(new Coffee);
//	cout << "—————分割线———————" << endl;
//	DoWork(new Tea);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}