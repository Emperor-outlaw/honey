#define _CRT_SECURE_NO_WARNINGS 1
//�ڴ溯�� 
//sep�����Ǹ��ַ����������������ָ������ַ�����
//��һ������ָ��һ���ַ�������������0�����߶����sep�ַ�����һ�����߶���ָ����ָ�ı�ǡ�
//strtok�����ҵ�str�е���һ����ǣ��������� \0 ��β������һ��ָ�������ǵ�ָ�롣��ע��strtok�������
//�䱻�������ַ�����������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸ġ���
//strtok�����ĵ�һ��������Ϊ NULL ���������ҵ�str�е�һ����ǣ�strtok���������������ַ����е�λ�á�
//strtok�����ĵ�һ������Ϊ NULL ����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ����ǡ�
//����ַ����в����ڸ���ı�ǣ��򷵻� NULL ָ��
//char* strtok(char* str , const char* sep)
//#include <stdio.h>
//#include <string.h> 
//int main()
//{
// char arr[]="2667209799@qq.com";
// const char* sep="@.";
//// printf("%s\n",strtok(arr,sep));
//// printf("%s\n",strtok(NULL,sep));
//// printf("%s\n",strtok(NULL,sep));
//    char arr1[20]={0};
//    strcpy(arr1,arr);//��Ϊstrtok�������޸�ԭ���ĺ��������Կ���һ���ַ�������
//    char * ret=NULL;
//    for(ret=strtok(arr1,sep);ret!=NULL;ret=strtok(NULL,sep))
//    {
//     printf("%s\n",ret);
//    } 
// return 0;
//} 
//���ش���������Ӧ�Ĵ������Ϣ 
//char* strerror (int errnum)
//#include <stdio.h>
//#include <string.h> 
//#include <errno.h>
//int main()
//{
//// printf("%s\n",strerror(1));
//// printf("%s\n",strerror(2));
//// printf("%s\n",strerror(3));
////  ���ļ� 
//    FILE* pf = fopen("test.txt",'r');
//    if(pf==NULL)
//    {
//     printf("%s\n",strerror(errno));
//  return 0; 
//    }
////  ���ļ�
////  �ر��ļ�  
//    fcolse(pf);
//    pf=NULL;
// return 0;
//}
//�ַ����ຯ��
//������ĺ����������������ͷ�����
//iscntrl�����κο����ַ�
//isspace�����հ��ַ����ո�' ',��ҳ'\f',����'\n',�س�'\t',�Ʊ��'\t'���ߴ�ֱ�Ʊ��'\v'
//isdigit����ʮ��������0~9
//isxdigit����ʮ���������֣���������ʮ�������֣�Сд��ĸa~f,��д��ĸA~F
//islower ����Сд��ĸa~z
//isupper������д��ĸA~Z
//isalpha������ĸa~z��A~Z 
//isalnum������ĸ�������֣�a~z,A~Z,0~9 
//ispunct���������ţ��κβ��������ֻ�����ĸ���ַ����ɴ�ӡ��
//isgraph�����κ�ͼ���ַ�
//isprint�����κοɴ�ӡ�ַ�������ͼ���ַ��Ϳհ��ַ� 

//����memcpy��source��λ�ÿ�ʼ�����num���ֽڵ����ݵ�destination���ڴ�λ�á�
//������������� '\0' ��ʱ�򲢲���ͣ������
//���source��destination���κε��ص������ƵĽ������δ�����
//void * memcpy ( void * destination, const void * source, size_t num )�����ڴ濽���������κ����Ͷ����Կ����� 
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int arr1[20] = { 0 };
//	memcpy(arr1, arr, 36);
//	for (i = 0; i<9; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}


