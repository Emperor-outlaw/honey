#include "contact.h"


//��ʼ��ͨѶ¼
void initContact(Contact* pcon)
{
	pcon->sz = 0;
	memset(pcon->data, 0, sizeof(pcon->data[0]) * MAX);
}


//����������
int* searchByName(const Contact* pcon)
{
	char name[20] = { 0 };
	int* arr = (int*)calloc(MAX + 1, sizeof(int)); //��¼���ҵ�����ϵ���±꣬�����һ��Ԫ�ؼ�¼���ҵ��˶��ٸ��ˣ������Ԫ���ǲ��ҵ�����ϵ���±�
	printf("������������");
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->data[i].name, name) == 0)
		{
			arr[arr[0]++] = i;
		}
	}
	return arr;
}

//���������
int* searchByAge(const Contact* pcon)
{
	int age = 0;
	int* arr = (int*)calloc(MAX + 1, sizeof(int));
	printf("���������䣺");
	scanf("%d", &age);
	int i = 0;
	for (i = 0; i < pcon->sz; i++)
	{
		if (pcon->data[i].age == age)
		{
			arr[arr[0]++] = i;
		}
	}
	return arr;
}

//���Ա����
int* searchBySex(const Contact* pcon)
{
	char sex[5] = { 0 }; 
	int* arr = (int*)calloc(MAX + 1, sizeof(int));
	printf("�������Ա�");
	scanf("%s", sex);
	int i = 0;
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->data[i].sex, sex) == 0)
		{
			arr[arr[0]++] = i;
		}
	}
	return arr;
}

//���绰����
int* searchByTele(const Contact* pcon)
{
	char tele[12] = { 0 };
	int* arr = (int*)calloc(MAX + 1, sizeof(int));
	printf("������绰��");
	scanf("%s", tele);
	int i = 0;
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->data[i].tele, tele) == 0)
		{
			arr[arr[0]++] = i;
		}
	}
	return arr;
}

//����ַ����
int* searchByAddr(const Contact* pcon)
{
	char addr[20] = { 0 };
	int* arr = (int*)calloc(MAX + 1, sizeof(int));
	printf("�������ַ��");
	scanf("%s", addr);
	int i = 0;
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->data[i].addr, addr) == 0)
		{
			arr[arr[0]++] = i;
		}
	}
	return arr;
}

//�����ϵ��
void addContact(Contact* pcon)
{
	printf("�������ϵ�˿�ʼ����\n");
	int n = 0;
	printf("��������Ҫ��Ӽ�����ϵ�ˣ�>");
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("������ӵ�%d����ϵ�ˣ�\n", i + 1);
		printf("������������");
		scanf("%s", pcon->data[pcon->sz].name);
		printf("���������䣺");
		scanf("%d", &pcon->data[pcon->sz].age);
		printf("�������Ա�");
		scanf("%s", pcon->data[pcon->sz].sex);
		printf("������绰��");
		scanf("%s", pcon->data[pcon->sz].tele);
		printf("�������ַ��");
		scanf("%s", pcon->data[pcon->sz].addr);
		pcon->sz++;
		printf("��%d����ϵ����ӽ�����\n", i + 1);
	}
	printf("�������ϵ�˽������ܹ������%d����ϵ�ˣ���\n", n);
}

//ɾ����ϵ�˲˵�
void deleMenu()
{
	printf("*****************************************\n");
	printf("*****    ��ѡ����Ҫ��ʲô����ɾ��  ******\n");
	printf("*****      1.name       2.age      ******\n");
	printf("*****      3.tele       4.addr     ******\n");
	printf("*****      0.exit                  ******\n");
	printf("*****************************************\n");
}

