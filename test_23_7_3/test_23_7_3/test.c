#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

////5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
////Aѡ��˵��B�ڶ����ҵ���
////Bѡ��˵���ҵڶ���E����
////Cѡ��˵���ҵ�һ��D�ڶ�
////Dѡ��˵��C����ҵ���
////Eѡ��˵���ҵ��ģ�A��һ
////����������ÿλѡ�ֶ�˵����һ�룬����ȷ������������
//int main()
//{
//	for (int a = 1; a <= 5; a++)
//	{
//		for (int b = 1; b <= 5; b++)
//		{
//			for (int c = 1; c <= 5; c++)
//			{
//				for (int d = 1; d <= 5; d++)
//				{
//					for (int e = 1; e <= 5; e++)
//					{
//						if (((b == 2 && a != 3) || (b != 2 && a == 3)) &&
//							((b == 2 && e != 4) || (b != 2 && e == 4)) &&
//							((c == 1 && d != 2) || (c != 1 && d == 2)) &&
//							((c == 5 && d != 3) || (c != 5 && d == 3)) &&
//							((e == 4 && a != 1) || (e != 4 && a == 1)))
//						{
//							printf("ѡ��A B C D E����������Ϊ��%d %d %d %d %d\n", a, b, c, d, e);
//							return;
//						}
//					}
//				}
//			}
//		}
//	}
//}


////�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ��
////����Ϊ4�����ɷ��Ĺ���:
////A˵��������
////B˵����C
////C˵����D��
////D˵��C�ں�˵
////��֪3����˵���滰��1����˵���Ǽٻ���
////�����������Щ��Ϣ��дһ��������ȷ������˭������
//int main()
//{
//	for (int i = 0; i < 4; i++)
//	{
//
//	}
//}


////����Ļ�ϴ�ӡ�������
////   1
////  1 1
//// 1 2 1
////1 3 3 1
//// 
////1
////1 1
////1 2 1
////1 3 3 1
//int main()
//{
//	printf("������һ����������");
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10][10] = { 0 };
//	for (int i = 0; i < n; i++) // ��������
//	{
//		//��ӡÿһ��
//		for (int k = i; k < n - 1; k++) //��ӡ�ո�
//		{
//			printf("  ");
//		}
//		for (int j = 0; j <= i; j++) //��ӡÿһ�У������鸳ֵ����ӡ
//		{
//			if (j == 0 || i == j)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//			printf("%-2d  ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//// ��㶨��
//typedef struct Node {
//    char* token; // ָ������
//    int matched; // ƥ���־���Ƿ�ƥ��
//    struct Node* next; // ָ����һ�����
//} Node;
//
//// ����ƥ�亯��:����1˵��ƥ��
//int match(char* pattern, char* fact) 
//{
//    if (strcmp(pattern, fact) == 0) 
//    {
//        return 1;
//    }
//    return 0;
//}
//
//// Rete�㷨������
//void reteAlgorithm(char** patterns, int numOfPatterns, char** facts, int numOfFacts) 
//{
//    // ����������������һ�����飬������ÿ��Ԫ����node*����
//    Node** network = (Node**)malloc(sizeof(Node*) * numOfPatterns);
//
//    // ��ʼ��������
//    for (int i = 0; i < numOfPatterns; i++) // �����е���������
//    {
//        network[i] = (Node*)malloc(sizeof(Node)); // �ȷ���һ�����ռ�
//        network[i]->token = patterns[i]; 
//        network[i]->matched = 0;
//        network[i]->next = NULL;
//    }
//
//    // ���й���ƥ��
//    for (int i = 0; i < numOfPatterns; i++) {
//        for (int j = 0; j < numOfFacts; j++) {
//            if (match(network[i]->token, facts[j])) {
//                network[i]->matched = 1;
//                printf("Pattern matched: %s\n", network[i]->token);
//            }
//        }
//    }
//
//    // �ͷ��������ڴ�
//    for (int i = 0; i < numOfPatterns; i++) {
//        free(network[i]);
//    }
//}
//
//// ���Դ���
//int main() {
//    char* patterns[] = { "A", "B", "C" };
//    char* facts[] = { "A", "C", "D" };
//
//    int numOfPatterns = sizeof(patterns) / sizeof(patterns[0]);
//    int numOfFacts = sizeof(facts) / sizeof(facts[0]);
//
//    reteAlgorithm(patterns, numOfPatterns, facts, numOfFacts);
//
//    return 0;
//}


