//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//
////从父类继承过来的成员，那些属于子类对象中？
//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;  //私有成员也会被继承，只不过是被隐藏了
//};
//
//class Son :public Base
//{
//public:
//	int m_D;
//};
//
//void test01()
//{
//	//16
//	cout << "sizeof son = " << sizeof(Son) << endl; 
//}
//
//int main()
//{
//	test01();
//	return 0;
//}
//
////总结：也可以利用工具查看私有成员是否被继承
////方法：打开vs2013开发人员命令提示
////D: ——转到文件的盘
////cd ——D:\VS2013Documents\crawler-w\4.6 继承\4.6 继承（当前项目所在文件夹路径）
////dir —— 显示当前目录下的文件
////cl（这是小写的L） /d1(这是数字one) reportSingleClassLayoutSon(类名) 4.6.3（按Tab键（自动补全））
