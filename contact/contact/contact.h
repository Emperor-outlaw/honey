#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DEFAULT_MAX 2 //ͨѶ¼��Ĭ�ϴ�С
#define SCALE 2 //ͨѶ¼ÿ���������ӵķ���

//��ϵ�˵���Ϣ
typedef struct PerInfo
{
	char name[10]; //����
	int age; //����
	char sex[5]; //�Ա�
	char tele[12]; //�绰
	char addr[20]; //��ַ
}PerInfo;

//ͨѶ¼
typedef struct Contact
{
	int sz; //ͨѶ¼���˵ĸ���
	int capacity; //ͨѶ¼�������
	PerInfo* data; //ָ������ϵ����Ϣ�����飬����ռ䶯̬����
}Contact;

//��ʼ��ͨѶ¼
void initContact(Contact* pcon);

//�����ϵ��
void addContact(Contact* pcon);

//ɾ����ϵ��
void delContact(Contact* pcon);

//������ϵ��
void searchContact(const Contact* pcon);

//�޸���ϵ��
void modifyContact(Contact* pcon);

//��ʾȫ����ϵ��
void showContact(const Contact* pcon);

//�����ϵ��
void emptyContact(Contact* pcon);

//������ϵ��
void sortContact(Contact* pcon);