#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"


static void print_SeaCon(S* pS1)
{
	printf("�����Ľ����:>\n");
	int i = 0;
	for (i = 0; i < pS1->tmp; i++)
	{
		printf("%s", (*pS1).arr[i]);
	}
}
static int Find_byname(Contact* pcon)
{
	assert(pcon);
	S S1 = { { 0 }, 0 };
	int flag = 0;
	int i = 0;
	int j = 0;
	int arr[MAX] = { 1 };
	char name[NAME_MAX] = { 0 };
	printf("�����������˵�����:>");
	scanf("%s", name);
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->date[i].NAME, name) == 0)
		{
			for (j = 0;; j++)
			{
				flag = 1;
				S1.arr[j]= i;
				S1.tmp = j;
				break;
			}
		}
	}
	if (flag == 0)
	{
		S1.tmp = -1;
		return &S1;
	}
	else
	{
		return &S1;
	}
	print_SeaCon(&S1);
}
static int Find_byage(Contact* pcon)
{
	assert(pcon);
	int i = 0;
	char age = 0;
	printf("�����������˵�����:>");
	scanf("%s", age);
	for (i = 0; i < pcon->sz; i++)
	{
		if (pcon->date[i].AGE == age)
		{
			return i;
		}
	}
	return -1;
}
static int Find_bysex(Contact* pcon)
{
	assert(pcon);
	int i = 0;
	char sex[SEX_MAX] = { 0 };
	printf("�����������˵��Ա�:>");
	scanf("%s", sex);
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->date[i].SEX, sex) == 0)
		{
			return i;
		}
	}
	return -1;
}
static int Find_bytele(Contact* pcon)
{
	assert(pcon);
	int i = 0;
	char tele[TELE_MAX] = { 0 };
	printf("�����������˵ĵ绰:>");
	scanf("%s", tele);
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->date[i].TELE, tele) == 0)
		{
			return i;
		}
		return -1;
	}
}
static int Find_byaddr(Contact* pcon)
{
	assert(pcon);
	int i = 0;
	char addr[NAME_MAX] = { 0 };
	printf("�����������˵ĵ�ַ:>");
	scanf("%s", addr);
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->date[i].ADDR, addr) == 0)
		{
			return i;
		}
	}
	return -1;
}
void InitContact(Contact* pcon)
{
	assert(pcon);
	pcon->sz = 0;
	memset(pcon->date, 0, sizeof(pcon->date));
}
void SEARCH_Contact(Contact* pcon)
{
	int input = 0;
	do
	{
		printf("************************************************\n");
		printf("********   1.By name       2.By age        *****\n");
		printf("********   3.By sex        4.By telephone  *****\n");
		printf("********   5.By address    6.EXIT          *****\n");
		printf("************************************************\n");
		printf("��������Ҫ������ʽ:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Find_byname(pcon);
			break;
		case 2:
			Find_byage(pcon);
			break;
		case 3:
			Find_bysex(pcon);
			break;
		case 4:
			Find_bytele(pcon);
			break;
		case 5:
			Find_byaddr(pcon);
			break;
		case 0:
			printf("�˳�������\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while (input);
}
void ADD_Contact(Contact* pcon)
{
	assert(pcon);
	//�ж�ͨѶ¼�Ƿ�����
	if (pcon->sz == MAX)
	{
		printf("ͨѶ¼������\n");
		return;
	}
	printf("����������:>");
	scanf("%s", pcon->date[pcon->sz].NAME);
	printf("�������Ա�:>");
	scanf("%s", pcon->date[pcon->sz].SEX);
	printf("����������:>");
	scanf("%d", &(pcon->date[pcon->sz].AGE));
	printf("������绰:>");
	scanf("%s", pcon->date[pcon->sz].TELE);
	printf("�������ַ:>");
	scanf("%s", pcon->date[pcon->sz].ADDR);
	pcon->sz++;
	printf("¼��ɹ�!\n");
}
void DELE_Contact(Contact* pcon)
{
	assert(pcon);
	int i = 0;
	//char Name[NAME_MAX] = { 0 };
	//�ж�ͨѶ¼�Ƿ�Ϊ��
	if (pcon->sz == 0)
	{
		printf("ͨѶ¼Ϊ��,�޷�ɾ����\n");
		return;
	}
	//printf("������Ҫɾ���˵�����:>");
	//scanf("%s", Name);
	//������ϵ��
	S* pos = Find_byname(pcon);
	if ((*pos).tmp == -1)
	{
		printf("��ͨѶ¼û�и��ˣ�\n");
		return;
	}
	//ɾ����ϵ��
	for (i = pos; i < pcon->sz; i++)
	{
		pcon->date[i] = pcon->date[i + 1];
	}
	pcon->sz--;
	printf("ɾ���ɹ���\n");
}

void SHOW_Contact(Contact* pcon)
{
	assert(pcon);
	printf("%-8s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	int i = 0;
	for (i = 0; i < pcon->sz; i++)
	{
		printf("%-8s\t%-5s\t%-5s\t%-12s\t%-20s\n",pcon->date[i].NAME,pcon->date[i].SEX,pcon->date[i].AGE,pcon->date[i].TELE,pcon->date[i].ADDR);
	}
	if (i == 0)
	{
		printf("%-8s\t%-5s\t%-5s\t%-12s\t%-20s\n", "[��]", "[��]", "[��]", "[��]", "[��]");
	}
}
