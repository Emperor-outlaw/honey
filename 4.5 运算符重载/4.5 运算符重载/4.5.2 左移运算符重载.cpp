//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
////每次访问一个类成员的时候都是要用"."来访问（例如：cout << p.m_A）
////左移运算符重载：cout << p ;我只需要告诉它一个类，它会自己访问里面的成员
//class Person
//{
//public:
//	Person()
//	{
//		m_A = 20;
//		m_B = 40;
//	}
//	//成员函数实现不了， 实现的表达式时 p<<cout (和平时输出格式相反,cout在后面了)
//	//void operator<<(Person &p)
//	//{
//	//}
//public:
//	int m_A;
//	int m_B;
//};
////全局函数实现左移重载
////ostream对象只能有一个
//ostream & operator<<(ostream &cout, Person &p)
//{
//	cout << "m_A = " << p.m_A << endl << "m_B = " << p.m_B << endl;
//	return cout;
//}
//
//void test01()
//{
//	Person p1;
//	cout << p1 << "你好！" << endl; //链式访问,所以必须有返回值
//}
//int main()
//{
//	test01();
//	return 0;
//}