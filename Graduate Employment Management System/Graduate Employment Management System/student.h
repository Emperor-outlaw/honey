
#include <mysql.h>
#define MAX 50
typedef struct Modify_Id //��¼���ҵ�����Ϣ�ڱ��ж�Ӧ��id
{
	int arr_id[MAX]; //���id
	int sz; //��¼�����е�Ԫ�ظ���
}Modify_Id;

void stu_menu(); //ѧ������ƽ̨�˵�����

void search_menu(); //���Һ����˵�

void stu_control_platform(MYSQL* pmysql, int id); //ѧ�����ƹ���ƽ̨

Modify_Id browse_profile(MYSQL* pmysql, int id); //�鿴��������

void add_profile(MYSQL* pmysql, int id); //��Ӹ�������

void modify_profile(MYSQL* pmysql, int id); //�޸ĸ�������

void delete_profile(MYSQL* pmysql,int id); //ɾ����������

void search_profile(MYSQL* pmysql); //������Ϣ

void sort_profile(MYSQL* pmysql); //����



