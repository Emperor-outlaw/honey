#define _CRT_SECURE_NO_WARNINGS 1

#include "control.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//��½����
int login(MYSQL* pmysql, int* pid)
{
	char account[100] = { 0 }; //�洢�û���
	char password[100] = { 0 }; //�洢����
	char identity[10] = { 0 }; //�洢�����Ϣ
	printf("�������û�����");
	scanf("%s", account);
	printf("���������룺");
	scanf("%s", password);

	//�����ݿ���ƥ���û���������
	char sql[256] = { 0 };
	sprintf(sql, "select id, account, password, identity from user where account = '%s' and password = '%s'", account, password); //��user���в���
	if (mysql_query(pmysql, sql))
	{
		printf("�������ִ��ʧ����Ϣ��%s", mysql_error(pmysql));
	}

	MYSQL_RES* presult = mysql_store_result(pmysql); //��ȡ��ѯ�����
	MYSQL_ROW row = NULL;
	row = mysql_fetch_row(presult);
	if (row != NULL) //�и��û�����һ��ƥ�����롣��Ϊaccount�ֶ���Ψһ��
	{
		if (0 == strcmp(row[2], password)) //����ƥ����ȷ
		{
			//��½�ɹ�
			printf("��½�ɹ���\n");
			if (0 == strcmp(row[3], "ѧ��")) //ѧ���û�
			{
				//��user���Ӧ���id����
				*pid = atoi(row[0]); //int atoi( const char *string );�⺯�����ַ���ת������Ӧ������
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
			printf("�������, ���������룡\n");
			return 0;
		}
	}
	else
	{
		printf("û�д��û���\n");
		return 0;
	}
}

//ע���û���������
void my_register(MYSQL* pmysql)
{
	char account[100] = { 0 };
	char password[100] = { 0 };
	char sql[256] = { 0 };
	printf("�������û�����");
	scanf("%s", account);
	printf("���������룺");
	scanf("%s", password);
	sprintf(sql, "insert into user(account, password, identity) values('%s', '%s', 'ѧ��')", account, password);
	if (mysql_query(pmysql, sql))
	{
		printf("���û����ѱ�ռ�ã�������ѡ��\n");
		return;
	}
	else
	{
		printf("ע��ɹ���\n");
	}
}
