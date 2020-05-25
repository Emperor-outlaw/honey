#define _CRT_SECURE_NO_WARNINGS 1
////基于邻接表存储的 深度优先遍历递归算法
////基于邻接表存储的 广度优先遍历
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
//int visited[MAX_SIZE + 1] = { 0 };//状态数组
//int que[MAX_SIZE + 1] = { 0 };//队列
//int n = 0; //无向图的顶点数
//int e = 0; //无向图的边数
//int i = 0;
//
//void creat()
//{
//	int start = 0;//无向图的起始顶点
//	int end = 0;  //无向图的结束顶点
//	node *p = NULL;
//	node *q = NULL;
//	node *pp = NULL;
//	node *qq = NULL;
//	printf("输入无向图的顶点数和边数:");
//	scanf("%d %d", &n, &e);
//	for (i = 1; i <= n; i++)
//	{
//		visited[i] = 0;  //状态表
//		g[i].vertex = i; //创建头节点
//		g[i].next = NULL;//创建头节点
//	}
//	printf("依次输入边;\n");
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
////广度优先遍历
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
//				printf("%d ", p->vertex);//打印顶点
//				que[rear++] = p->vertex;
//			}
//			p = p->next;
//		}
//		front++;
//	}
//}
//
//
////深度优先遍历 递归算法
//void DFS(adjlist g, int i)
//{
//	node *p = NULL;
//	visited[i] = 1;
//	printf("%d ", g[i].vertex);//打印顶点
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
//	printf("广度优先遍历序列位: ");
//	bfs(2);
//	printf("\n");
//	printf("深度优先遍历序列; ");
//	//访问状态数组。将其初始化位0
//	for (i = 1; i <= n; i++)
//	{
//		visited[i] = 0;
//	}
//	DFS(g, 2);
//	printf("\n");
//	return 0;
//}

////顺序查找
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
//	int sz = sizeof(arr) / sizeof(arr[0]);//元素的个数
//	int n = 0;//要查找的元素
//	printf("请输入你要查找的元素:> ");
//	scanf("%d", &n);
//	int ret = seq_search(arr, sz, n); //如果查找到了，返回所查找元素的下标，没有找到则返回-1
//	if (ret == -1)
//		printf("没有查找到！\n");
//	else
//		printf("该元素在表中的下标位:> %d\n", ret);
//	return 0;
//}



////折半查找（二分查找）
//#include <stdio.h>
//int bin_search(int arr[], int sz, int n)
//{
//	int left = 0;  //指向表的首元素
//	int right = sz - 1; //指向表的最后一个元素
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
//	printf("请输入你要查找到元素:> ");
//	scanf("%d", &n);
//	int ret = bin_search(arr, sz, n);
//	if (ret == -1)
//		printf("没有找到该元素！\n");
//	else
//		printf("该元素的下标是:> %d\n", ret);
//	return 0;
//}