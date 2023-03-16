#define _CRT_SECURE_NO_WARNINGS 1
#include "student.h"
#include <stdio.h>

//学生控制平台菜单函数
void stu_menu()
{
	printf("*****************************************************************\n");
	printf("*********              欢迎进入个人主页                **********\n");
	printf("*****************************************************************\n");
	printf("*********               1.添加个人资料                 **********\n");
	printf("*********               2.删除个人资料                 **********\n");
	printf("*********               3.修改个人资料                 **********\n");
	printf("*********               4.查看个人资料                 **********\n");
	printf("*********               5.查找                         **********\n");
	printf("*********               6.排序                         **********\n");
	printf("*********               0.返回上一层                   **********\n");
	printf("*****************************************************************\n");
}
//查找函数菜单
void search_menu()
{
	printf("*****************************************************************\n");
	printf("*****************************************************************\n");
	printf("*********               1.按姓名查找                   **********\n");
	printf("*********               2.按年龄查找                   **********\n");
	printf("*********               3.按地址查找                   **********\n");
	printf("*********               4.按公司查找                   **********\n");
	printf("*********               5.查找所有信息                 **********\n");
	printf("*********               0.返回上一层                   **********\n");
	printf("*****************************************************************\n");
}
//查看个人资料
Modify_Id browse_profile(MYSQL* pmysql, int id)
{
	char sql[256] = { 0 };
	Modify_Id mi;
	mi.sz = 0;
	sprintf(sql, "select id, name, age, sex, tele, school, enterprise, address from graduinfo where graduate_id = %d", id);
	if (mysql_query(pmysql, sql))
	{
		printf("浏览个人信息失败，原因是：%s\n", mysql_error(pmysql));
	}
	else
	{
		MYSQL_RES* presult = mysql_store_result(pmysql);
		if (presult->row_count == 0)
		{
			printf("个人资料为空！\n");
		}
		else
		{
			//打印信息
			printf("%-6s   %-6s   %-6s   %-14s  %-15s  %-15s  %-15s\n", "姓名", "年龄", "性别", "电话", "学校", "企业", "工作地址");
			MYSQL_ROW row;
			while (row = mysql_fetch_row(presult))
			{
				mi.arr_id[mi.sz++] = atoi(row[0]);
				printf("%-6s   %-6s   %-6s   %-14s  %-15s  %-15s  %-15s\n", row[1], row[2], row[3], row[4], row[5], row[6], row[7]);
			}
		}
		mysql_free_result(presult);
	}
	return mi;
}

//添加个人资料
void add_profile(MYSQL* pmysql, int id)
{
	char name[10] = { 0 };
	int age = 0;
	char sex[4] = { 0 };
	char tele[12] = { 0 };
	char school[20] = { 0 };
	char enterprise[20] = { 0 };
	char address[20] = { 0 };
	printf("请输入姓名：");
	scanf("%s", name);
	printf("请输入年龄：");
	scanf("%d", &age);
	printf("请输入性别：");
	scanf("%s", sex);
	printf("请输入电话号码：");
	scanf("%s", tele);
	printf("请输入毕业学校：");
	scanf("%s", school);
	printf("请输入入职企业：");
	scanf("%s", enterprise);
	printf("请输入工作地址：");
	scanf("%s", address);
	char sql[256] = { 0 };
	//ignore忽略重复添加
	sprintf(sql, "insert ignore into graduinfo(name, age, sex, tele, school, enterprise, address, graduate_id)\
		                         values('%s', %d, '%s', '%s', '%s', '%s', '%s', %d)", name, age, sex, tele, school, enterprise, address, id);
	if (mysql_query(pmysql, sql))
	{
		printf("添加失败，失败原因是：%s\n", mysql_error(pmysql));
	}
	else
	{
		printf("添加成功！\n");
	}
}

//修改个人资料
void modify_profile(MYSQL* pmysql, int id)
{
	//修改前先将个人的全部信息打印出来，修改哪一条
	Modify_Id mi = browse_profile(pmysql, id);
	if (mi.sz > 0)
	{
		int num = 0;
		char sql[256] = { 0 };
		
		printf("信息如上，请输入你要修改哪一条：");
		scanf("%d", &num);
		char name[10] = { 0 };
		int age = 0;
		char sex[4] = { 0 };
		char tele[15] = { 0 };
		char school[20] = { 0 };
		char enterprise[20] = { 0 };
		char address[20] = { 0 };
		int graduinfo_id = id;
		printf("请输入姓名：");
		scanf("%s", name);
		printf("请输入年龄：");
		scanf("%d", &age);
		printf("请输入性别：");
		scanf("%s", sex);
		printf("请输入电话号码：");
		scanf("%s", tele);
		printf("请输入毕业学校：");
		scanf("%s", school);
		printf("请输入入职企业：");
		scanf("%s", enterprise);
		printf("请输入工作地址：");
		scanf("%s", address);
		sprintf(sql, "update graduinfo set name = '%s', age = %d, sex = '%s', tele = '%s', school = '%s', enterprise = '%s', address = '%s' where id = %d", name, age, sex, tele, school, enterprise, address, mi.arr_id[num - 1]);
		if (mysql_query(pmysql, sql))
		{
			printf("修改失败，失败原因是：%s\n", mysql_error(pmysql));
		}
		else
		{
			printf("修改成功！\n");
		}
	}
}

