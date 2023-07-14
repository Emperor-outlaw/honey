

//实现一个通讯录
//通讯录可以存储多人信息，人数不定，每个人的信息包括：姓名、性别、年龄、电话、住址
//提供方法：
//1、添加联系人信息
//2、删除指定联系人信息
//3、查找指定联系人信息
//4、修改指定联系人信息
//5、显示所有联系人信息
//6、清空所有联系人
//7、以名字排序所有联系人

#include "contact.h"

//主菜单函数
void menu()
{
	printf("*****************************************\n");
	printf("*****         欢迎使用通讯录       ******\n");
	printf("*****     1.add        2.delete    ******\n");
	printf("*****     3.search     4.modify    ******\n");
	printf("*****     5.show       6.empty     ******\n");
	printf("*****     7.sort       0.exit      ******\n");
	printf("*****************************************\n");
}

//主函数
int main()
{
	int input = 0;
	//采用函数指针数组的形式代替switch—case语句，来控制程序的整体逻辑
	//定义一个函数指针数组，数组中的每个元素是函数指针，函数的形参是Contact*，返回值是void
	void (*arr[8]) (Contact*) = { NULL, addContact, delContact, searchContact, modifyContact, showContact, emptyContact, sortContact };

	Contact con; //创建一个通讯录
	initContact(&con); //初始话通讯录
	do
	{
		menu();
		printf("请输入你的选择：>");
		scanf("%d", &input);
		if (input > 0 && input < 8)
		{
			arr[input](&con);
		}
		else if (input == 0)
		{
			printf("退出程序！\n");
			break;
		}
		else
		{
			printf("输入错误，请重新输入！\n");
		}
	} while (input);
	return 0;
}
