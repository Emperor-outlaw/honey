#define _CRT_SECURE_NO_WARNINGS 1
////�����ڽӱ�洢�� ������ȱ����ݹ��㷨
////�����ڽӱ�洢�� ������ȱ���
//#include <stdio.h>
//#include <malloc.h>
//#define MAX_SIZE 10
//
//typedef struct node
//{
//	int vertex;
//	struct node *next;
//}node,adjlist[MAX_SIZE];
//
//adjlist g;
//int visited[MAX_SIZE + 1] = { 0 };//״̬����
//int que[MAX_SIZE + 1] = { 0 };//����
//int n = 0; //����ͼ�Ķ�����
//int e = 0; //����ͼ�ı���
//int i = 0;
//
//void creat()
//{
//	int start = 0;//����ͼ����ʼ����
//	int end = 0;  //����ͼ�Ľ�������
//	node *p = NULL;
//	node *q = NULL;
//	node *pp = NULL;
//	node *qq = NULL;
//	printf("��������ͼ�Ķ������ͱ���:");
//	scanf("%d %d", &n, &e);
//	for (i = 1; i <= n; i++)
//	{
//		visited[i] = 0;  //״̬��
//		g[i].vertex = i; //����ͷ�ڵ�
//		g[i].next = NULL;//����ͷ�ڵ�
//	}
//	printf("���������;\n");
//	for (i = 1; i <= e; i++)
//	{
//		scanf("%d%d", &start, &end);
//		p = (node*)malloc(sizeof(node));
//		p->vertex = end;
//		p->next = NULL;
//		q = &g[start];
//		while (q->next)
//		{
//			q = q->next;
//		}
//		q->next = p;
//
//		pp = (node*)malloc(sizeof(node));
//		pp->vertex = start;
//		pp->next = NULL;
//		qq = &g[end];
//		while (qq->next)
//		{
//			qq = qq->next;
//		}
//		qq->next = pp;
//	}
//}
//
////������ȱ���
//void bfs(int vi)
//{
//	int front = 0;
//	int rear = 1;
//	int v = 0;
//	node *p = NULL;
//	visited[vi] = 1;
//	que[0] = vi;
//	printf("%d ", vi);
//	while (front != rear)
//	{
//		v = que[front];
//		p = g[v].next;
//		while (p)
//		{
//			if (!visited[p->vertex])
//			{
//				visited[p->vertex] = 1;
//				printf("%d ", p->vertex);//��ӡ����
//				que[rear++] = p->vertex;
//			}
//			p = p->next;
//		}
//		front++;
//	}
//}
//
//
////������ȱ��� �ݹ��㷨
//void DFS(adjlist g, int i)
//{
//	node *p = NULL;
//	visited[i] = 1;
//	printf("%d ", g[i].vertex);//��ӡ����
//	p = g[i].next;
//	while (p)
//	{
//		if (!visited[p->vertex])
//		{
//			DFS(g, p->vertex);
//		}
//		p = p->next;
//	}
//}
//
//int main()
//{
//	creat();
//	printf("������ȱ�������λ: ");
//	bfs(2);
//	printf("\n");
//	printf("������ȱ�������; ");
//	//����״̬���顣�����ʼ��λ0
//	for (i = 1; i <= n; i++)
//	{
//		visited[i] = 0;
//	}
//	DFS(g, 2);
//	printf("\n");
//	return 0;
//}

////˳�����
//#include <stdio.h>
//int seq_search(int arr[], int sz, int n)
//{
//	while (sz--)
//	{
//		if (arr[sz] == n)
//			return sz;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 4, 6, 33, -90, 7, 0, 8, 6, 2, -39, 34 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//Ԫ�صĸ���
//	int n = 0;//Ҫ���ҵ�Ԫ��
//	printf("��������Ҫ���ҵ�Ԫ��:> ");
//	scanf("%d", &n);
//	int ret = seq_search(arr, sz, n); //������ҵ��ˣ�����������Ԫ�ص��±꣬û���ҵ��򷵻�-1
//	if (ret == -1)
//		printf("û�в��ҵ���\n");
//	else
//		printf("��Ԫ���ڱ��е��±�λ:> %d\n", ret);
//	return 0;
//}



////�۰���ң����ֲ��ң�
//#include <stdio.h>
//int bin_search(int arr[], int sz, int n)
//{
//	int left = 0;  //ָ������Ԫ��
//	int right = sz - 1; //ָ�������һ��Ԫ��
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > n)
//			right = mid - 1;
//		else if (arr[mid] < n)
//			left = mid + 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int n = 0;
//	printf("��������Ҫ���ҵ�Ԫ��:> ");
//	scanf("%d", &n);
//	int ret = bin_search(arr, sz, n);
//	if (ret == -1)
//		printf("û���ҵ���Ԫ�أ�\n");
//	else
//		printf("��Ԫ�ص��±���:> %d\n", ret);
//	return 0;
//}