#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100 //ͨѶ¼�Ĵ�С

//�˵���Ϣ
typedef struct PerInfo
{
	char name[10];
	int age;
	char sex[5];
	char tele[12];
	char addr[20];
}PerInfo;

//ͨѶ¼
typedef struct Contact
{
	int sz; //ͨѶ¼���˵ĸ���
	PerInfo data[MAX]; //���100���˵���Ϣ
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