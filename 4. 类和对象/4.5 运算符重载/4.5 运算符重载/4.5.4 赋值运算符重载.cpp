//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//using namespace std;
////C++编译器至少给一个类添加4个函数
////1、默认构造函数（无参，函数体为空）
////2、默认析构函数（无参，函数体为空）
////3、默认拷贝构造函数，对属性进行值拷贝
////4、赋值运算符 operator=，对属性进行值拷贝
//
//////第一个程序（有错误，第二个程序是对第一个的修改）
////class Person
////{
////public:
////	Person(int age)
////	{
////		//动态开辟一个内存
////		this->age = new int(age);
////	}
////	~Person()
////	{
////		//析构的时候释放动态内存
////		if (age != NULL)
////		{
////			delete age;
////			age = NULL;
////		}
////	}
////public:
////	int *age;
////};
//////如果类中有属性指向堆区，做赋值时也会出现深浅拷贝问题
//////下面的test01函数运行会崩掉，因为p1 = p2 是一个浅拷贝
//////浅拷贝：仅仅的把值全拷贝过去，导致p1的age指针和p2的age指针值一样（指向同一个动态内存空间）
//////在动态内存释放的时候，p1,p2都要释放，相当于对一个空间释放了两次（第二次是非法操作）
////void test01()
////{
////	Person p1(10);
////	Person p2(20);
////	p1 = p2;
////	cout << "p1 = " << p1.age << endl;
////	cout << "p2 = " << p2.age << endl;
////}
////int main()
////{
////	test01();
////	return 0;
////}
//
//
////第二个程序
////我通过赋值运算符的重载来解决
//class Person
//{
//public:
//	Person(int age)
//	{
//		//动态开辟一个内存
//		this->age = new int(age);
//	}
//	~Person()
//	{
//		//析构的时候释放动态内存
//		if (age != NULL)
//		{
//			delete age;
//			age = NULL;
//		}
//	}
//	////第一种解决方法：我直接把堆区的值 赋值就行
//	//void operator=(Person &p)  //此处必须用引用，不然传参又会出现浅拷贝问题崩溃掉
//	//{
//	//	*age = *p.age;
//	//}
//	//第二种解决方法（深拷贝）
//	 Person & operator=(Person &p) //链式访问
//	{
//		//先判断堆区是否有属性，如果有先释放干净，然后再做深拷贝
//		if (age != NULL)
//		{
//			delete age;
//			age = NULL;
//		}
//		//深拷贝
//		age = new int(*p.age);
//		return *this;
//	}
//public:
//	int *age;
//};
//void test01()
//{
//	Person p1(10);
//	Person p2(20);
//	Person p3(30);
//	p3 = p2 = p1;
//	cout << "p1 = " << *p1.age << endl;
//	cout << "p2 = " << *p2.age << endl;
//	cout << "p3 = " << *p3.age << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}