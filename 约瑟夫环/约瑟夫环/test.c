#define _CRT_SECURE_NO_WARNINGS 1
//////Լɪ������(1.���� 2.���� 3.�ݹ�)
//////1.����ѭ��������
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//
//typedef struct Node
//{
//	int Date;
//	struct Node *next;
//}JoseNode, *HNode;
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
//		printf("���ֵ���Ϊ��%d ��\n", q->Date);
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
//	//Traverse_list(h, N);
//
//	//���ֺ���
//	Jose_delete(h, N, M);
//
//	return 0;
//}


//2.����
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
////����ĵ�һ�ַ�����
////׼������
////N ������������ ,M ������ֵ�����
////�ȴ���һ��NԪ�ش�С������(ÿ��Ԫ��ģ��һ����)������ȫ����ʼ��Ϊ0(ֱ����calloc��������ռ䲢��Ҳ�Զ���ʼ��Ϊ0)�����������û�б���̭���������ĳһ����Ҫ����̭����ô����Ԫ����Ϊ1��������̭��
////�ӵ�һ���˿�ʼ��������Mʱ����˱���̭������Ԫ�ظ�ֵΪ1��������̭����Ȼ��ӱ���̭����һ�������¿�ʼ��������Mʱ����˱���̭��ѭ�����������ֱ��������ȫ������̭��Ҳ�����������Ԫ��ȫ������Ϊ1��
////���ȷ���ĸ��˱���̭��Ҳ�����ĸ�Ԫ��Ҫ����Ϊ1������ʱ�������õ������±꣬������һ�����⣬���������Ǵ��±�Ϊ0��ʼ���Ԫ�صģ��������Ҫ��̭���˵ı�� = ������±� + 1��
////�����趨һ��������int number = 0����ʼ��Ϊ0��Ϊʲô����Ϊ0���Ȼῴ�����ʱ��ͻ����ף���
////��ʼ��̭��
////�жϵ�һ������0������û�б���̭������������1(��ʱnumber = 1)����ǰ�����±��1��ָ����һ��Ԫ�أ�
////�жϵڶ�������0������û�б���̭������������1����ʱ������number = 2������ǰ�����±��1��ָ����һ��Ԫ��,��ʱnumber == M,��ô��Ҫ���������̭��������˶�Ӧ��Ԫ�ظ�ֵΪ1����Ȼ��Լ�������0����Ϊ�´μ���Ҫ���¿�ʼ��1������
////�жϵ���������0������û�б���̭������������1(��ʱnumber = 1)����ǰ�����±��1��ָ����һ��Ԫ�أ�
////�жϵ��ĸ�����0������û�б���̭������������1����ʱ������number = 2������ǰ�����±��1��ָ����һ��Ԫ��,��ʱnumber == M,��ô��Ҫ���������̭��������˶�Ӧ��Ԫ�ظ�ֵΪ1����Ȼ��Լ�������0.
////��ʱ��������Ѿ����ʵ����һ��Ԫ���ˣ���ôӦ����μ����ص����鿪ͷ���ŷ����ء����ǿ�ʼ��̭�˵�ʱ����õ���ÿ���ж�һ���ˣ���ǰ������±��1�����������һ��Ԫ�ص�ʱ�������±��1�������Խ���ˣ���û�лص����鿪ͷ�������ʣ���Ϊ�˲�û��ȫ������̭����Ҫ������̭��Ŀǰ�Ѿ��������һ��Ԫ�أ�Ҫ������һ��Ԫ�ؼ������ʣ�Ȼ���������һ��Ԫ���Ѿ�û���ˣ�����Ҫ�����鿪ͷ�������ʣ���
////�����������Ԫ�غܶ�ʱ����һ�飬�ڶ��飬��������ܶ����ܽ��������Ԫ��ȫ����̭����ʱ��Ҫ���ص�����Ŀ�ͷ�������ʣ�����ܽ�����ѭ�����������Ǿͺ����׵�һֱ������ȥ��
////�������ˣ���ô��ν�����ѭ�����������ǽ�������±�ѭ�������Ϳ��Խ�����ѭ����������Ϊ����ʱͨ���±�����������ģ�
////         �����һ�룬��4��Ԫ�ص��±���3���������±�3��1��ȡģ(�����ģ�����ǲ��������N)�������0���պ��������һ��Ԫ�ص��±꣬���Ǵ�ʱ�ͻص�������Ŀ�ͷ
////         �е�ͬѧ���ܻ��룺�ѵ�ֻ�е������һ��Ԫ��ʱ����������ص���ͷ������ôȷ���������һ��Ԫ�����أ�
////         ��ʵ���ǿ����г������ʽ�������һ��Ԫ�ػص���ͷ��Ҳ����������ѭ�������Ĺ�ʽ����index = ��index + 1��% N (index��������±�)
////         ���ǿ��Է��������Ժ��ò��������±��1�ķ��������ʣ�����ֱ�����������ʽҲ���Դﵽͬ����Ч��������ʼ�±�Ϊ0���������빫ʽ����±���1�����±�1������������±���2���ȵȽ��±�3�����һ��Ԫ�أ�������������±���0���ֻص�������Ŀ�ͷ���ﵽ��ѭ����Ŀ��
////��󴴽�һ������alive����¼����ŵ�������û��̭һ����alive��Ҫ��1��ֱ������0���������
////ע�⣺�����Ҳ��ö�̬������һ������ռ䣬Ȼ���ʼ��Ϊ0(calloc�����Զ���ʼ��Ϊ0)�����Ҳ����ֱ�ӷ���һ��N��С������ռ䣬���ҳ�ʼΪ0.
//
//void Joseph(int count, int doom)
//{
//	int alive = count;       //��������
//	int number = 0;      //��������number == m ʱ����̭�����
//	int index = 0;       //������±�
//	int *circle = NULL;  //����ָ�루ָ�����Ŀռ䣩
//	circle = (int *)calloc(count, sizeof(int));  //����һ��nԪ�ش�С�Ŀռ�����
//	assert(circle);    //�������Ƿ�ɹ�
//	�������Ƿ�ɹ�Ҳ�������������
//	/*if (circle == NULL)
//	{
//		pritnf("����ռ�ʧ�ܣ�\n");
//		return;
//	}*/
//
//	ֻҪalive > 0�ͼ�����̭��һ����
//	while (alive > 0)
//	{
//		number += 1 - circle[index];   //��Ϊ����Ԫ�ز���1����0��0����û�б���̭��1������̭�������0��1-circle[index]��һ������1��number�Ľ����������1���൱����������һ�Σ������1��1-circle[index]��һ������0��number�Ľ���Ͳ��䣬�൱�ڱ���̭���Ǹ��˾�û����������
//		if (number == doom)
//		{
//			���if������˵�������Ҫ����̭
//			circle[index] = 1;   //����̭������˵ĸ�ֵΪ1
//			1 == alive ? printf("%d ", index + 1) : printf("%d ", index + 1);//����̭��ÿ���˴�ӡ����
//			number = 0;  //����������0���Է����´����¼���
//			alive--;    //�Ҵ���������
//		}
//		index = (1 + index) % count;  //��һ��Ҫ������Ԫ�ص��±�
//	}
//	������Ŀռ��ͷŵ�
//	free(circle);
//	circle = NULL;
//}
//int main()
//{
//	int N = 0;   //���������
//	int M = 0;   //���ֵ�����
//	printf("�������������:");
//	scanf("%d", &N);
//	printf("�������������:");
//	scanf("%d", &M);
//
//	Joseph(N, M);
//
//	return 0;
//}

