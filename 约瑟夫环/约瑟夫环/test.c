#define _CRT_SECURE_NO_WARNINGS 1
////约瑟夫环问题
////循环链表解决
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//
//typedef struct Node
//{
//	int Date;
//	struct Node *next;
//}JoseNode, *PNode, *HNode;
//
//void Jose_init(HNode h)
//{
//	assert(h);
//	//循环单链表
//	h->next = h;
//}
//
//void Jose_insert(HNode h, int n)
//{
//	HNode q = h;
//	HNode p = NULL;
//
//	//将头节点赋值为第一个人
//	h->Date = 1;
//	h->next = h;
//
//	//将剩余的 n - 1 个人依次插入到循环链表当中
//	for (int i = 2; i <= n; i++)
//	{
//		p = (HNode)malloc(sizeof(JoseNode));
//		p->Date = i;
//		q->next = p;
//		p->next = h;
//		q = q->next;
//	}
//}
//
//void Traverse_list(HNode h, int n)
//{
//	assert(h);
//	HNode p = h;
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", p->Date);
//		p = p->next;
//	}
//	printf("\n");
//}
//
//void Jose_delete(HNode h, int n ,int m)
//{
//	HNode p = h;
//	HNode q = NULL;
//	while (n-- > 1)
//	{
//		int k = m - 2;
//		while (k-- > 0)
//		{
//			p = p->next;
//		}
//		q = p->next;
//		printf("出局的人为: %d\n", q->Date);
//		p->next = q->next;
//		free(q);
//		p = p->next;
//	}
//	printf("最后获胜的人为: %d\n", p->Date);
//}
//
//
//int main()
//{
//	int N = 0;  //参与人数
//	int M = 0;  //出局密码
//	printf("请输入参与人数：");
//	scanf("%d", &N);
//	printf("请输入出局密码：");
//	scanf("%d", &M);
//
//	//创建一个头节点
//	HNode h = (HNode)malloc(sizeof(JoseNode));
//
//	//初始化单链表
//	Jose_init(h);
//
//	//单链表插入操作
//	Jose_insert(h, N);
//
//	//遍历循环列表
//	Traverse_list(h, N);
//
//	//出局函数
//	Jose_delete(h, N, M);
//
//	return 0;
//}