#define _CRT_SECURE_NO_WARNINGS 1
//�����ڽӱ�洢�� ������ȱ����ݹ��㷨
//�����ڽӱ�洢�� ������ȱ���
#include <stdio.h>
#include <malloc.h>
#define MAX_SIZE 10

typedef struct node
{
	int vertex;
	struct node *next;
}node, adjlist[MAX_SIZE];

adjlist g;
int visited[MAX_SIZE + 1] = { 0 };//״̬����
int que[MAX_SIZE + 1] = { 0 };//����
int n = 0; //����ͼ�Ķ�����
int e = 0; //����ͼ�ı���
int i = 0;

void creat()
{
	int start = 0;//����ͼ����ʼ����
	int end = 0;  //����ͼ�Ľ�������
	node *p = NULL;
	node *q = NULL;
	node *pp = NULL;
	node *qq = NULL;
	printf("��������ͼ�Ķ������ͱ���:");
	scanf("%d %d", &n, &e);
	//��ʼ��
	for (i = 1; i <= n; i++)
	{
		visited[i] = 0;  //״̬��
		g[i].vertex = i; //����ͷ�ڵ�
		g[i].next = NULL;//����ͷ�ڵ�
	}
	printf("���������;\n");
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

//������ȱ���
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
				printf("%d ", p->vertex);//��ӡ����
				que[rear++] = p->vertex;
			}
			p = p->next;
		}
		front++;
	}
}


//������ȱ��� �ݹ��㷨
void DFS(adjlist g, int i)
{
	node *p = NULL;
	visited[i] = 1;
	printf("%d ", g[i].vertex);//��ӡ����
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
	printf("������ȱ�������: ");
	bfs(1);
	printf("\n");
	printf("������ȱ�������; ");
	//����״̬���顣�����ʼ��0
	for (i = 1; i <= n; i++)
	{
		visited[i] = 0;
	}
	DFS(g, 1);
	printf("\n");
	return 0;
}