//查找信息
void search_profile(MYSQL* pmysql)
{
	int input = 0;
	char* type[5] = {"", "name", "age", "address", "enterprise"};
	char* chinesetype[5] = { "", "姓名", "年龄", "地址", "企业" };
	char tmp[20] = { 0 };
	do
	{
		search_menu();
		printf("请输入您的选择：");
		scanf("%d", &input);
		if (input >= 1 && input <= 5)
		{
			char sql[256] = { 0 };
			if (input == 5)
			{
				sprintf(sql, "select name, age, sex, tele, school, enterprise, address from graduinfo");
			}
			else
			{
				printf("请输入%s：", chinesetype[input]);
				scanf("%s", tmp);
				sprintf(sql, "select name, age, sex, tele, school, enterprise, address from graduinfo where %s = '%s'", type[input], tmp);
			}
			if (mysql_query(pmysql, sql))
			{
				printf("查找信息失败，原因是：%s\n", mysql_error(pmysql));
			}
			else
			{
				MYSQL_RES* presult = mysql_store_result(pmysql);
				if (presult->row_count == 0)
				{
					printf("没有用户信息！\n");
				}
				else
				{
					//打印信息
					printf("%-6s   %-6s   %-6s   %-14s  %-15s  %-15s  %-15s\n", "姓名", "年龄", "性别", "电话", "学校", "企业", "工作地址");
					MYSQL_ROW row;
					while (row = mysql_fetch_row(presult))
					{
						printf("%-6s   %-6s   %-6s   %-14s  %-15s  %-15s  %-15s\n", row[0], row[1], row[2], row[3], row[4], row[5], row[6]);
					}
				}
				mysql_free_result(presult);
			}
		}
		else if (input != 0)
		{
			printf("输入错误，请重新输入！\n");
		}
	} while (input);
}


//删除个人资料
void delete_profile(MYSQL* pmysql, int id)
{
	Modify_Id mi = browse_profile(pmysql, id);
	if (mi.sz > 0)
	{
		int num = 0;
		printf("请输入你要删除哪一条：");
		scanf("%d", &num);
		char sql[256] = { 0 };
		sprintf(sql, "delete from graduinfo where graduate_id = %d", mi.arr_id[num - 1]);
		if (mysql_query(pmysql, sql))
		{
			printf("删除信息失败，失败原因是：%s\n", mysql_error(pmysql));
		}
		else
		{
			printf("删除成功！\n");
		}
	}
}

//排序--目前按年龄排序
void sort_profile(MYSQL* pmysql)
{
	char sql[256] = { 0 };
	sprintf(sql, "select id, name, age, sex, tele, school, enterprise, address from graduinfo order by age");
	if (mysql_query(pmysql, sql))
	{
		printf("排序失败，原因是：%s\n", mysql_error(pmysql));
	}
	else
	{
		MYSQL_RES* presult = mysql_store_result(pmysql);
		if (presult->row_count == 0)
		{
			printf("没有用户信息！\n");
		}
		else
		{
			//打印信息
			printf("%-6s   %-6s   %-6s   %-14s  %-15s  %-15s  %-15s\n", "姓名", "年龄", "性别", "电话", "学校", "企业", "工作地址");
			MYSQL_ROW row;
			while (row = mysql_fetch_row(presult))
			{
				printf("%-6s   %-6s   %-6s   %-14s  %-15s  %-15s  %-15s\n", row[1], row[2], row[3], row[4], row[5], row[6], row[7]);
			}
		}
		mysql_free_result(presult);
	}
}


//学生控制平台函数
void stu_control_platform(MYSQL* pmysql, int id)
{
	int input = 0;
	do
	{
		stu_menu();
		printf("请输入你的选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//添加个人资料
			add_profile(pmysql, id);
			break;
		case 2:
			//删除个人资料
			delete_profile(pmysql, id);
			break;
		case 3:
			//修改个人资料
			modify_profile(pmysql, id);
			break;
		case 4:
			//查看个人资料
			browse_profile(pmysql, id);
			break;
		case 5:
			//查找毕业生信息
			search_profile(pmysql);
			break;
		case 6:
			//排序
			sort_profile(pmysql);
			break;
		case 0:
			//返回上一层
			break;
		default:
			printf("输入错误，请重新选择！\n");
			break;
		}
	} while (input);
}


