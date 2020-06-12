#define _CRT_SECURE_NO_WARNINGS 1
//二叉树的三种遍历（递归和非递归）
#include <stdio.h>
#define MAX 7 //栈空和队的空间的大小
//定义节点
typedef struct Node
{
	char date;               //存储结点数据
	struct Node *left_child; //左孩子域
	struct Node *right_child;//右孩子域
}Tnode, *Pnode;
//定义栈（用于非递归先、中、后三种遍历）
typedef struct stack
{
	Pnode stack[MAX];       //存放指向结点的指针
	int top;                //栈指针
}Stack, *Pstack;
//定义队（用于非递归层次遍历）
typedef struct queue
{
	Pnode arr[MAX + 1];     //存放指向结点的指针
	int front;
	int rear;
}Queue, *Pqueue;
//创建树
void Creat_tree(Pnode root, Pnode left_child, Pnode right_child, char date)
{
	root->date = date;
	root->left_child = left_child;
	root->right_child = right_child;
}

//----------三种递归遍历-------------
//递归先序遍历
void PreorderR(Pnode root)
{
	if (NULL == root)  //如果结点为空直接返回
		return;
	printf("%c ", root->date);
	PreorderR(root->left_child); //递归先序遍历左子树
	PreorderR(root->right_child);//递归先序遍历右子数
}
//递归中序遍历
void InorderR(Pnode root)
{
	if (NULL == root)
		return;
	InorderR(root->left_child); //递归中序遍历左子树
	printf("%c ", root->date);
	InorderR(root->right_child);//递归中序遍历右子树
}
//递归后续遍历
void postorderR(Pnode root)
{
	if (NULL == root)
		return;
	postorderR(root->left_child);  //递归后序遍历左子树
	postorderR(root->right_child); //递归后序遍历右子树
	printf("%c ", root->date);
}

//------------四种非递归遍历---------------

//初始化栈
void stack_init(Pstack pstack)
{
	pstack->top = -1;
}
//判断栈空
int stack_empty(Pstack pstack)
{
	return (-1 == pstack->top);
}
//判断栈满
int stack_full(Pstack pstack)
{
	return (MAX - 1 == pstack->top);
}
//入栈
void push(Pnode root, Pstack pstack)
{
	//pstack->top++;
	pstack->stack[++pstack->top] = root;
}
//出栈
Pnode pop(Pnode root, Pstack pstack)
{
	return pstack->stack[pstack->top--];
}

//非递归先序遍历
void PreorderI(Pnode root, Pstack pstack)
{
	//初始化栈
	stack_init(pstack);
	while (root || !stack_empty(pstack))
	{
		if (root)
		{
			if (!stack_full(pstack))
			{
				printf("%c ", root->date);
				push(root, pstack);      //将结点入栈
				root = root->left_child;
			}
			else
			{
				printf("栈满，无法入栈！\n");
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

//非递归中序遍历
void InorderI(Pnode root, Pstack pstack)
{
	stack_init(pstack);   //初始化栈
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
				printf("栈满，无法入栈！\n");
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
//非递归后序遍历
void postorderI(Pnode root, Pstack pstack)
{
	stack_init(pstack); //初始化栈
	int arr[MAX];   //存放结点的标志位（0：右子树没有被访问，1：右子树被访问）
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
				printf("栈满，无法入栈！\n");
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

//初始化队列
void queue_init(Pqueue pqueue)
{
	pqueue->front = 0;
	pqueue->rear = 0;
}
//判断队空
int queue_empty(Pqueue pqueue)
{
	return (pqueue->rear == pqueue->front);
}
//判断队满
int queue_full(Pqueue pqueue)
{
	return ((pqueue->rear + 1) % (MAX + 1) == pqueue->front);
}
//入队
void push_queue(Pnode root, Pqueue pqueue)
{
	pqueue->arr[pqueue->rear++] = root;
}
//出队
Pnode pop_queue(Pnode root, Pqueue pqueue)
{
	return pqueue->arr[pqueue->front++];
}

//非递归层次遍历
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
			printf("队满，无法入队！\n");
			return;
		}		
	}
	
}



int main()
{
	Tnode A, B, C, D, E, F, G;  //声明结点变量
	Stack stack;                //声明栈
	Queue queue;                //声明队
	//创建树
	Creat_tree(&A, &C, &D, 'A');
	Creat_tree(&C, &B, &E, 'C');
	Creat_tree(&E, NULL, NULL, 'E');
	Creat_tree(&B, &F, NULL, 'B');
	Creat_tree(&F, NULL, NULL, 'F');
	Creat_tree(&D, NULL, &G, 'D');
	Creat_tree(&G, NULL, NULL, 'G');

	//递归先序遍历
	printf("************递归先序遍历***************\n");
	PreorderR(&A);  //传入根结点
	printf("\n");

	//递归中序遍历
	printf("************递归中序遍历***************\n");
	InorderR(&A);   //传入根结点
	printf("\n");

	//递归后续遍历
	printf("************递归后续遍历***************\n");
	postorderR(&A); //传入根结点
	printf("\n");

	//非递归先序遍历
	printf("************非递归先序遍历***************\n");
	PreorderI(&A, &stack); //传入根结点
	printf("\n");

	//非递归中序遍历
	printf("************非递归中序遍历***************\n");
	InorderI(&A, &stack); //传入根结点
	printf("\n");

	//非递归后续遍历
	printf("************非递归后续遍历***************\n");
	postorderI(&A, &stack);  //传入根结点
	printf("\n");

	//非递归层次遍历
	printf("*************非递归层次遍历***************\n");
	queue_init(&queue);//初始化队
	LevelorderI(&A, &queue);  //传入根结点
	printf("\n");

	return 0;
}