#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX 3   //ͣ���������λ��

//������Ϣ
typedef struct Car
{
	char plateNumber[50];   //��������
	time_t approachTime;  //����ͣ����ʱ��
}Car;

//ͣ������˳��ջ��
typedef struct parkStack
{
	Car park[MAX];  //ͣ�����ĳ�λ
	int top;        //ջָ��
}parkStack;

//�����λ���
typedef struct sidewalkNode
{
	Car position;   //�����򣺱���е�һ����λ
	struct sidewalkNode* next;      //ָ����ָ����һ�����
}sidewalkNode;
//�������ʽ���У�
typedef struct sidewalkQueue
{
	sidewalkNode* front;  //ͷָ��
	sidewalkNode* rear;   //βָ��
}sidewalkQueue;


//��ʼ��ջ
void initStack(parkStack* p)
{	
	p->top = -1;
}


//��ʼ������
void initQueue(sidewalkQueue* p)
{
	sidewalkNode* tmp = (sidewalkNode*)malloc(sizeof(sidewalkNode)); //����һ��ͷ�ڵ�
	if (tmp == NULL)
	{
		printf("����ͷ���ʧ�ܣ�\n");
		return;
	}
	else
	{
		p->front = tmp; //ͷָ��ָ��ͷ���
		p->rear = tmp;  //βָ��ָ��ͷ���
		p->front->next = NULL; //ͷ���ָ�����ÿ�
	}
}


//���˵�
void menu()
{
	printf("****************************************\n");
	printf("***         ��ӭ����ͣ����          ****\n");
	printf("***     ͣ�������շѱ�׼�ǣ�1$/s    ****\n");
	printf("***       1.ͣ��                    ****\n");
	printf("***       2.�뿪                    ****\n");
	printf("***       3.��ʾͣ������Ϣ          ****\n");
	printf("***       4.��ʾ�����Ϣ            ****\n");
	printf("***       0.�˳�����                ****\n");
	printf("****************************************\n");
}

//�ж�ͣ�����Ƿ�����������1�����򷵻�0
int isFull(parkStack* p)
{
	return (p->top == MAX - 1 ? 1 : 0); //������Ŀ����������ж�
}

//�ж�ͣ�����Ƿ�Ϊ�գ��շ���1�����򷵻�0
int isEmpty(parkStack* p)
{
	return (p->top == -1 ? 1 : 0); //������Ŀ����������ж�
}

//�жϱ���Ƿ�Ϊ�գ��շ���1�����򷵻�0
int isSidewalkEmpty(sidewalkQueue* sq)
{
	return (sq->front == sq->rear ? 1 : 0);
}

//��ջ����
void pop(parkStack* p, Car* ptmpCar)
{
	(*ptmpCar) = p->park[p->top--];
}

//��ջ����
void push(parkStack* ap, Car* ptmpCar)
{
	ap->park[++ap->top] = *ptmpCar;
}

//ͣ������
void approach(parkStack* p, sidewalkQueue* sq)
{
	char number[50] = { 0 };
	printf("�����복�ƣ�");
	scanf("%s", number);
	if (!isFull(p)) //ͣ�����Ƿ���
	{
		//����ͣ��
		printf("[��ʼͣ��]\n");
		strcpy(p->park[++p->top].plateNumber, number); //�洢����
		time(&p->park[p->top].approachTime); //��ȡ��ǰͣ��ʱ���
		//ctime( )�������Խ�ʱ���ת���������ֱ�ӿ��Ķ���ʱ���ʽ���磺The time is Fri Apr 29 12:25:12 1994
		printf("��ǰʱ�䣺%s", ctime(&p->park[p->top].approachTime));
		printf("����Ϊ%s�ĳ�ͣ����ͣ����%d�ų�λ\n", p->park[p->top].plateNumber, p->top + 1);
		printf("[ͣ������]\n");
	}
	else
	{
		//ֻ��ͣ�ڱ���ȴ�
		sidewalkNode* tmp = (sidewalkNode*)malloc(sizeof(sidewalkNode)); //Ϊ�����ĳ�������һ���ռ�
		if (tmp != NULL)
		{
			strcpy(tmp->position.plateNumber, number); //��ų���
			tmp->next = NULL;
			sq->rear->next = tmp; //�����ڱ���еĳ���֮�󣬼����������н��֮��
			sq->rear = tmp;  //�޸Ķ�βָ��
		}
		printf("ͣ��������������ֻ��ͣ���ڱ���Ⱥ�\n");
		int count = 0;
		sidewalkNode* p = sq->front->next;
		while (p != NULL)
		{
			count++;
			p = p->next;
		}
		printf("����Ϊ%s�ĳ�ͣ���ڱ��%d�ų�λ\n", sq->rear->position.plateNumber, count);
	}
}


