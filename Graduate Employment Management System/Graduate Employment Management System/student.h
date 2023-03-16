
#include <mysql.h>
#define MAX 50
typedef struct Modify_Id //记录查找到的信息在表中对应的id
{
	int arr_id[MAX]; //存放id
	int sz; //记录数组中的元素个数
}Modify_Id;

void stu_menu(); //学生控制平台菜单函数

void search_menu(); //查找函数菜单

void stu_control_platform(MYSQL* pmysql, int id); //学生控制管理平台

Modify_Id browse_profile(MYSQL* pmysql, int id); //查看个人资料

void add_profile(MYSQL* pmysql, int id); //添加个人资料

void modify_profile(MYSQL* pmysql, int id); //修改个人资料

void delete_profile(MYSQL* pmysql,int id); //删除个人资料

void search_profile(MYSQL* pmysql); //查找信息

void sort_profile(MYSQL* pmysql); //排序