////����ĵڶ��ַ���
////�Ե�һ�ַ����������Ż�������̭��Ԫ�ؽ���ɾ����ȥ����if ������̭���˻�Ҫ�����жϣ�������ʱ�临�Ӷ�(����㷨�͵�һ���㷨��������Ԫ��ֵ�����˱仯)
//#include <stdio.h>
//#include <assert.h>
//#include <stdlib.h>
//
//void Joseph(int count, int doom)
//{
//	int alive = count;       //��������
//	int number = 0;          //��������number == m ʱ����̭�����
//	int index = 0;           //������±�
//	int curpoint = 0;        //ָ��ǰԪ�ص�ָ��
//	int prepoint = 0;        //ָ��circle[curpoint]��ǰ��
//	int *circle = NULL;      //����ָ�루ָ�����Ŀռ䣩
//	circle = (int *)calloc(count, sizeof(int));  //����һ��nԪ�ش�С�Ŀռ�����
//	assert(circle);          //�������Ƿ�ɹ�
//	
//	//��ʼ������
//	for (index = 0; index < count; index++)
//	{
//		circle[index] = (index + 1) % count;
//	}
//
//	//ֻҪalive > 0�ͼ�����̭��һ����
//	while (alive > 0)
//	{
//		number++;   
//		if (number == doom)
//		{
//			//���if������˵�������Ҫ����̭
//			circle[prepoint] = circle[curpoint];  //ɾ������
//			1 == alive ? printf("%d ", curpoint + 1) : printf("%d ", curpoint + 1);
//			alive--;
//			number = 0;
//		}
//		else
//		{
//			prepoint = curpoint;
//		}
//		curpoint = circle[curpoint];
//
//		////�����if�ж�Ҳ���Ի���whileѭ����ֱ������������ʣ�ֱ���ҵ�Ҫ��̭����
//		//number = doom - 1;
//		//while (number-- > 0)
//		//{
//		//	prepoint = curpoint;
//		//	curpoint = circle[curpoint];
//		//}
//		//circle[prepoint] = circle[curpoint];  //ɾ������
//		//1 == alive ? printf("%d ", curpoint + 1) : printf("%d ", curpoint + 1);
//		//alive--;
//		//curpoint = circle[curpoint];
//	}
//	//������Ŀռ��ͷŵ�
//	free(circle);
//	circle = NULL;
//}
//int main()
//{
//	int N = 0;   //���������
//	int M = 0;   //���ֵ�����
//	printf("�������������:");
//	scanf("%d", &N);
//	printf("�������������:");
//	scanf("%d", &M);
//
//	Joseph(N, M);
//
//	return 0;
//}



