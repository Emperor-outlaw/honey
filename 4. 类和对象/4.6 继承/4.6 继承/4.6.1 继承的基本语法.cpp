//#define _CRT_SECURE_NO_WARNINGS 1
////继承是面向对象的三大特性之一
////有些类于类之间有特殊的关系，我们发现，定义这些类时，下级别的成员除了拥有上一级的共性，还有自己的特性
////这时候我们可以考虑利用继承的技术，减少重复的代码
//
////语法：class 子类 ：继承方式 父类
////子类 也称 派生类
////父类 也称 基类
//
////派生类中的成员，包含两大部分：
////一类是从基类继承过来的，一类是自己增加的成员
////从基类继承过来的表现其共性，而新增的成员体现了其个性
//
////例如：很多网站中都有公共的头部，公共的底部，甚至公共的左侧列表，只有中心内容不同
////1、普通写法
////#include <iostream>
////using namespace std;
//////Java页面
////class Java
////{
////public:
////	void header()
////	{
////		cout << "首页、公开课、登录、注册......" << endl;
////	}
////	void footer()
////	{
////		cout << "帮助中心、交流合作、站内地图......" << endl;
////	}
////	void left()
////	{
////		cout << "Java、python、C++" << endl;
////	}
////	void content()
////	{
////		cout << "Java学科视频" << endl;
////	}
////};
//////Python页面
////class Python
////{
////public:
////	void header()
////	{
////		cout << "首页、公开课、登录、注册......" << endl;
////	}
////	void footer()
////	{
////		cout << "帮助中心、交流合作、站内地图......" << endl;
////	}
////	void left()
////	{
////		cout << "Java、python、C++" << endl;
////	}
////	void content()
////	{
////		cout << "Python学科视频" << endl;
////	}
////};
//////C++页面
////class CPP
////{
////public:
////	void header()
////	{
////		cout << "首页、公开课、登录、注册......" << endl;
////	}
////	void footer()
////	{
////		cout << "帮助中心、交流合作、站内地图......" << endl;
////	}
////	void left()
////	{
////		cout << "Java、python、C++" << endl;
////	}
////	void content()
////	{
////		cout << "C++学科视频" << endl;
////	}
////};
////void test01()
////{
////	cout << "Java页面" << endl;
////	Java java;
////	java.header();
////	java.footer();
////	java.left();
////	java.content();
////	cout << "--------------------------分割线-----------------------" << endl;
////	cout << "Python页面" << endl;
////	Python python;
////	python.header();
////	python.footer();
////	python.left();
////	python.content();
////	cout << "--------------------------分割线-----------------------" << endl;
////	cout << "C++页面" << endl;
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
////2、继承实现
//#include <iostream>
//using namespace std;
////公共页面
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册......" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图......" << endl;
//	}
//	void left()
//	{
//		cout << "Java、python、C++" << endl;
//	}
//};
////Java页面
//class Java :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Java视频" << endl;
//	}
//};
////Python页面
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python视频" << endl;
//	}
//};
////C++页面
//class CPP :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "C++视频" << endl;
//	}
//};
//void test01()
//{
//	cout << "Java页面" << endl;
//	Java java;
//	java.header();
//	java.footer();
//	java.left();
//	java.content();
//	cout << "--------------------------分割线-----------------------" << endl;
//	cout << "Python页面" << endl;
//	Python python;
//	python.header();
//	python.footer();
//	python.left();
//	python.content();
//	cout << "--------------------------分割线-----------------------" << endl;
//	cout << "C++页面" << endl;
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