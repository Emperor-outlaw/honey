#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
S ret = { { 0 }, 0 };

void menu1()
{
	printf("************************************************\n");
	printf("********   1.By name       2.By age        *****\n");
	printf("********   3.By sex        4.By telephone  *****\n");
	printf("********   5.By address    0.EXIT          *****\n");
	printf("************************************************\n");
}
static void print(Contact* pcon,S* ppos)
{
	printf("�����Ľ����:>\n");
	printf("%-8s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	int i = 0;
	int j = 0;
	for (; j < ppos->tmp; j++)
	{
		i = ppos->arr[j];
		printf("%-8s\t%-5s\t%-5d\t%-12s\t%-20s\n", pcon->date[i].NAME, pcon->date[i].SEX, pcon->date[i].AGE, pcon->date[i].TELE, pcon->date[i].ADDR);
	}
}

 S* Find_byname(Contact* pcon,char* pname)
{
	assert(pcon && pname);
	memset(&ret, 0, sizeof(ret));
	int flag = 0;
	int i = 0;
	int count = 0;
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->date[i].NAME, pname) == 0)
		{
			flag = 1;
			ret.arr[count] = i;
			ret.tmp = count+1;
			count++;
		}
	}
	if (flag == 1)
		return &ret;
	else
	{
		ret.tmp = -1;
		return &ret;
	}
}
 S* Find_byage(Contact* pcon,int* page)
{
	assert(pcon && page);
	memset(&ret, 0, sizeof(ret));
	int flag = 0;
	int count = 0;
	int i = 0;
	for (i = 0; i < pcon->sz; i++)
	{
		if (pcon->date[i].AGE == *page)
		{
			flag = 1;
			ret.arr[count] = i;
			ret.tmp = count + 1;
			count++;
		}
	}
	if (flag == 1)
		return &ret;
	else
	{
		ret.tmp = -1;
		return &ret;
	}
}
S* Find_bysex(Contact* pcon,char* psex)
{
	assert(pcon && psex);
	memset(&ret, 0, sizeof(ret));
	int flag = 0;
	int count = 0;
	int i = 0;
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->date[i].SEX, psex) == 0)
		{
			flag = 1;
			ret.arr[count] = i;
			ret.tmp = count + 1;
			count++;
		}
	}
	if (flag == 1)
		return &ret;
	else
	{
		ret.tmp = -1;
		return &ret;
	}
}
S* Find_bytele(Contact* pcon,char* ptele)
{
	assert(pcon && ptele);
	memset(&ret, 0, sizeof(ret));
	int flag = 0;
	int count = 0;
	int i = 0;
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->date[i].TELE, ptele) == 0)
		{
			flag = 1;
			ret.arr[count] = i;
			ret.tmp = count + 1;
			count++;
		}
	}
	if (flag == 1)
		return &ret;
	else
	{
		ret.tmp = -1;
		return &ret;
	}
}
S* Find_byaddr(Contact* pcon,char* paddr)
{
	assert(pcon);
	memset(&ret, 0, sizeof(ret));
	int i = 0;
	int flag = 0;
	int count = 0;
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->date[i].ADDR, paddr) == 0)
		{
			flag = 1;
			ret.arr[count] = i;
			ret.tmp = count + 1;
			count++;
		}
	}
	if (flag == 1)
		return &ret;
	else
	{
		ret.tmp = -1;
		return &ret;
	}
}
void InitContact(Contact* pcon)
{
	assert(pcon);
	pcon->sz = 0;
	memset(pcon->date, 0, sizeof(pcon->date));
}

