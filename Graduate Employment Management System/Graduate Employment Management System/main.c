#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "control.h"
#include "student.h"
#include "manager.h"

void menu()
{
	printf("*****************************************************************\n");
	printf("*********    Graduate Employment Management System     **********\n");
	printf("*****************************************************************\n");
	printf("*****************************************************************\n");
	printf("***************           1. 登 陆             ******************\n");
	printf("***************           2. 注 册             ******************\n");
	printf("***************           0. 退 出             ******************\n");
	printf("*****************************************************************\n");
}


int main()
{

	//*******************************与数据库建立连接************************************
	//MYSQL* mysql_init(MYSQL *mysql)
	//如果直接传已经定义好的MYSQL对象，直接初始化；如果mysql是NULL指针，该函数将分配、初始化、并返回新对象地址
	MYSQL* pmysql = mysql_init(NULL); //初始化一个MYSQL对象

	//设置当前数据库编码为gbk编码
	mysql_options(pmysql, MYSQL_SET_CHARSET_NAME, "gbk"); //解决插入汉字信息出错的问题

	//MYSQL *mysql_real_connect(MYSQL *mysql, const char *host, const char *user, const char *passwd, const char *db,
	//                          unsigned int port, const char *unix_socket, unsigned long client_flag)
	//连接成功返回连接句柄的地址,否则返回NULL
	if (!mysql_real_connect(pmysql, "localhost", "root", "1234567", NULL, 0, 0, 0)) //连接本地数据库，db，如果db为NULL，连接会将默认的数据库设为该值
	{
		printf("连接失败的错误信息是：%s\n", mysql_error(pmysql)); //返回最近一次执行Mysql语句失败的信息
	}
	else
	{
		printf("连接数据库成功！\n");
		//创建通讯录数据库
		//int mysql_query(MYSQL *mysql, const char *query)
		//如果查询成功，返回0。如果出现错误，返回非0值
		if (mysql_query(pmysql, "create database if not exists graduate"))
		{
			printf("创建毕业生数据库失败信息：%s\n", mysql_error(pmysql));
		}
		else
		{
			printf("创建毕业生数据库成功！\n");
			if (mysql_query(pmysql, "use graduate"))
			{
				printf("使用毕业生数据库失败信息：%s\n", mysql_error(pmysql));
			}
			else
			{
				printf("使用数据库成功！\n");
				//创建用户表账号密码信息表user，和毕业生信息表graduinfo
				if (mysql_query(pmysql, "create table if not exists user(id int primary key auto_increment,\
													                     account varchar(30) not null unique,\
																		 password varchar(30) not null,\
																		 identity varchar(10))"))
				{
					printf("创建user表失败，失败信息：%s\n", mysql_error(pmysql));
				}
				else
				{
					printf("创建user表成功！\n");
					//默认创建一个管理员账号,如果已存在，则忽略插入，这种方法前提是该字段为主键或者唯一约束//账号：administer 密码：administer
					if (mysql_query(pmysql, "insert ignore into user(account, password, identity) values('administer', 'administer', '管理员')"))
					{
						printf("创建管理员账号和密码错误，错误信息：%s\n", mysql_error(pmysql));
					}
					else
					{
						printf("创建管理员账号和密码成功！\n");
					}
				}
			    if(mysql_query(pmysql, "create table if not exists graduinfo(id int primary key auto_increment,\
					                                          name varchar(10),\
					                                          age int,\
					                                          sex char(5),\
					                                          tele char(12),\
					                                          school varchar(20),\
					                                          enterprise varchar(20),\
					                                          address varchar(20),\
					                                          graduate_id int not null,\
					                                          constraint foreign key(graduate_id) references user(id))"))
				{
					printf("创建graduinfo表失败，失败信息：%s", mysql_error(pmysql));
				}
				else
				{
					printf("创建graduinfo表成功！\n");
				}
				
			}
		}
	}



	//批量插入数据
	//char sql[256] = { 0 };
	//for (int i = 0; i < 5; i++)
	//{
	//	sprintf(sql, "insert into emp values(%d, '00003', '韦一笑', '男', 38, '123456789712345670', '上海', '2005-08-01')", i + 17); //c语言的库函数：将格式化的数据转换为一个字符串
	//	printf("len = %d\n", strlen(sql));
	//	printf("%s\n", sql);
	//	if (mysql_query(pmysql, sql))
	//	{
	//		printf("批量插入数据失败信息：%s\n", mysql_error(pmysql));
	//	}
	//}

	////查询数据
	//if (mysql_query(pmysql, "select * from emp"))
	//{
	//	printf("查询数据失败信息：%s\n", mysql_error(pmysql));
	//}

	////离线结果集（数据放到了客户端，即使与数据库断开连接，数据也在），一般适用于小结果查询
	//MYSQL_RES* result = mysql_store_result(pmysql); //只要存在要查的那张表，即使没有数据，也会返回结果集，只要查询正确的情况下
	//printf("result_row = %d\n", result->row_count);
	//MYSQL_ROW row; //二级指针
	//if (result == NULL)
	//{
	//	printf("结果集为空!\n");
	//}
	////unsigned int mysql_num_fields(MYSQL_RES *result) 	//返回最近查询结果集中的列数 
	////unsigned int mysql_field_count(MYSQL *mysql) //返回最近查询结果集中的列数，如果mysql_store_result()或mysql_use_result()返回NULL，应使用连接句柄（因而没有结果集指针），可调用mysql_field_count()来判断mysql_store_result()是否生成了非空结果。
	////要想传递MYSQL*参量取而代之，请使用无符号整数mysql_field_count(MYSQL *mysql)
	//int num = mysql_num_fields(result);
	//printf("调用num结果集的行数%d\n", num);
	//int num2 = mysql_field_count(pmysql);
	//printf("调用count结果集的行数%d\n", num2);
	////MYSQL_ROW mysql_fetch_row(MYSQL_RES *result) 
	////检索结果集的下一行，如果没有要检索的行或出现了错误，mysql_fetch_row()返回NULL。
	////该函数的返回值应该是一个字符指针数组名
	//for (int i = 0; i < 26; i++)
	//{
	//	mysql_fetch_row(result);
	//	printf("%s \n", (result->current_row)[0]);

	//}
	//while (row = mysql_fetch_row(result))
	//{
	//	printf("**********当前行%d***********\n", result->current_row);
	//	//unsigned long *mysql_fetch_lengths(MYSQL_RES *result)
	//	//无符号长整数的数组表示当前行的各列的大小（不包括任何终结NULL字符）。如果出现错误，返回NULL。
	//	//mysql_fetch_lengths()仅对结果集的当前行有效。如果在调用mysql_fetch_row()之前或检索了结果集中的所有行后调用了它，将返回NULL。
	//	unsigned long* plen = mysql_fetch_lengths(result);
	//	printf("id = %-3s jobnum = %s name = %-9s sex = %-4s age = %s idcard = %s enterydate = %s\n", row[0], row[1], row[2], row[3], row[4], row[5], row[6]);
	//	printf("id = %d jobnum = %d name = %d sex = %d\t age = %d\t idcard = %d\t enterydate = %d\n", plen[0], plen[1], plen[2], plen[3], plen[4], plen[5], plen[6]);
	//}

	//销毁的动态开辟的内存
	//mysql_free_result(result);


	//*****************************主要流程控制****************************


	int input = 0;
	int id = -1; //用于记录当前登陆用户账号信息在表中的id
	do
	{
		menu();
		printf("请输入你的选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//登陆
			switch(login(pmysql, &id)) ////login返回1表示是学生登陆,返回2表示管理者登陆，返回0表示登陆失败
			{
			case 1:
				//进入学生管理平台
				stu_control_platform(pmysql, id);
				break;
			case 2:
				//进入管理者管理平台
				mag_control_platform(pmysql, id);
				break;
			case 0:
				printf("登陆失败！\n");
				break;
			}
			break;
		case 2:
			//注册
			my_register(pmysql);
			break;
		case 0:
			//退出
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input);



	mysql_close(pmysql); //关闭数据库
	return 0;
}