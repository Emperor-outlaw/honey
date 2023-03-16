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
	printf("***************           1. �� ½             ******************\n");
	printf("***************           2. ע ��             ******************\n");
	printf("***************           0. �� ��             ******************\n");
	printf("*****************************************************************\n");
}


int main()
{

	//*******************************�����ݿ⽨������************************************
	//MYSQL* mysql_init(MYSQL *mysql)
	//���ֱ�Ӵ��Ѿ�����õ�MYSQL����ֱ�ӳ�ʼ�������mysql��NULLָ�룬�ú��������䡢��ʼ�����������¶����ַ
	MYSQL* pmysql = mysql_init(NULL); //��ʼ��һ��MYSQL����

	//���õ�ǰ���ݿ����Ϊgbk����
	mysql_options(pmysql, MYSQL_SET_CHARSET_NAME, "gbk"); //������뺺����Ϣ���������

	//MYSQL *mysql_real_connect(MYSQL *mysql, const char *host, const char *user, const char *passwd, const char *db,
	//                          unsigned int port, const char *unix_socket, unsigned long client_flag)
	//���ӳɹ��������Ӿ���ĵ�ַ,���򷵻�NULL
	if (!mysql_real_connect(pmysql, "localhost", "root", "1234567", NULL, 0, 0, 0)) //���ӱ������ݿ⣬db�����dbΪNULL�����ӻὫĬ�ϵ����ݿ���Ϊ��ֵ
	{
		printf("����ʧ�ܵĴ�����Ϣ�ǣ�%s\n", mysql_error(pmysql)); //�������һ��ִ��Mysql���ʧ�ܵ���Ϣ
	}
	else
	{
		printf("�������ݿ�ɹ���\n");
		//����ͨѶ¼���ݿ�
		//int mysql_query(MYSQL *mysql, const char *query)
		//�����ѯ�ɹ�������0��������ִ��󣬷��ط�0ֵ
		if (mysql_query(pmysql, "create database if not exists graduate"))
		{
			printf("������ҵ�����ݿ�ʧ����Ϣ��%s\n", mysql_error(pmysql));
		}
		else
		{
			printf("������ҵ�����ݿ�ɹ���\n");
			if (mysql_query(pmysql, "use graduate"))
			{
				printf("ʹ�ñ�ҵ�����ݿ�ʧ����Ϣ��%s\n", mysql_error(pmysql));
			}
			else
			{
				printf("ʹ�����ݿ�ɹ���\n");
				//�����û����˺�������Ϣ��user���ͱ�ҵ����Ϣ��graduinfo
				if (mysql_query(pmysql, "create table if not exists user(id int primary key auto_increment,\
													                     account varchar(30) not null unique,\
																		 password varchar(30) not null,\
																		 identity varchar(10))"))
				{
					printf("����user��ʧ�ܣ�ʧ����Ϣ��%s\n", mysql_error(pmysql));
				}
				else
				{
					printf("����user��ɹ���\n");
					//Ĭ�ϴ���һ������Ա�˺�,����Ѵ��ڣ�����Բ��룬���ַ���ǰ���Ǹ��ֶ�Ϊ��������ΨһԼ��//�˺ţ�administer ���룺administer
					if (mysql_query(pmysql, "insert ignore into user(account, password, identity) values('administer', 'administer', '����Ա')"))
					{
						printf("��������Ա�˺ź�������󣬴�����Ϣ��%s\n", mysql_error(pmysql));
					}
					else
					{
						printf("��������Ա�˺ź�����ɹ���\n");
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
					printf("����graduinfo��ʧ�ܣ�ʧ����Ϣ��%s", mysql_error(pmysql));
				}
				else
				{
					printf("����graduinfo��ɹ���\n");
				}
				
			}
		}
	}



	//������������
	//char sql[256] = { 0 };
	//for (int i = 0; i < 5; i++)
	//{
	//	sprintf(sql, "insert into emp values(%d, '00003', 'ΤһЦ', '��', 38, '123456789712345670', '�Ϻ�', '2005-08-01')", i + 17); //c���ԵĿ⺯��������ʽ��������ת��Ϊһ���ַ���
	//	printf("len = %d\n", strlen(sql));
	//	printf("%s\n", sql);
	//	if (mysql_query(pmysql, sql))
	//	{
	//		printf("������������ʧ����Ϣ��%s\n", mysql_error(pmysql));
	//	}
	//}

	////��ѯ����
	//if (mysql_query(pmysql, "select * from emp"))
	//{
	//	printf("��ѯ����ʧ����Ϣ��%s\n", mysql_error(pmysql));
	//}

	////���߽���������ݷŵ��˿ͻ��ˣ���ʹ�����ݿ�Ͽ����ӣ�����Ҳ�ڣ���һ��������С�����ѯ
	//MYSQL_RES* result = mysql_store_result(pmysql); //ֻҪ����Ҫ������ű���ʹû�����ݣ�Ҳ�᷵�ؽ������ֻҪ��ѯ��ȷ�������
	//printf("result_row = %d\n", result->row_count);
	//MYSQL_ROW row; //����ָ��
	//if (result == NULL)
	//{
	//	printf("�����Ϊ��!\n");
	//}
	////unsigned int mysql_num_fields(MYSQL_RES *result) 	//���������ѯ������е����� 
	////unsigned int mysql_field_count(MYSQL *mysql) //���������ѯ������е����������mysql_store_result()��mysql_use_result()����NULL��Ӧʹ�����Ӿ�������û�н����ָ�룩���ɵ���mysql_field_count()���ж�mysql_store_result()�Ƿ������˷ǿս����
	////Ҫ�봫��MYSQL*����ȡ����֮����ʹ���޷�������mysql_field_count(MYSQL *mysql)
	//int num = mysql_num_fields(result);
	//printf("����num�����������%d\n", num);
	//int num2 = mysql_field_count(pmysql);
	//printf("����count�����������%d\n", num2);
	////MYSQL_ROW mysql_fetch_row(MYSQL_RES *result) 
	////�������������һ�У����û��Ҫ�������л�����˴���mysql_fetch_row()����NULL��
	////�ú����ķ���ֵӦ����һ���ַ�ָ��������
	//for (int i = 0; i < 26; i++)
	//{
	//	mysql_fetch_row(result);
	//	printf("%s \n", (result->current_row)[0]);

	//}
	//while (row = mysql_fetch_row(result))
	//{
	//	printf("**********��ǰ��%d***********\n", result->current_row);
	//	//unsigned long *mysql_fetch_lengths(MYSQL_RES *result)
	//	//�޷��ų������������ʾ��ǰ�еĸ��еĴ�С���������κ��ս�NULL�ַ�����������ִ��󣬷���NULL��
	//	//mysql_fetch_lengths()���Խ�����ĵ�ǰ����Ч������ڵ���mysql_fetch_row()֮ǰ������˽�����е������к����������������NULL��
	//	unsigned long* plen = mysql_fetch_lengths(result);
	//	printf("id = %-3s jobnum = %s name = %-9s sex = %-4s age = %s idcard = %s enterydate = %s\n", row[0], row[1], row[2], row[3], row[4], row[5], row[6]);
	//	printf("id = %d jobnum = %d name = %d sex = %d\t age = %d\t idcard = %d\t enterydate = %d\n", plen[0], plen[1], plen[2], plen[3], plen[4], plen[5], plen[6]);
	//}

	//���ٵĶ�̬���ٵ��ڴ�
	//mysql_free_result(result);


	//*****************************��Ҫ���̿���****************************


	int input = 0;
	int id = -1; //���ڼ�¼��ǰ��½�û��˺���Ϣ�ڱ��е�id
	do
	{
		menu();
		printf("���������ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//��½
			switch(login(pmysql, &id)) ////login����1��ʾ��ѧ����½,����2��ʾ�����ߵ�½������0��ʾ��½ʧ��
			{
			case 1:
				//����ѧ������ƽ̨
				stu_control_platform(pmysql, id);
				break;
			case 2:
				//��������߹���ƽ̨
				mag_control_platform(pmysql, id);
				break;
			case 0:
				printf("��½ʧ�ܣ�\n");
				break;
			}
			break;
		case 2:
			//ע��
			my_register(pmysql);
			break;
		case 0:
			//�˳�
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while (input);



	mysql_close(pmysql); //�ر����ݿ�
	return 0;
}