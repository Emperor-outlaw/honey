#define _CRT_SECURE_NO_WARNINGS 1
#include "student.h"
#include <stdio.h>

//ѧ������ƽ̨�˵�����
void stu_menu()
{
	printf("*****************************************************************\n");
	printf("*********              ��ӭ���������ҳ                **********\n");
	printf("*****************************************************************\n");
	printf("*********               1.��Ӹ�������                 **********\n");
	printf("*********               2.ɾ����������                 **********\n");
	printf("*********               3.�޸ĸ�������                 **********\n");
	printf("*********               4.�鿴��������                 **********\n");
	printf("*********               5.����                         **********\n");
	printf("*********               6.����                         **********\n");
	printf("*********               0.������һ��                   **********\n");
	printf("*****************************************************************\n");
}
//���Һ����˵�
void search_menu()
{
	printf("*****************************************************************\n");
	printf("*****************************************************************\n");
	printf("*********               1.����������                   **********\n");
	printf("*********               2.���������                   **********\n");
	printf("*********               3.����ַ����                   **********\n");
	printf("*********               4.����˾����                   **********\n");
	printf("*********               5.����������Ϣ                 **********\n");
	printf("*********               0.������һ��                   **********\n");
	printf("*****************************************************************\n");
}
//�鿴��������
Modify_Id browse_profile(MYSQL* pmysql, int id)
{
	char sql[256] = { 0 };
	Modify_Id mi;
	mi.sz = 0;
	sprintf(sql, "select id, name, age, sex, tele, school, enterprise, address from graduinfo where graduate_id = %d", id);
	if (mysql_query(pmysql, sql))
	{
		printf("���������Ϣʧ�ܣ�ԭ���ǣ�%s\n", mysql_error(pmysql));
	}
	else
	{
		MYSQL_RES* presult = mysql_store_result(pmysql);
		if (presult->row_count == 0)
		{
			printf("��������Ϊ�գ�\n");
		}
		else
		{
			//��ӡ��Ϣ
			printf("%-6s   %-6s   %-6s   %-14s  %-15s  %-15s  %-15s\n", "����", "����", "�Ա�", "�绰", "ѧУ", "��ҵ", "������ַ");
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

//��Ӹ�������
void add_profile(MYSQL* pmysql, int id)
{
	char name[10] = { 0 };
	int age = 0;
	char sex[4] = { 0 };
	char tele[12] = { 0 };
	char school[20] = { 0 };
	char enterprise[20] = { 0 };
	char address[20] = { 0 };
	printf("������������");
	scanf("%s", name);
	printf("���������䣺");
	scanf("%d", &age);
	printf("�������Ա�");
	scanf("%s", sex);
	printf("������绰���룺");
	scanf("%s", tele);
	printf("�������ҵѧУ��");
	scanf("%s", school);
	printf("��������ְ��ҵ��");
	scanf("%s", enterprise);
	printf("�����빤����ַ��");
	scanf("%s", address);
	char sql[256] = { 0 };
	//ignore�����ظ����
	sprintf(sql, "insert ignore into graduinfo(name, age, sex, tele, school, enterprise, address, graduate_id)\
		                         values('%s', %d, '%s', '%s', '%s', '%s', '%s', %d)", name, age, sex, tele, school, enterprise, address, id);
	if (mysql_query(pmysql, sql))
	{
		printf("���ʧ�ܣ�ʧ��ԭ���ǣ�%s\n", mysql_error(pmysql));
	}
	else
	{
		printf("��ӳɹ���\n");
	}
}

//�޸ĸ�������
void modify_profile(MYSQL* pmysql, int id)
{
	//�޸�ǰ�Ƚ����˵�ȫ����Ϣ��ӡ�������޸���һ��
	Modify_Id mi = browse_profile(pmysql, id);
	if (mi.sz > 0)
	{
		int num = 0;
		char sql[256] = { 0 };
		
		printf("��Ϣ���ϣ���������Ҫ�޸���һ����");
		scanf("%d", &num);
		char name[10] = { 0 };
		int age = 0;
		char sex[4] = { 0 };
		char tele[15] = { 0 };
		char school[20] = { 0 };
		char enterprise[20] = { 0 };
		char address[20] = { 0 };
		int graduinfo_id = id;
		printf("������������");
		scanf("%s", name);
		printf("���������䣺");
		scanf("%d", &age);
		printf("�������Ա�");
		scanf("%s", sex);
		printf("������绰���룺");
		scanf("%s", tele);
		printf("�������ҵѧУ��");
		scanf("%s", school);
		printf("��������ְ��ҵ��");
		scanf("%s", enterprise);
		printf("�����빤����ַ��");
		scanf("%s", address);
		sprintf(sql, "update graduinfo set name = '%s', age = %d, sex = '%s', tele = '%s', school = '%s', enterprise = '%s', address = '%s' where id = %d", name, age, sex, tele, school, enterprise, address, mi.arr_id[num - 1]);
		if (mysql_query(pmysql, sql))
		{
			printf("�޸�ʧ�ܣ�ʧ��ԭ���ǣ�%s\n", mysql_error(pmysql));
		}
		else
		{
			printf("�޸ĳɹ���\n");
		}
	}
}

//������Ϣ
void search_profile(MYSQL* pmysql)
{
	int input = 0;
	char* type[5] = {"", "name", "age", "address", "enterprise"};
	char* chinesetype[5] = { "", "����", "����", "��ַ", "��ҵ" };
	char tmp[20] = { 0 };
	do
	{
		search_menu();
		printf("����������ѡ��");
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
				printf("������%s��", chinesetype[input]);
				scanf("%s", tmp);
				sprintf(sql, "select name, age, sex, tele, school, enterprise, address from graduinfo where %s = '%s'", type[input], tmp);
			}
			if (mysql_query(pmysql, sql))
			{
				printf("������Ϣʧ�ܣ�ԭ���ǣ�%s\n", mysql_error(pmysql));
			}
			else
			{
				MYSQL_RES* presult = mysql_store_result(pmysql);
				if (presult->row_count == 0)
				{
					printf("û���û���Ϣ��\n");
				}
				else
				{
					//��ӡ��Ϣ
					printf("%-6s   %-6s   %-6s   %-14s  %-15s  %-15s  %-15s\n", "����", "����", "�Ա�", "�绰", "ѧУ", "��ҵ", "������ַ");
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
			printf("����������������룡\n");
		}
	} while (input);
}


//ɾ����������
void delete_profile(MYSQL* pmysql, int id)
{
	Modify_Id mi = browse_profile(pmysql, id);
	if (mi.sz > 0)
	{
		int num = 0;
		printf("��������Ҫɾ����һ����");
		scanf("%d", &num);
		char sql[256] = { 0 };
		sprintf(sql, "delete from graduinfo where graduate_id = %d", mi.arr_id[num - 1]);
		if (mysql_query(pmysql, sql))
		{
			printf("ɾ����Ϣʧ�ܣ�ʧ��ԭ���ǣ�%s\n", mysql_error(pmysql));
		}
		else
		{
			printf("ɾ���ɹ���\n");
		}
	}
}

//����--Ŀǰ����������
void sort_profile(MYSQL* pmysql)
{
	char sql[256] = { 0 };
	sprintf(sql, "select id, name, age, sex, tele, school, enterprise, address from graduinfo order by age");
	if (mysql_query(pmysql, sql))
	{
		printf("����ʧ�ܣ�ԭ���ǣ�%s\n", mysql_error(pmysql));
	}
	else
	{
		MYSQL_RES* presult = mysql_store_result(pmysql);
		if (presult->row_count == 0)
		{
			printf("û���û���Ϣ��\n");
		}
		else
		{
			//��ӡ��Ϣ
			printf("%-6s   %-6s   %-6s   %-14s  %-15s  %-15s  %-15s\n", "����", "����", "�Ա�", "�绰", "ѧУ", "��ҵ", "������ַ");
			MYSQL_ROW row;
			while (row = mysql_fetch_row(presult))
			{
				printf("%-6s   %-6s   %-6s   %-14s  %-15s  %-15s  %-15s\n", row[1], row[2], row[3], row[4], row[5], row[6], row[7]);
			}
		}
		mysql_free_result(presult);
	}
}


//ѧ������ƽ̨����
void stu_control_platform(MYSQL* pmysql, int id)
{
	int input = 0;
	do
	{
		stu_menu();
		printf("���������ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//��Ӹ�������
			add_profile(pmysql, id);
			break;
		case 2:
			//ɾ����������
			delete_profile(pmysql, id);
			break;
		case 3:
			//�޸ĸ�������
			modify_profile(pmysql, id);
			break;
		case 4:
			//�鿴��������
			browse_profile(pmysql, id);
			break;
		case 5:
			//���ұ�ҵ����Ϣ
			search_profile(pmysql);
			break;
		case 6:
			//����
			sort_profile(pmysql);
			break;
		case 0:
			//������һ��
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}
	} while (input);
}