//һ��������ֻ�����������ǳ���һ�Σ������������ֶ��������Σ��ҳ�������ֻ����һ�ε����֣����ʵ��
//#include <stdio.h>
//void find_diff_num(int arr[], int sz, int* n1, int* n2)
//{
//	int i = 0;
//	int tmp = 0;
//	int pos = 0;
//	//1�����
//	for (i = 0; i < sz; i++)
//	{
//		tmp ^= arr[i];
//	}
//	//2���������Ľ��tmp�ж�����λ��һλ��1
//	for (i = 0; i < sz; i++)
//	{
//		if (((tmp >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	//3������
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//			*n1 ^= arr[i];
//		else
//			*n2 ^= arr[i];
//	}
//}
//int main()
//{
//	int arr[] = { 1, 3, 5, 6, 1, 3, 6, 7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int num1 = 0;
//	int num2 = 0;
//	find_diff_num(arr, sz, &num1, &num2);
//	printf("%d  %d\n", num1, num2);
//	return 0;
//}
//����ˮ��һƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ
//#include <stdio.h>
//int main()
//{
//	int money = 0;
//	printf("������Ǯ��\n");
//	scanf("%d", &money);
//	int empty = money;
//	int total = money;
//	if (money > 0)
//		total = money * 2 - 1;
//	else
//		total = 0;
//	//����������㷨���ֹ��ɣ��Ż�Ϊ�����㷨
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	printf("total = %d\n", total);
//	return 0;
//}
//ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//#include <stdio.h>
//#include <string.h>
//My_leftmove(char* arr, int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	while (k--)
//	{
//		char tmp = arr[0];
//		for (i = 1; i < len ; i++)
//		{
//			arr[i - 1] = arr[i];
//		}
//		arr[i-1] = tmp;
//	}
//}
//int main()
//{
//	int k = 0;
//	char arr[20] = { 0 };
//	printf("�������ַ���\n");
//	scanf("%s", arr);
//	printf("��������Ҫ�����Ĵ���\n");
//	scanf("%d", &k);
//	My_leftmove(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}
//�ж�һ���ַ����Ƿ�Ϊ��һ���ַ�����ת֮����ַ�����
//���磺����S1=AABCD �� S2=BCDAA������1
//����S1=abcd �� S2=ACBD,����0��
//1����һ�ַ�����ͨ��ÿ����תһ�Σ�Ȼ���ж������ַ����Ƿ���ȣ�strcmy)
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//void My_leftmove(char* arr, int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	char tmp = arr[0];
//	for (i = 1; i < len ; i++)
//	{
//		arr[i - 1] = arr[i];
//	}
//	arr[i-1] = tmp;
//}
//int compare(char arr[], const char* str)
//{
//	assert(str != NULL);
//	int len1 = strlen(arr);
//	int len2 = strlen(str);
//	if (len1 != len2)
//		return 0;
//	while (len1--)
//	{
//		if (strcmp(arr, str) == 0)
//		    return 1;
//		else
//			My_leftmove(arr, 1);
//	}
//	return 0;
//}
//int main()
//{
//	printf("abcdefgh\n");
//	char arr[20] = { 0 };
//	printf("�������ַ���\n");
//	scanf("%s", arr);
//	int ret = compare(arr, "abcdefgh");
//	if (ret == 1)
//		printf("Yes!\n");
//	else
//		printf("N0!\n");
//	return 0;
//}
//2���ڶ���:ͨ�������е�һ���ַ���׷�ӵ��Լ����棬Ȼ����׷�ӵ�����ַ�����Ѱ����һ���ַ���
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//int compare(char* arr, const char* str)
//{
//	assert(str != NULL);
//	if (strlen(arr) != strlen(str))
//		return 0;
//	strncat(arr, arr, strlen(arr));
//	if (strstr(arr, str) == NULL)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	printf("abacDEfgHsdji\n");
//	char arr[40] = { 0 };//����Ҫ�㹻��
//	printf("�������ַ���\n");
//	scanf("%s", arr);
//	int ret = compare(arr, "abacDEfgHsdji");
//	if (ret == 1)
//		printf("Yes!\n");
//	else
//		printf("N0!\n");
//	return 0;
//}