void SEARCH_Contact(Contact* pcon)
{
	//1.�ж�ͨѶ¼�Ƿ�Ϊ��
	if (pcon->sz == 0)
	{
		printf("ͨѶ¼Ϊ��,�޷�ɾ����\n");
		return;
	}
	S* pos = NULL;
	int input = 0;
	//����һ���˵���Ϣ�ṹ��
	Peoinfor Option;
	//��ʼ��
	memset(&Option, 0, sizeof(Option));
	//������ϵ��
	do
	{
		menu1();
		printf("��������Ҫ������ʽ:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������Ҫ�����˵�����:>");
			scanf("%s", Option.NAME);
		    pos = Find_byname(pcon, Option.NAME);
			if (pos->tmp == -1)
				printf("û�и���ϵ�ˣ�\n");
			else
			    print(pcon, pos);
			break;
		case 2:
			printf("������Ҫ�����˵�����:>");
			scanf("%d", &(Option.AGE));
			pos = Find_byage(pcon, &(Option.AGE));
			if (pos->tmp == -1)
				printf("û�и���ϵ�ˣ�\n");
			else
				print(pcon, pos);
			break;
		case 3:
			printf("������Ҫ�����˵��Ա�:>");
			scanf("%s", Option.SEX);
			pos = Find_bysex(pcon, Option.SEX);
			if (pos->tmp == -1)
				printf("û�и���ϵ�ˣ�\n");
			else
				print(pcon, pos);
			break;
		case 4:
			printf("������Ҫ�����˵ĵ绰:>");
			scanf("%s", Option.TELE);
			pos = Find_bytele(pcon, Option.TELE);
			if (pos->tmp == -1)
				printf("û�и���ϵ�ˣ�\n");
			else
				print(pcon, pos);
			break;
		case 5:
			printf("������Ҫ�����˵ĵ�ַ:>");
			scanf("%s", Option.ADDR);
			pos = Find_byaddr(pcon,Option.ADDR);
			if (pos->tmp == -1)
				printf("û�и���ϵ�ˣ�\n");
			else
				print(pcon, pos);
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
	//����һ���˵���Ϣ�ṹ��
	Peoinfor Option;
	//��ʼ��
	memset(&Option, 0, sizeof(Option));
	int input = 0;
	int input1 = 0;
	S* pos = NULL;
	int i = 0;
	//1.�ж�ͨѶ¼�Ƿ�Ϊ��
	if (pcon->sz == 0)
	{
		printf("ͨѶ¼Ϊ��,�޷�ɾ����\n");
		return;
	}
	//2.������ϵ��
	//3.ɾ����ϵ��
	do
	{
		menu1();
		printf("��ѡ����Ҫͨ�����ַ�ʽ��ɾ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������Ҫɾ���˵�����:>");
			scanf("%s", Option.NAME);
			pos = Find_byname(pcon, Option.NAME);//������ϵ��
			if (pos->tmp == -1)
				printf("û�и���ϵ�ˣ�\n");
		    if ((pos->tmp) > 1)
			{
				printf("��ͨѶ¼�ж����Ϣ��ͬ����ϵ�ˣ�\n");
				print(pcon, pos);
				printf("��������Ҫɾ���ڼ�����:>");
				scanf("%d", &input1);
				pos->arr[0] = pos->arr[input1-1];
				pos->tmp = 1;
			}
			if ((pos->tmp) == 1)//ɾ����ϵ��
			{
				for (i = pos->arr[0]; i < pcon->sz; i++)
				{
					pcon->date[i] = pcon->date[i + 1];
				}
				pcon->sz--;
				printf("ɾ���ɹ���\n");
			}
			break;
		case 2:
			printf("������Ҫɾ���˵�����:>");
			scanf("%d", &(Option.AGE));
			pos = Find_byage(pcon, &(Option.AGE));
			if (pos->tmp == -1)
				printf("û�и���ϵ�ˣ�\n");
			if ((pos->tmp) >1)
			{
				printf("��ͨѶ¼�ж����Ϣ��ͬ����ϵ�ˣ�\n");
				print(pcon, pos);
				printf("��������Ҫɾ���ڼ�����:>");
				scanf("%d", &input1);
				pos->arr[0] = pos->arr[input1 - 1];
				pos->tmp = 1;
			}
			if ((pos->tmp) == 1)
			{
				for (i = pos->arr[0]; i < pcon->sz; i++)
				{
					pcon->date[i] = pcon->date[i + 1];
				}
				pcon->sz--;
				printf("ɾ���ɹ���\n");
			}
			break;
		case 3:
			printf("������Ҫɾ���˵��Ա�:>");
			scanf("%s", Option.SEX);
			pos = Find_bysex(pcon, Option.SEX);
			if (pos->tmp == -1)
				printf("û�и���ϵ�ˣ�\n");
			if ((pos->tmp) >1)
			{
				printf("��ͨѶ¼�ж����Ϣ��ͬ����ϵ�ˣ�\n");
				print(pcon, pos);
				printf("��������Ҫɾ���ڼ�����:>");
				scanf("%d", &input1);
				pos->arr[0] = pos->arr[input1 - 1];
				pos->tmp = 1;
			}
			if ((pos->tmp) == 1)
			{
				for (i = pos->arr[0]; i < pcon->sz; i++)
				{
					pcon->date[i] = pcon->date[i + 1];
				}
				pcon->sz--;
				printf("ɾ���ɹ���\n");
			}
			break;
		case 4:
			printf("������Ҫɾ���˵ĵ绰:>");
			scanf("%s", Option.TELE);
			pos = Find_bytele(pcon, Option.TELE);
			if (pos->tmp == -1)
				printf("û�и���ϵ�ˣ�\n");
			if ((pos->tmp) > 1)
			{
				printf("��ͨѶ¼�ж����Ϣ��ͬ����ϵ�ˣ�\n");
				print(pcon, pos);
				printf("��������Ҫɾ���ڼ�����:>");
				scanf("%d", &input1);
				pos->arr[0] = pos->arr[input1 - 1];
				pos->tmp = 1;
			}
			if ((pos->tmp) == 1)
			{
				for (i = pos->arr[0]; i < pcon->sz; i++)
				{
					pcon->date[i] = pcon->date[i + 1];
				}
				pcon->sz--;
				printf("ɾ���ɹ���\n");
			}
			break;
		case 5:
			printf("������Ҫɾ���˵ĵ�ַ:>");
			scanf("%s", Option.ADDR);
			pos = Find_byaddr(pcon, Option.ADDR);
			if (pos->tmp == -1)
				printf("û�и���ϵ�ˣ�\n");
			if ((pos->tmp) > 1)
			{
				printf("��ͨѶ¼�ж����Ϣ��ͬ����ϵ�ˣ�\n");
				print(pcon, pos);
				printf("��������Ҫɾ���ڼ�����:>");
				scanf("%d", &input1);
				pos->arr[0] = pos->arr[input1 - 1];
				pos->tmp = 1;
			}
			if ((pos->tmp) == 1)
			{
				for (i = pos->arr[0]; i < pcon->sz; i++)
				{
					pcon->date[i] = pcon->date[i + 1];
				}
				pcon->sz--;
				printf("ɾ���ɹ���\n");
			}
			break;
		case 0:
			printf("�˳�ɾ����\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while (input);
}

void MODIFY_Contact(Contact* pcon)
{
	int input = 0;
	int input1 = 0;
	int i = 0;
	S* pos = NULL;
	char Name[NAME_MAX] = { 0 };
	//1.�ж�ͨѶ¼�Ƿ�Ϊ��
	if (pcon->sz == 0)
	{
	   printf("ͨѶ¼Ϊ��,�޷��޸ģ�\n");
	   return;
	}
	//2.������ϵ��
	printf("��������Ҫ�޸ĵ���ϵ�˵�����:>");
	scanf("%s", Name);
	pos = Find_byname(pcon, Name);
	// 3.�޸���ϵ��
	if (pos->tmp == -1)
		printf("û�и���ϵ�ˣ�\n");
	if ((pos->tmp) > 1)
	{
		printf("��ͨѶ¼�ж����Ϣ��ͬ����ϵ�ˣ�\n");
		print(pcon, pos);
		printf("��������Ҫ�޸ĵڼ�����:>");
		scanf("%d", &input1);
		pos->arr[0] = pos->arr[input1 - 1];
		pos->tmp = 1;
	}
	if (pos->tmp == 1)
	{
		printf("����������:>");
		scanf("%s", pcon->date[pos->arr[0]].NAME);
		printf("�������Ա�:>");
		scanf("%s", pcon->date[pos->arr[0]].SEX);
		printf("����������:>");
		scanf("%d", &(pcon->date[pos->arr[0]].AGE));
		printf("������绰:>");
		scanf("%s", pcon->date[pos->arr[0]].TELE);
		printf("�������ַ:>");
		scanf("%s", pcon->date[pos->arr[0]].ADDR);
	}
	printf("�޸ĳɹ���\n");
}

//����������С����
static void sort_age(Contact* pcon)
{
	int i = 0;
	int j = 0;
	int flag = 1;
	for (i = 0; i < pcon->sz; i++)
	{
		for (j = 0; j < pcon->sz - i - 1; j++)
		{
			if (pcon->date[j].AGE > pcon->date[j + 1].AGE)
			{
				flag = 0;
				Peoinfor tmp = pcon->date[j + 1];
				pcon->date[j + 1] = pcon->date[j];
				pcon->date[j] = tmp;
			}
		}
		if (flag == 1)
		{
			printf("������ɣ�\n");
			return;
		}
	}
	printf("������ɣ�\n");
}
//�Ա���������ǰ��Ů�ں�
void sort_sex(Contact* pcon)
{
	int left = 0;
	int right = pcon->sz - 1;
	while (left < right)
	{
		//����ʼ�ҡ�Ů��
		while (strcmp(pcon->date[left].SEX, "Ů") != 0 && left < right)
			left++;
		//���ҿ�ʼ�ҡ��С�
		while (strcmp(pcon->date[right].SEX, "��") != 0 && left < right)
			right--;
		//�ҵ�������������һ��
		if (left < right)
		{
			Peoinfor tmp = pcon->date[right];
			pcon->date[right] = pcon->date[left];
			pcon->date[left] = tmp;
			left++;
			right--;
		}
	}
	printf("������ɣ�\n");
}
//��������
void sort_name(Contact* pcon)
{
	int i = 0;
	int j = 0;
	int flag = 1;
	for (i = 0; i < pcon->sz; i++)
	{
		for (j = 0; j < pcon->sz - i - 1; j++)
		{
			if (strcmp(pcon->date[j].NAME, pcon->date[j + 1].NAME) > 0)
			{
				flag = 0;
				Peoinfor tmp = pcon->date[j + 1];
				pcon->date[j + 1] = pcon->date[j];
				pcon->date[j] = tmp;
			}
		}
		if (flag == 1)
		{
			printf("������ɣ�\n");
			return;
		}
	}
	printf("������ɣ�\n");
}

void SORT_Contact(Contact* pcon)
{
	int input = 0;
	do
	{
		printf("**********************************\n");
		printf("****    1.name      2.age     ****\n");
		printf("****    3.sex       0.exit    ****\n");
		printf("**********************************\n");
		printf("��������Ҫͨ�����ַ�ʽ����:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ѡ�������������\n");
			sort_name(pcon);
			break;
		case 2:
			printf("��ѡ���������������������С��������\n");
			sort_age(pcon);
			break;
		case 3:
			printf("��ѡ������Ա��������е�����ǰ�棬Ů���ں��棡\n");
			sort_sex(pcon);
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	}while(input);
}
void SHOW_Contact(Contact* pcon)
{
	assert(pcon);
	printf("%-8s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	int i = 0;
	for (i = 0; i < pcon->sz; i++)
	{
		printf("%-8s\t%-5s\t%-5d\t%-12s\t%-20s\n",pcon->date[i].NAME,pcon->date[i].SEX,pcon->date[i].AGE,pcon->date[i].TELE,pcon->date[i].ADDR);
	}
	if (i == 0)
	{
		printf("%-8s\t%-5s\t%-5s\t%-12s\t%-20s\n", "[��]", "[��]", "[��]", "[��]", "[��]");
	}
}
