//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//using namespace std;
//
////多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
//
////解决方法：将父类中的析构函数改为 虚析构 或者 纯虚析构
//
////虚析构和纯虚析构的共性
////1、可以解决父类指针释放子类创建在堆区的对象
////2、都需要具体的函数实现
//
////虚析构和纯虚析构的区别
////如果是纯虚构，该类属于抽象类，无法实例化对象
//
////虚析构语法：
////virtual ~类名(){}
//
////纯虚析构语法：
////virtual ~类名(){} = 0;
////类名::~类名(){}
//
////class Animal
////{
////public:
////	Animal()
////	{
////		cout << "动物的构造函数" << endl;
////	}
////	~Animal()
////	{
////		cout << "动物的析构函数" << endl;
////	}
////	virtual void speak() = 0;
////};
////
////class Cat :public Animal
////{
////public:
////	Cat(string name)
////	{
////		m_name = new string(name);
////		age = 10;
////		cout << "猫的构造函数" << endl;
////	}
////	~Cat()
////	{
////		if (m_name != NULL)
////		{
////			delete m_name;
////			m_name = NULL;
////		}
////		cout << "猫的析构函数" << endl;
////	}
////	virtual void speak()
////	{
////		cout << "猫在说话" << endl;
////	}
////	string *m_name;
////	int age;
////};
////
////void DoSpeak(Animal *animal)
////{
////	animal->speak();
////	delete animal;
////	//通过父类指针去释放可能会导致子类对象可能清理不干净
////}
////
////void test01()
////{
////	DoSpeak(new Cat("Tom"));
////	//发现：函数运行完没有调用子类的析构函数，也就是DoSpeak函数通过父类指针释放，子类中在堆区开辟的内存没有被释放，导致内存泄漏
////	//解决：虚析构和纯虚析构
////}
////
////int main()
////{
////	test01();
////	return 0;
////}
//
////解决示例
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "动物的构造函数" << endl;
//	}
//	////1、虚析构
//	//virtual ~Animal()
//	//{
//	//	//cout << "动物的析构函数" << endl;
//	//}
//
//	//2、纯虚析构
//	virtual ~Animal() = 0;
//	//运行时会报错：无法解析的外部命令（在链接阶段发生了错误）
//	//原因：无论是虚构还是纯虚析构 都必须有 函数体具体实现(可以是空函数)(实现如下：104行到107行)
//	//为什么要必须要有函数具体实现：万一在Animal内部有堆区开辟的内存，要在析构的时候释放，此时析构函数就有用了
//
//	virtual void speak() = 0;
//};
//Animal::~Animal()
//{
//	cout << "动物在析构函数" << endl;
//}
//
//class Cat :public Animal
//{
//public:
//	Cat(string name)
//	{
//		m_name = new string(name);
//		age = 10;
//		cout << "猫的构造函数" << endl;
//	}
//	~Cat()
//	{
//		if (m_name != NULL)
//		{
//			delete m_name;
//			m_name = NULL;
//		}
//		cout << "猫的析构函数" << endl;
//	}
//	virtual void speak()
//	{
//		cout << "猫在说话" << endl;
//	}
//	string *m_name;
//	int age;
//};
//
//void DoSpeak(Animal *animal)
//{
//	animal->speak();
//	delete animal;
//	//通过父类指针去释放可能会导致子类对象可能清理不干净
//}
//
//void test01()
//{
//	DoSpeak(new Cat("Tom"));
//	//发现：函数运行完没有调用子类的析构函数，也就是DoSpeak函数通过父类指针释放，子类中在堆区开辟的内存没有被释放，导致内存泄漏
//	//解决：虚析构和纯虚析构
//}
//
//int main()
//{
//	test01();
//	return 0;
//}