//�뿪����
void leave(parkStack* p, parkStack* ap, sidewalkQueue* sq)
{
	if (!isEmpty(p)) //���ͣ�����Ƿ��
	{
		char number[50] = { 0 };
		printf("�������뿪�ĳ��ƣ�");
		scanf("%s", number);
		int n = p->top;
		int post = 0; //��¼����ͣ�ŵ�λ��
		while (n > -1)  //���ͣ�����Ƿ��иó���
		{
			if (!strcmp(p->park[n].plateNumber, number))
			{
				post = n;
				break;
			}
			n--;
		}
		if (n == -1)
		{
			printf("ͣ����û�иó�����\n");
		}
		else
		{
			Car tmpCar;
			time_t timer;
			while (p->top > post) //�ڸó���֮������ĳ���ȫ���븨��ջ
			{
				pop(p, &tmpCar); //�����뿪ͣ�������൱�ڳ�ջ������Ԫ�ش��뵽tmpCar��
				push(ap, &tmpCar); //�������븨��ջ���൱����ջ����Ԫ�ش��뵽����ջ��
			}
			time(&timer); //��ȡʱ���
			long long total = timer - p->park[p->top].approachTime; //�����ܹ�ͣ�˶�����
			long long h = total / 120; //����ͣ������Сʱ
			long long m = (total - h * 120) / 60; //����ͣ�����ٷ���
			long long s = total - h * 120 - m * 60; //����ͣ��������
			printf("��ǰʱ�䣺%s", ctime(&timer));
			printf("����Ϊ%s�ĳ����뿪ͣ����\n", p->park[p->top].plateNumber);
			printf("����ͣ��ʱ���ܼƣ�%lldʱ%lld����%lld�룬Ӧ�ɷ�%lldԪ\n", h, m, s, total);
			p->top--; //�ó�����ջ
			while (!isEmpty(ap)) //��·�ĳ�������ԭ���Ĵ���ص�ͣ����
			{
				pop(ap, &tmpCar);
				push(p, &tmpCar);
			}
			if (!isSidewalkEmpty(sq)) //���������գ����������ǰ��ĳ���ͣ����������ͷԪ�س���
			{		
				sidewalkNode* s = NULL;
				s = sq->front->next; //sָ��Ҫɾ���Ľ��
				time(&s->position.approachTime); //��¼��������ͣ����ʱ��
				printf("��ǰʱ��Ϊ��%s", ctime(&s->position.approachTime));
				printf("����г���Ϊ%s�ĳ�������ͣ����\n", s->position.plateNumber);
				p->park[++p->top] = s->position; //�����ջ���൱�ڱ���е���������ͣ������
				sq->front->next = s->next; //��ֹ���Ӷ���
				free(s); //�ͷŽ��ռ�
			}
		}
	}
	else
	{
		printf("ͣ����Ϊ�գ�\n");
	}
}


//��ʾͣ������Ϣ
void showParking(parkStack* p)
{
	int i = 0;
	printf("[��ʼ��ʾ��Ϣ]\n");
	for (i = 0; i <= p->top; i++)
	{
		printf("����Ϊ%s�ĳ���ͣ����%d��λ\n", p->park[i].plateNumber, i + 1);
	}
	printf("[��ʾ������ͣ����Ŀǰͣ����%d������]\n", p->top + 1);
}

//��ʾ�����Ϣ
void showSidewalk(sidewalkQueue* sq)
{
	printf("[��ʼ��ʾ��Ϣ]\n");
	sidewalkNode* p = sq->front->next; //��pָ�����е�һ����������ͷԪ�أ�
	int count = 0;
	while (p != NULL)
	{
		printf("����Ϊ%s�ĳ���ͣ����%d��λ\n", p->position.plateNumber, ++count);
		p = p->next;
	}
	printf("[��ʾ���������Ŀǰͣ����%d������]\n", count);
}

int main()
{
	parkStack park;  //����һ��ջ��ģ��ͣ����
	parkStack assistPark; //����һ��ջ�����������뿪
	sidewalkQueue squeue; //����һ�����У�ģ����
	initStack(&park);  //��ʼ��ջ
	initStack(&assistPark);  //��ʼ��ջ
	initQueue(&squeue);  //��ʼ������
	int input = 0;
	do
	{
		menu();
		printf("���������ѡ��");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				//ͣ��
				approach(&park, &squeue);
				break;
			case 2:
				//�뿪
				leave(&park, &assistPark, &squeue);
				break;
			case 3:
				//��ʾͣ������Ϣ
				showParking(&park);
				break;
			case 4:
				//��ʾ�����Ϣ
				showSidewalk(&squeue);
				break;
			case 0:
				//�˳�����
				printf("�˳�ͣ��������ϵͳ\n");
				break;
			default:
				printf("����������������룡\n");
		}
	} while (input);
	return 0;
}