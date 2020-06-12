#define _CRT_SECURE_NO_WARNINGS 1
//�����������ֱ������ݹ�ͷǵݹ飩
#include <stdio.h>
#define MAX 7 //ջ�պͶӵĿռ�Ĵ�С
//����ڵ�
typedef struct Node
{
	char date;               //�洢�������
	struct Node *left_child; //������
	struct Node *right_child;//�Һ�����
}Tnode, *Pnode;
//����ջ�����ڷǵݹ��ȡ��С������ֱ�����
typedef struct stack
{
	Pnode stack[MAX];       //���ָ�����ָ��
	int top;                //ջָ��
}Stack, *Pstack;
//����ӣ����ڷǵݹ��α�����
typedef struct queue
{
	Pnode arr[MAX + 1];     //���ָ�����ָ��
	int front;
	int rear;
}Queue, *Pqueue;
//������
void Creat_tree(Pnode root, Pnode left_child, Pnode right_child, char date)
{
	root->date = date;
	root->left_child = left_child;
	root->right_child = right_child;
}

//----------���ֵݹ����-------------
//�ݹ��������
void PreorderR(Pnode root)
{
	if (NULL == root)  //������Ϊ��ֱ�ӷ���
		return;
	printf("%c ", root->date);
	PreorderR(root->left_child); //�ݹ��������������
	PreorderR(root->right_child);//�ݹ��������������
}
//�ݹ��������
void InorderR(Pnode root)
{
	if (NULL == root)
		return;
	InorderR(root->left_child); //�ݹ��������������
	printf("%c ", root->date);
	InorderR(root->right_child);//�ݹ��������������
}
//�ݹ��������
void postorderR(Pnode root)
{
	if (NULL == root)
		return;
	postorderR(root->left_child);  //�ݹ�������������
	postorderR(root->right_child); //�ݹ�������������
	printf("%c ", root->date);
}

//------------���ַǵݹ����---------------

//��ʼ��ջ
void stack_init(Pstack pstack)
{
	pstack->top = -1;
}
//�ж�ջ��
int stack_empty(Pstack pstack)
{
	return (-1 == pstack->top);
}
//�ж�ջ��
int stack_full(Pstack pstack)
{
	return (MAX - 1 == pstack->top);
}
//��ջ
void push(Pnode root, Pstack pstack)
{
	//pstack->top++;
	pstack->stack[++pstack->top] = root;
}
//��ջ
Pnode pop(Pnode root, Pstack pstack)
{
	return pstack->stack[pstack->top--];
}

//�ǵݹ��������
void PreorderI(Pnode root, Pstack pstack)
{
	//��ʼ��ջ
	stack_init(pstack);
	while (root || !stack_empty(pstack))
	{
		if (root)
		{
			if (!stack_full(pstack))
			{
				printf("%c ", root->date);
				push(root, pstack);      //�������ջ
				root = root->left_child;
			}
			else
			{
				printf("ջ�����޷���ջ��\n");
				return;
			}
		}
		else
		{
			root = pop(root, pstack);
			root = root->right_child;
		}
	}
}

//�ǵݹ��������
void InorderI(Pnode root, Pstack pstack)
{
	stack_init(pstack);   //��ʼ��ջ
	while (root || !stack_empty(pstack))
	{
		if (root)
		{
			if (!stack_full(pstack))
			{
				push(root, pstack);
				root = root->left_child;
			}
			else
			{
				printf("ջ�����޷���ջ��\n");
				return;
			}
		}
		else
		{
			root = pop(root, pstack);
			printf("%c ", root->date);
			root = root->right_child;
		}
	}
}
//�ǵݹ�������
void postorderI(Pnode root, Pstack pstack)
{
	stack_init(pstack); //��ʼ��ջ
	int arr[MAX];   //��Ž��ı�־λ��0��������û�б����ʣ�1�������������ʣ�
	int p = -1;       
	while (root || !stack_empty(pstack))
	{
		if (root)
		{
			if (!stack_full(pstack))
			{
				push(root, pstack);
				p++;
				arr[p] = 0;
				root = root->left_child;
			}
			else
			{
				printf("ջ�����޷���ջ��\n");
				return;
			}
		}
		else
		{
			root = pop(root, pstack);
			if (0 == arr[p])
			{
				arr[p] = 1;
				push(root, pstack);
				root = root->right_child;
			}
			else
			{
				p--;
				printf("%c ", root->date);
				root = NULL;
			}
		}
	}
}

//��ʼ������
void queue_init(Pqueue pqueue)
{
	pqueue->front = 0;
	pqueue->rear = 0;
}
//�ж϶ӿ�
int queue_empty(Pqueue pqueue)
{
	return (pqueue->rear == pqueue->front);
}
//�ж϶���
int queue_full(Pqueue pqueue)
{
	return ((pqueue->rear + 1) % (MAX + 1) == pqueue->front);
}
//���
void push_queue(Pnode root, Pqueue pqueue)
{
	pqueue->arr[pqueue->rear++] = root;
}
//����
Pnode pop_queue(Pnode root, Pqueue pqueue)
{
	return pqueue->arr[pqueue->front++];
}

//�ǵݹ��α���
void LevelorderI(Pnode root, Pqueue pqueue)
{
	if (root == NULL)
		return;
	push_queue(root, pqueue);
	while (!queue_empty(pqueue))
	{
		if (!queue_empty(pqueue))
		{
			root = pop_queue(root, pqueue);
			printf("%c ", root->date);
		}
		if (!queue_full(pqueue))
		{
			if (root->left_child != NULL)
				push_queue(root->left_child, pqueue);
			if (root->right_child != NULL)
				push_queue(root->right_child, pqueue);
		}
		else
		{
			printf("�������޷���ӣ�\n");
			return;
		}		
	}
	
}



int main()
{
	Tnode A, B, C, D, E, F, G;  //����������
	Stack stack;                //����ջ
	Queue queue;                //������
	//������
	Creat_tree(&A, &C, &D, 'A');
	Creat_tree(&C, &B, &E, 'C');
	Creat_tree(&E, NULL, NULL, 'E');
	Creat_tree(&B, &F, NULL, 'B');
	Creat_tree(&F, NULL, NULL, 'F');
	Creat_tree(&D, NULL, &G, 'D');
	Creat_tree(&G, NULL, NULL, 'G');

	//�ݹ��������
	printf("************�ݹ��������***************\n");
	PreorderR(&A);  //��������
	printf("\n");

	//�ݹ��������
	printf("************�ݹ��������***************\n");
	InorderR(&A);   //��������
	printf("\n");

	//�ݹ��������
	printf("************�ݹ��������***************\n");
	postorderR(&A); //��������
	printf("\n");

	//�ǵݹ��������
	printf("************�ǵݹ��������***************\n");
	PreorderI(&A, &stack); //��������
	printf("\n");

	//�ǵݹ��������
	printf("************�ǵݹ��������***************\n");
	InorderI(&A, &stack); //��������
	printf("\n");

	//�ǵݹ��������
	printf("************�ǵݹ��������***************\n");
	postorderI(&A, &stack);  //��������
	printf("\n");

	//�ǵݹ��α���
	printf("*************�ǵݹ��α���***************\n");
	queue_init(&queue);//��ʼ����
	LevelorderI(&A, &queue);  //��������
	printf("\n");

	return 0;
}