//����ѡ��ɾ����ϵ��
void deleByCondition(Contact* pcon, int input)
{
	//����һ������ָ�����飬��ÿ�����Һ�����Ϊ����Ԫ��
	int* (*fun[5])(Contact*) = { NULL, searchByName, searchByAge,  searchByTele, searchByAddr };
	int* arr = fun[input](pcon);
	if (arr[0] == 1) //û���ظ�����ϵ�ˣ�ֱ��ɾ��
	{
		int k = 0;
		for (k = arr[1]; k < pcon->sz - 1; k++) //ɾ��
		{
			pcon->data[k] = pcon->data[k + 1];
		}
	}
	else if (arr[0] == 0)
	{
		printf("û�и���ϵ�ˣ�\n");
		return;
	}
	else
	{
		printf("%-5s %-10s %-8s %-5s %-15s %-15s\n", "���", "����", "����", "�Ա�", "�绰", "��ַ"); //��ӡ����
		int i = 0;
		for (i = 1; i <= arr[0]; i++)
		{
			printf("%-5d %-10s %-8d %-5s %-15s %-15s\n", i, pcon->data[i].name, pcon->data[i].age, pcon->data[i].sex, pcon->data[i].tele, pcon->data[i].addr);
		}
		while (1)
		{
			printf("��ϵ���ж������������Ҫɾ������ϵ�˱�ţ�");
			int n = 0;
			scanf("%d", &n);
			if (n >= 1 && n <= arr[0]) //�ж������Ƿ�Ϸ�
			{
				int k = 0;
				for (k = arr[1]; k < pcon->sz - 1; k++) //ɾ��
				{
					pcon->data[k] = pcon->data[k + 1];
				}
				break;
			}
			else
			{
				printf("����������������룡\n");
			}
		}
	}
	pcon->sz--;
	printf("���ɹ�ɾ����ϵ�ˣ���\n");
}

//ɾ����ϵ��
void delContact(Contact* pcon)
{
	int input = 0;
	do
	{
		deleMenu();
		printf("���������ѡ��");
		scanf("%d", &input);
		if (input > 0 && input < 5)
		{
			deleByCondition(pcon, input);
		}
		else if (input == 0)
		{
			printf("�˳�ɾ����ϵ�ˣ�\n");
			break;
		}
		else
		{
			printf("����������������룡\n");
		}
	} while (input);
}

//������ϵ�˲˵�
void searchMenu()
{
	printf("*****************************************\n");
	printf("*****    ��ѡ����Ҫ��ʲô��������  ******\n");
	printf("*****      1.name       2.age      ******\n");
	printf("*****      3.sex        4.tele     ******\n");
	printf("*****      5.addr       0.exit     ******\n");
	printf("*****************************************\n");
}

//������ϵ��
void searchContact(const Contact* pcon)
{
	int input = 0;
	int* arr = NULL; //����һ���������飬�����д�Ų��ҵ�����ϵ���±�
	do
	{
		searchMenu();
		printf("���������ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//����������
			arr = searchByName(pcon);
			input = 0;
			break;
		case 2:
			//���������
			arr = searchByAge(pcon);
			input = 0;
			break;
		case 3:
			//���Ա����
			arr = searchBySex(pcon);
			input = 0;
			break;
		case 4:
			//���绰����
			arr = searchByTele(pcon);
			input = 0;
			break;
		case 5:
			//����ַ����
			arr = searchByAddr(pcon);
			input = 0;
			break;
		case 0:
			//�˳�����
			printf("�˳����ң�\n");
			break;
		default:
			printf("����������������룡\n");
		}
	} while (input);
	printf("%-10s %-8s %-5s %-15s %-15s\n", "����", "����", "�Ա�", "�绰", "��ַ"); //��ӡ����
	int i = 0;
	for (i = 1; i <= arr[0]; i++)
	{
		printf("%-10s %-8d %-5s %-15s %-15s\n", pcon->data[arr[i]].name, pcon->data[arr[i]].age, pcon->data[arr[i]].sex, pcon->data[arr[i]].tele, pcon->data[arr[i]].addr);
	}
	printf("���ܹ����ҵ���%d����ϵ�ˣ���\n", arr[0]);
	if (arr != NULL)
	{
		free(arr);
	}
}

//�޸���ϵ�˲˵�
void modifyMenu()
{
	printf("*****************************************\n");
	printf("*****    ��ѡ����Ҫ��ʲô�����޸�  ******\n");
	printf("*****      1.name       2.age      ******\n");
	printf("*****      3.sex        4.tele     ******\n");
	printf("*****      5.addr       0.exit     ******\n");
	printf("*****************************************\n");
}