////����ĵ����ַ���
////�Եڶ��ַ����������Ż���ȥ���˼�����������ȥ����ÿһ�ε��жϣ�ÿ��ֱ�Ӷ�λ��Ҫ��̭����
//#include <stdio.h>
//#include <assert.h>
//#include <stdlib.h>
//
//void Joseph(int count, int doom)
//{
//	int alive = count;       //��������
//	int index = 0;           //������±�
//	int curpoint = 0;        //ָ��ǰԪ�ص�ָ��
//	int prepoint = 0;        //ָ��circle[curpoint]��ǰ��
//	int *circle = NULL;      //����ָ�루ָ�����Ŀռ䣩
//	circle = (int *)calloc(count, sizeof(int));  //����һ��nԪ�ش�С�Ŀռ�����
//	assert(circle);          //�������Ƿ�ɹ�
//
//	//��ʼ������
//	for (index = 0; index < count; index++)
//	{
//		circle[index] = (index + 1) % count;
//	}
//
//	//ֻҪalive > 0�ͼ�����̭��һ����
//	while (alive > 0)
//	{
//		//ֱ�Ӽ����Ҫ�ƶ��Ĵ�������ʵѭ������������ʣ�����doom��Ԫ��ʱ�����Ż���
//		int num = doom % alive - 1;
//		for (int i = 0; i < (num == -1 ? alive - 1 : num); i++)
//		{
//			prepoint = curpoint;
//			curpoint = circle[curpoint];
//		}
//
//
//		circle[prepoint] = circle[curpoint];  //ɾ������
//		1 == alive ? printf("%d ", curpoint + 1) : printf("%d ", curpoint + 1);
//		alive--;
//		curpoint = circle[curpoint];
//	}
//	//������Ŀռ��ͷŵ�
//	free(circle);
//	circle = NULL;
//}
//int main()
//{
//	int N = 0;   //���������
//	int M = 0;   //���ֵ�����
//	printf("�������������:");
//	scanf("%d", &N);
//	printf("�������������:");
//	scanf("%d", &M);
//
//	Joseph(N, M);
//
//	return 0;
//}




////�ù�ʽ��(��N���˲���ʱ�����ջ�ʤ�ߵı��)
////��ʵ�����õ���ѭ���������У�ѭ������ȵȣ�ʱ�临�Ӷȸߴ�O(nm)���е������ﵽO(n^2),����μӵ������ͳ��������㹻�󣬸����������
////��ʱ�Ϳ���������ѧ�������������
////f[1] = 0
////f[N, M] = (f[N - 1, M] + M) % N
//#include <stdio.h>
//int Jose_recursion(int count, int doom)
//{
//	if (0 == count)
//		return 0;
//	else
//		return (Jose_recursion(count - 1, doom) + doom) % count;
//}
//
//int main()
//{
//	int N = 0;
//	int M = 0;
//	printf("������μӵ�����:");
//	scanf("%d", &N);
//	printf("��������ֵ�����:");
//	scanf("%d", &M);
//	int ret = Jose_recursion(N, M);
//	printf("���ջ�ʤ����Ϊ:%d ��\n", ret + 1);
//	return 0;
//}
