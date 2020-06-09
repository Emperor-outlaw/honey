#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#define MAX 3  //ͣ�����ĳ�λ
#define N 2    //�򳵳��ĳ�λ

//ͣ�����ṹ�壨ջ��
typedef struct Stack
{
	int NUM[MAX];             //�����ı��
	clock_t time_start[MAX];  //����������ʱ��
	clock_t time_finish[MAX]; //�����볡��ʱ��
	int top;                  //ջָ��
}Sqstack;
//�򳵳��ṹ�壨���У�
typedef struct Queue
{
	//Ϊ�����ֶ������Ͷ��пգ�һ��������һ����㣬����������N + 1,�������һ���ռ�
	int NUM[N + 1];          //�����ı��
	int front;               //��ͷָ��
	int rear;                //��βָ��
}Sqqueue;

//------------�����Ǻ򳵳���صĺ���-------------------
//��ʼ���򳵳�
void Sqqueue_init(Sqqueue **p)
{
	//��̬����һ���򳵳��ռ�
	(*p) = (Sqqueue *)malloc(sizeof(Sqqueue));
	assert(*p);
	(*p)->front = 0;
	(*p)->rear = 0;
}
//�жϺ򳵳��Ƿ�ͣ��
int Sqqueque_full(Sqqueue *p)
{
	return ((p->rear + 1) % (N + 1) == p->front);
}
//�жϺ򳵳��Ƿ����
int Sqqueue_empty(Sqqueue *p)
{
	return (p->rear == p->front);
}
//��ʾ�򳵳���Ϣ
void play_Sqqueue(Sqqueue *p)
{
	if (Sqqueue_empty(p))
	{
		printf("�򳵳���û�г���\n");
		return;
	}
	for (int i = p->front; i != p->rear; i = (i + 1) % (N + 1))
	{
		printf("���ƺ�%d�ĳ���ͣ�ں򳵳�%d��λ�ã�\n", p->NUM[i], i + 1);
	}
}



//----------------������ͣ������صĺ���------------------
//��ʼ��ͣ����
void Sqstack_init(Sqstack **pp)
{
	//��̬����һ��ͣ�����ռ�
	(*pp) = (Sqstack *)malloc(sizeof(Sqstack));
	assert(*pp);
	(*pp)->top = -1;
}
//�ж�ͣ�����Ƿ�ͣ��
int stack_full(Sqstack *ptr1)
{
	return (ptr1->top == MAX - 1);
}
//�ж�ͣ�����Ƿ��
int Sqstack_empty(Sqstack *ptr1)
{
	return (-1 == ptr1->top);
}
//��ʾͣ������Ϣ
void play_Sqstack(Sqstack *ptr1)
{
	if (Sqstack_empty(ptr1))
	{
		printf("ͣ������û�г���\n");
		return;
	}
	for (int i = 0; i <= ptr1->top; i++)
	{
		printf("���ƺ�%d�ĳ���ͣ����ͣ����%d��λ�ã�\n", ptr1->NUM[i], i + 1);
	}
}




//ͣ������
void pull_up(Sqstack *ptr1, Sqqueue *p)
{
	time_t com_time;  //����ȥ��ʾ������ʱ��
	int license_number = 0;//��ų��ƺ�
	if (!stack_full(ptr1))
	{
		//if����������ͣ����û����
		printf("��������ĳ��ƺţ�");
		scanf("%d", &license_number);
		//�����ŵ�ͣ��������
		ptr1->top++;
		ptr1->NUM[ptr1->top] = license_number;  //�����ŷ���
		ptr1->time_start[ptr1->top] = clock();  //��ͣ����һ�̵�ʱ��Ҳ����
		time(&com_time);  //��ȡ��ǰʱ��
		printf(">>����ʱ����:%s>>���ƺ�%d�ĳ���ͣ����ͣ����%d��λ��!\n",ctime(&com_time), license_number, ptr1->top + 1);
	}
	else
	{
		if (!Sqqueque_full(p))
		{
			//if����������򳵳�û����
			//ͣ�������ˣ����������ĳ�Ҫͣ���ں򳵳�
			printf("ͣ��������������Ҫ��ʱͣ�ں򳵳�,лл������\n");
			printf("��������ĳ��ƺţ�");
			scanf("%d", &license_number);

			//����ͣ�ں򳵳�
			p->NUM[p->rear] = license_number;  //�����ŷ���
			time(&com_time);  //��ȡ��ǰʱ��
			printf(">>����ʱ����:%s>>���ƺ�%d�ĳ���ͣ���ں򳵳�%d��λ�ã�\n", ctime(&com_time), license_number, p->rear + 1);
			p->rear = (p->rear + 1) % (N + 1); //βָ������ƶ�

		}
		else
		{
			printf("ͣ�����ͺ򳵳��Ѿ�ȫ��ͣ��,������������\n");
		}

	}
	
	
}

