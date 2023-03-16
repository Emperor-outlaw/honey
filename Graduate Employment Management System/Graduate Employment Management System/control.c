#define _CRT_SECURE_NO_WARNINGS 1

#include "control.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//登陆函数
int login(MYSQL* pmysql, int* pid)
{
	char account[100] = { 0 }; //存储用户名
	char password[100] = { 0 }; //存储密码
	char identity[10] = { 0 }; //存储身份信息
	printf("请输入用户名：");
	scanf("%s", account);
	printf("请输入密码：");
	scanf("%s", password);

	//在数据库中匹配用户名和密码
	char sql[256] = { 0 };
	sprintf(sql, "select id, account, password, identity from user where account = '%s' and password = '%s'", account, password); //从user表中查找
	if (mysql_query(pmysql, sql))
	{
		printf("查找语句执行失败信息：%s", mysql_error(pmysql));
	}

	MYSQL_RES* presult = mysql_store_result(pmysql); //获取查询结果集
	MYSQL_ROW row = NULL;
	row = mysql_fetch_row(presult);
	if (row != NULL) //有该用户，进一步匹配密码。因为account字段是唯一的
	{
		if (0 == strcmp(row[2], password)) //密码匹配正确
		{
			//登陆成功
			printf("登陆成功！\n");
			if (0 == strcmp(row[3], "学生")) //学生用户
			{
				//将user表对应项的id返回
				*pid = atoi(row[0]); //int atoi( const char *string );库函数将字符串转换成相应的整形
				return 1;
			}
			else
			{
				*pid = atoi(row[0]);
				return 2;
			}
		}
		else
		{
			printf("密码错误, 请重新输入！\n");
			return 0;
		}
	}
	else
	{
		printf("没有此用户！\n");
		return 0;
	}
}

//注册用户名和密码
void my_register(MYSQL* pmysql)
{
	char account[100] = { 0 };
	char password[100] = { 0 };
	char sql[256] = { 0 };
	printf("请输入用户名：");
	scanf("%s", account);
	printf("请输入密码：");
	scanf("%s", password);
	sprintf(sql, "insert into user(account, password, identity) values('%s', '%s', '学生')", account, password);
	if (mysql_query(pmysql, sql))
	{
		printf("此用户名已被占用，请重新选择！\n");
		return;
	}
	else
	{
		printf("注册成功！\n");
	}
}