//void test(int arr[100], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	test(arr, 10);
//}

////��ϰʹ�ÿ⺯��qsort
//#include <stdlib.h>
//#include <string.h>
//typedef struct Student
//{
//	int age;
//	char name[10];
//}Student;
//
////�����αȽ�
//int cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//
////�Խṹ������Ƚ�
//int cmp_struct_age(const void* p1, const void* p2)
//{
//	return ((Student*)p1)->age - ((Student*)p2)->age;
//}
//
////�Խṹ�������Ƚ�
//int cmp_struct_name(const void* p1, const void* p2)
//{
//	return strcmp(((Student*)p1)->name, ((Student*)p2)->name);
//}
//
//void test1() // �����ν�������
//{
//	int arr[] = { 90, -67, -3, 0, 0, -3, 98, 3, 4, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(int), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void test2() // �Խṹ����������
//{
//	Student s[] = { {10, "zhangsan"}, {20, "lisi"}, {90, "wangwu"}, {87, "xiaoming"}, {30, "xiaohao"} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(Student), cmp_struct_age);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("age = %d, name = %s\n", s[i].age, s[i].name);
//	}
//}
//
//void test3() // �Խṹ����������
//{
//	Student s[] = { {10, "zhangsan"}, {20, "lisi"}, {90, "wangwu"}, {87, "xiaoming"}, {30, "xiaohao"} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(Student), cmp_struct_name);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("age = %d, name = %s\n", s[i].age, s[i].name);
//	}
//}
//
//int main()
//{
//	printf("����������\n");
//	test1(); // �����ν�������
//	printf("�Խṹ�尴��������\n");
//	test2(); // �Խṹ����������
//	printf("�Խṹ�尴��������\n");
//	test3(); // �Խṹ����������
//	return 0;
//}

//#include <stdlib.h>
//#include <string.h>
//
////����ʵ�ֿ⺯��qsqrt
//typedef struct Student
//{
//	int age;
//	char name[10];
//}Student;
//
////�����αȽ�
//int cmp_int(const void *p1, const void *p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//
////�Խṹ������Ƚ�
//int cmp_struct_age(const void *p1, const void *p2)
//{
//	return ((Student*)p1)->age - ((Student*)p2)->age;
//}
//
////�Խṹ�������Ƚ�
//int cmp_struct_name(const void* p1, const void* p2)
//{
//	return strcmp(((Student*)p1)->name, ((Student*)p2)->name);
//}
//
////�����������������򣺲��ÿ���˼��:��С��������
//void my_qsort(void* base, int num, int size, int(*cmp)(void*, void*))
//{
//	char* ptmp = (char*)malloc(size); //����һ��size��С�Ŀռ䣬������������
//	if (ptmp != NULL)
//	{
//		memcpy(ptmp, (char*)base, size); //��������
//	}
//	else
//	{
//		printf("���ٿռ�ʧ�ܣ�\n");
//		return;
//	}
//	int left = 0;
//	int right = num - 1;
//	while (left < right)
//	{
//		while (left < right && cmp(ptmp, (char*)base + size * right) <= 0) //�Ӻ���ǰ��С�������Ԫ��
//		{
//			right--;
//		}
//		memcpy((char*)base + size * left, (char*)base + size * right, size); //���ҵ���Ԫ�ظ��Ƶ�ǰ��
//		while (left < right && cmp(ptmp, (char*)base + size * left) >= 0) //��ǰ�����Ҵ��������Ԫ��
//		{
//			left++;
//		}
//		memcpy((char*)base + size * right, (char*)base + size * left, size); //���ҵ���Ԫ�������Ƶ�����
//	}
//	memcpy((char*)base + size * left, ptmp, size); //�����λ
//
//	//�ж��Ƿ�Ҫ�ݹ�
//	if (left > 1) // ��һ��д��ʱ��û����õݹ������
//	{
//		my_qsort((char*)base, left, size, cmp); //�����ӱ�����
//	}
//	if (num - 1 - left > 1) // ��һ��д��ʱ��д���������������ʼλ�ã�leftû�м�1
//	{
//		my_qsort((char*)base + size * (1 + left), num - 1 - left, size, cmp); //�����ӱ�����
//	}
//}
//
//void test1() // �����ν�������
//{
//	int arr[] = {90, -67, -3, 0, 0, -3, 98, 3, 4, 6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_qsort(arr, sz, sizeof(int), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void test2() // �Խṹ����������
//{
//	Student s[] = { {10, "zhangsan"}, {20, "lisi"}, {90, "wangwu"}, {87, "xiaoming"}, {30, "xiaohao"} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	my_qsort(s, sz, sizeof(Student), cmp_struct_age);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("age = %d, name = %s\n", s[i].age, s[i].name);
//	}
//}
//
//void test3() // �Խṹ����������
//{
//	Student s[] = { {10, "zhangsan"}, {20, "lisi"}, {90, "wangwu"}, {87, "xiaoming"}, {30, "xiaohao"} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	my_qsort(s, sz, sizeof(Student), cmp_struct_name);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("age = %d, name = %s\n", s[i].age, s[i].name);
//	}
//}
//
//int main()
//{
//	printf("����������\n");
//	test1(); // �����ν�������
//	printf("�Խṹ�尴��������\n");
//	test2(); // �Խṹ����������
//	printf("�Խṹ�尴��������\n");
//	test3(); // �Խṹ����������
//	return 0;
//}




