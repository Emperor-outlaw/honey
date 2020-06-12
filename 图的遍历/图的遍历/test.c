#define _CRT_SECURE_NO_WARNINGS 1
//基于邻接表存储的 深度优先遍历递归算法
//基于邻接表存储的 广度优先遍历
#include <stdio.h>
#include <malloc.h>
#define MAX_SIZE 10

typedef struct node
{
	int vertex;
	struct node *next;
}node, adjlist[MAX_SIZE];

adjlist g;
int visited[MAX_SIZE + 1] = { 0 };//状态数组
int que[MAX_SIZE + 1] = { 0 };//队列
int n = 0; //无向图的顶点数
int e = 0; //无向图的边数
int i = 0;

void creat()
{
	int start = 0;//无向图的起始顶点
	int end = 0;  //无向图的结束顶点
	node *p = NULL;
	node *q = NULL;
	node *pp = NULL;
	node *qq = NULL;
	printf("输入无向图的顶点数和边数:");
	scanf("%d %d", &n, &e);
	//初始化
	for (i = 1; i <= n; i++)
	{
		visited[i] = 0;  //状态表
		g[i].vertex = i; //创建头节点
		g[i].next = NULL;//创建头节点
	}
	printf("依次输入边;\n");
	for (i = 1; i <= e; i++)
	{
		scanf("%d%d", &start, &end);
		p = (node*)malloc(sizeof(node));
		p->vertex = end;
		p->next = NULL;
		q = &g[start];
		while (q->next)
		{
			q = q->next;
		}
		q->next = p;

		pp = (node*)malloc(sizeof(node));
		pp->vertex = start;
		pp->next = NULL;
		qq = &g[end];
		while (qq->next)
		{
			qq = qq->next;
		}
		qq->next = pp;
	}
}

//广度优先遍历
void bfs(int vi)
{
	int front = 0;
	int rear = 1;
	int v = 0;
	node *p = NULL;
	visited[vi] = 1;
	que[0] = vi;
	printf("%d ", vi);
	while (rear != front)
	{
		v = que[front];
		p = g[v].next;
		while (p)
		{
			if (0 == visited[p->vertex])
			{
				visited[p->vertex] = 1;
				printf("%d ", p->vertex);//打印顶点
				que[rear++] = p->vertex;
			}
			p = p->next;
		}
		front++;
	}
}


//深度优先遍历 递归算法
void DFS(adjlist g, int i)
{
	node *p = NULL;
	visited[i] = 1;
	printf("%d ", g[i].vertex);//打印顶点
	p = g[i].next;
	while (p)
	{
		if (!visited[p->vertex])
		{
			DFS(g, p->vertex);
		}
		p = p->next;
	}
}

int main()
{
	creat();
	printf("广度优先遍历序列: ");
	bfs(1);
	printf("\n");
	printf("深度优先遍历序列; ");
	//访问状态数组。将其初始化0
	for (i = 1; i <= n; i++)
	{
		visited[i] = 0;
	}
	DFS(g, 1);
	printf("\n");
	return 0;
}