//�뿪��������������ͣ������
void drive_away(Sqstack *ptr1, Sqstack *ptr2, Sqqueue *p)
{
	double ret = 0;
	time_t lev_time;  //����ȥ��ʾ�뿪��ʱ��
	int license_number = 0;//��ų��ƺ�
	if (!Sqstack_empty(ptr1))
	{
		//if����������ͣ�������г�
		printf("��������Ҫ���ߵĳ��ƺţ�");
		scanf("%d", &license_number);

		//���Ҹó��Ƿ���ͣ������
		int i = 0;
		for (i = 0; i <= ptr1->top && ptr1->NUM[i] != license_number; i++)
			;
		if (i <= ptr1->top)
		{
			//if���������������ͣ������
			//���ó���������ĳ�ȫ���Ƶ�����ڣ��øó���ȥ�����������ƶ���ջ�Ļ��ƣ�
			i = ptr1->top - i;  //Ҫ��ͣ�����Ƶ�����ĳ��ĸ���
			int tmp = i;        //Ҫ�ӱ���Ƶ�ͣ�����ĳ��ĸ���
			while (i-- > 0)
			{
				ptr2->top++;
				ptr2->NUM[ptr2->top] = ptr1->NUM[ptr1->top];
				ptr1->top--;
			}
			//�ó��뿪����ʾ����
			time(&lev_time);
			ptr1->time_finish[ptr1->top] = clock();  //����ȥ��һ�̵�ʱ���Ž�ȥ
			ret = (double)(ptr1->time_finish[ptr1->top] - ptr1->time_start[ptr1->top]); //�����ܹ�ͣ�ŵ�ʱ�䣨��λ��ms��
			printf(">>����ʱ����:%s>>���ܹ�ͣ����%lfs,������%lf$\n", ctime(&lev_time), ret / CLK_TCK, (ret / CLK_TCK) * 1);//����CLK_TCK��CLOCKS_PER_SEC ��������ת��Ϊ��
			printf(">>���ƺ�Ϊ%d��ͣ����ͣ����%d��λ�õĳ��뿪��\n", ptr1->NUM[ptr1->top], ptr1->top + 1);
			ptr1->top--;
			//���ղ��ƶ�������ĳ�ȫ���ƶ�����������ƶ���ȥ�����ƶ�������ջ�Ļ��ƣ�
			while (tmp-- > 0)
			{
				ptr1->top++;
				ptr1->NUM[ptr1->top] = ptr2->NUM[ptr2->top--];
			}
			if (!Sqqueue_empty(p))
			{
				//if����������򳵳������г������û�н���������ͣ������û�аѳ�ͣ��
				//��ʱ���򳵳������Ƚ����ĳ��ƶ���ͣ������
				//����ֻ��Ҫ�ƶ�һ�Σ�Ϊʲô?��Ϊ��ֻ��ͣ������ͣ���˳����򳵳��ڲŻ��г�������ʱͣ����ͣ�������⿪��һ����(��Ϊ����뿪����ÿ��ִֻ��һ�Σ���Ϊ��ÿ��ֻѡһ��2���ѡ��)���Ϳճ�һ��λ�ã����Ժ򳵳���ֻ����һ����������
				ptr1->top++;
				ptr1->NUM[ptr1->top] = p->NUM[p->front];
				p->front = (p->front + 1) % (N + 1);
				//������ͣ��������ʼ�Ʒ�
				ptr1->time_start[ptr1->top] = clock();
			}
		}
		else
		{
			printf("��ɭ���ó�û����ͣ������,������ߴ�ط��ˣ�\n");
		}
	}
	else
	{
		printf("ͣ����Ϊ��!\n");
	}
}






void menu()
{
	printf("****************************************\n");
	printf("****        ��ӭ��������ͣ����     *****\n");
	printf("****   ��ͣ�������շѱ�׼�ǣ�1$/s  *****\n");
	printf("****************************************\n");
	printf("***       1.ͣ��       2.�볡       ****\n");
	printf("***       3.��ʾͣ������Ϣ          ****\n");
	printf("***       4.��ʾ�򳵳���Ϣ          ****\n");
	printf("***       0.�˳�����                ****\n");
	printf("****************************************\n");
}

int main()
{
	int input = 0;
	Sqstack *ptr1 = NULL;  //����ָ��ͣ������ָ��
	Sqstack *ptr2 = NULL;  //����ָ������ָ�루���������г�Ҫ�뿪��������������ĳ�Ҫȫ��Ҫ����ͣ������������һ���ط���·���Ǹ��ط��ͳ��������һ��ռ��ͣ����һ���󣩣�
	Sqqueue *p = NULL;     //����ָ������ָ��
	Sqstack_init(&ptr1);    //��ʼ��ͣ����
	Sqstack_init(&ptr2);    //��ʼ�����
	Sqqueue_init(&p);       //��ʼ���򳵳�
	do
	{
		menu();
		system("color 0D");
		printf("���������ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			pull_up(ptr1, p);   //ͣ������
			break;
		case 2:
			drive_away(ptr1, ptr2, p);//�뿪�������������ߣ�
			break;
		case 3:
			play_Sqstack(ptr1); //��ʾͣ������Ϣ
			break;
		case 4:
			play_Sqqueue(p);  //��ʾ�򳵳���Ϣ
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while (input);
}