////���Ͼ���
////��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ����
////Ҫ��ʱ�临�Ӷ�С��O(N)
//int main()
//{
//	int a[4][5] = { {1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15}, {16,17,18,19,20} };
//	printf("��������Ҫ���ҵ�����");
//	int input = 0;
//	scanf("%d", &input);
//	int i = 0, j = 0;
//	for (i = 0; i < 4; i++)
//	{
//		if (input <= a[i][4])
//			break;
//	}
//	for (j = 0; i < 4 && j < 5; j++)
//	{
//		if (input == a[i][j])
//		{
//			printf("�ҵ��ˣ��±�Ϊ��%d, %d\n", i, j);
//			return 0;
//		}
//	}
//	printf("û���ҵ�!\n");
//}


////�ַ�������
////ʵ��һ�����������������ַ����е�k���ַ�
////���磺
////ABCD����һ���ַ��õ�BCDA
////ABCD���������ַ��õ�CDAB��
////˼·��������ת���ַ�������һ�ݣ�ƴ���ں��棬��ת������ֱ�Ӵӵڼ���λ����ȡ�ַ��������Ⱦ���������ת����ַ���
//#include <string.h>
//int main()
//{
//	char str[100] = { 0 };
//	int input = 0;
//	printf("������һ���ַ�����");
//	scanf("%s", str);
//	printf("��������Ҫ��ת���ٸ��ַ���");
//	scanf("%d", &input);
//
//	int len = strlen(str); // ���ַ����ĳ���
//	strncpy(str + len, str, len); //��ԭ�����ַ���������ƴ��һ���ַ�����������������Զ�����ַ���������־
//	int k = input % len; //������ת���ַ�����
//	for (int i = 0; i < len; i++) //�����ת����ַ���
//	{
//		printf("%c", str[k + i]);
//	}
//}



//�ַ�����ת���
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ���
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
//˼·����������ַ������Ȳ���ȣ���һ����������ת֮��õ��ģ��������£���һ���ַ�������һ��ƴ��������棬Ȼ����ƴ�Ӻ���ַ��������һ���ַ���
#include <string.h>
int main()
{
	char str1[100] = { 0 };
	char str2[100] = { 0 };
	printf("�������һ���ַ�����");
	scanf("%s", str1);
	printf("������ڶ����ַ�����");
	scanf("%s", str2);

	int len1 = strlen(str1); // ���ַ���1�ĳ���
	int len2 = strlen(str2); // ���ַ���2�ĳ���
	if (len1 != len2)
	{
		printf("������ת�õ���\n");
		return 0;
	}

	strncpy(str1 + len1, str1, len1); //��ԭ�����ַ���������ƴ��һ���ַ���
	//��ƴ�Ӻ���ַ����в�������һ���ַ���
	for (int i = 0; i <= len1; i++)
	{
		if (strncmp(str1 + i, str2, len1) == 0)
		{
			printf("������ת�õ���\n");
			return 0;
		}
	}
	printf("������ת�õ���\n");
	return 0;
}