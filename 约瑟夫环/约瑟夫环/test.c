#define _CRT_SECURE_NO_WARNINGS 1
////Լɪ������
////ѭ��������
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
//	//ѭ��������
//	h->next = h;
//}
//
//void Jose_insert(HNode h, int n)
//{
//	HNode q = h;
//	HNode p = NULL;
//
//	//��ͷ�ڵ㸳ֵΪ��һ����
//	h->Date = 1;
//	h->next = h;
//
//	//��ʣ��� n - 1 �������β��뵽ѭ��������
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
//		printf("���ֵ���Ϊ: %d\n", q->Date);
//		p->next = q->next;
//		free(q);
//		p = p->next;
//	}
//	printf("����ʤ����Ϊ: %d\n", p->Date);
//}
//
//
//int main()
//{
//	int N = 0;  //��������
//	int M = 0;  //��������
//	printf("���������������");
//	scanf("%d", &N);
//	printf("������������룺");
//	scanf("%d", &M);
//
//	//����һ��ͷ�ڵ�
//	HNode h = (HNode)malloc(sizeof(JoseNode));
//
//	//��ʼ��������
//	Jose_init(h);
//
//	//������������
//	Jose_insert(h, N);
//
//	//����ѭ���б�
//	Traverse_list(h, N);
//
//	//���ֺ���
//	Jose_delete(h, N, M);
//
//	return 0;
//}