//�������޸���ϵ��
void modifyByCondition(Contact* pcon, int input)
{
	//����һ������ָ�����飬��ÿ�����Һ�����Ϊ����Ԫ��
	int* (*fun[5])(Contact*) = { NULL, searchByName, searchByAge,  searchByTele, searchByAddr };
	int* arr = fun[input](pcon);
	if (arr[0] == 1) //û���ظ�����ϵ�ˣ�ֱ���޸�
	{
		printf("������������");
		scanf("%s", pcon->data[arr[1]].name);
		printf("���������䣺");
		scanf("%d", &pcon->data[arr[1]].age);
		printf("�������Ա�");
		scanf("%s", pcon->data[arr[1]].sex);
		printf("������绰��");
		scanf("%s", pcon->data[arr[1]].tele);
		printf("�������ַ��");
		scanf("%s", pcon->data[arr[1]].addr);
	}
	else if (arr[0] == 0)
	{
		printf("û�и���ϵ�ˣ�\n");
		return;
	}
	else
	{
		printf("%-5s %-10s %-8s %-5s %-15s %-15s\n", "���", "����", "����", "�Ա�", "�绰", "��ַ"); //��ӡ����
		int i = 0;
		for (i = 1; i <= arr[0]; i++)
		{
			printf("%-5d %-10s %-8d %-5s %-15s %-15s\n", i, pcon->data[arr[i]].name, pcon->data[arr[i]].age, pcon->data[arr[i]].sex, pcon->data[arr[i]].tele, pcon->data[arr[i]].addr);
		}
		while (1)
		{
			printf("��ϵ���ж������������Ҫ�޸ĵ���ϵ�˱�ţ�");
			int n = 0;
			scanf("%d", &n);
			if (n >= 1 && n <= arr[0]) //�ж������Ƿ�Ϸ�
			{
				printf("������������");
				scanf("%s", pcon->data[arr[n]].name);
				printf("���������䣺");
				scanf("%d", &pcon->data[arr[n]].age);
				printf("�������Ա�");
				scanf("%s", pcon->data[arr[n]].sex);
				printf("������绰��");
				scanf("%s", pcon->data[arr[n]].tele);
				printf("�������ַ��");
				scanf("%s", pcon->data[arr[n]].addr);
				break;
			}
			else
			{
				printf("����������������룡\n");
			}
		}
	}
	printf("���ɹ��޸���ϵ�ˣ���\n");
}

//�޸���ϵ��
void modifyContact(Contact* pcon)
{
	int input = 0;
	do
	{
		modifyMenu();
		printf("���������ѡ��");
		scanf("%d", &input);
		if (input > 0 && input < 5)
		{
			modifyByCondition(pcon, input);
		}
		else if (input == 0)
		{
			printf("�˳�ɾ����ϵ�ˣ�\n");
			break;
		}
		else
		{
			printf("����������������룡\n");
		}
	} while (input);
}

//��ʾȫ����ϵ��
void showContact(const Contact* pcon)
{
	printf("%-10s %-8s %-5s %-15s %-15s\n", "����", "����", "�Ա�", "�绰", "��ַ"); //��ӡ����
	int i = 0;
	for (i = 0; i < pcon->sz; i++)
	{
		printf("%-10s %-8d %-5s %-15s %-15s\n", pcon->data[i].name, pcon->data[i].age, pcon->data[i].sex, pcon->data[i].tele, pcon->data[i].addr);
	}
	printf("���ܹ���ʾ��%d����ϵ�ˣ���\n", pcon->sz);
}

//�����ϵ��
void emptyContact(Contact* pcon)
{
	initContact(pcon);
}

//����˵�����
void sortMenu()
{
	printf("*****************************************\n");
	printf("*****    ��ѡ����Ҫ��ʲô��������  ******\n");
	printf("*****            1.name            ******\n");
	printf("*****            2.age             ******\n");
	printf("*****            0.exit            ******\n");
	printf("*****************************************\n");
}

//�������Ƚ�
int sortByName(const void* p1, const void* p2)
{
	return (strcmp(((PerInfo*)p1)->name, ((PerInfo*)p2)->name));
}

//������Ƚ�
int sortByAge(const void* p1, const void* p2)
{
	return (((PerInfo*)p1)->age - ((PerInfo*)p2)->age);
}

//������ϵ��
void sortContact(Contact* pcon)
{
	int input = 0;
	do
	{
		sortMenu();
		printf("���������ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//����������
			qsort(pcon->data, pcon->sz, sizeof(pcon->data[0]), sortByName); //ʹ�ÿ⺯��qsort
			break;
		case 2:
			//����������
			qsort(pcon->data, pcon->sz, sizeof(pcon->data[0]), sortByAge); //ʹ�ÿ⺯��qsort
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("����������������룡\n");
		}
	} while (input);
}