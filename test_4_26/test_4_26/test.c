#define _CRT_SECURE_NO_WARNINGS 1
////���Ȳ������Ƶ��ַ�������
////strcpy�����ַ�������
//Դ�ַ��������� '\0' ������
//�ὫԴ�ַ����е� '\0' ������Ŀ��ռ䣻 
//Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ�����
//Ŀ��ռ����ɱ䡣
//#include <stdio.h>
//#include <assert.h>
//char* My_strcpy(char* dest, const char* scr)
//{
//	assert(dest != NULL);
//	assert(scr != NULL);
//	char* ret = dest;
//	//while (*scr)
//	//{
//	//	*dest = *scr;
//	//	scr++;
//	//	dest++;
//	//}
//	//*dest = *scr;
//	while (*dest++ = *scr++)
//		;
//	return ret;
//}
//int main()
//{
//	char arr[20] = { 0 };
//	char* p = "hello bit!";
//	My_strcpy(arr, p);
//	printf("%s\n", arr);
//	return 0;
//}

////strcmp�����ַ����Ƚϣ���һ���󷵻ش���0�����֣���ȷ���0���ڶ����󷵻�С��1�����֣�
//#include <stdio.h>
//#include <assert.h>
//int My_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2 && *s1 != '\0')
//	{
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//int main()
//{
//	char* str1 = "hello world!";
//	char* str2 = "hello bit!";
//	int ret = My_strcmp(str1, str2);
//	if (ret > 0)
//	{
//		printf("The first one is bigger than the second one!\n");
//	}
//	else if (ret == 0)
//	{
//		printf("The first one is equal to the second one!\n");
//	}
//	else
//	{
//		printf("The first one is smaller than the second one!\n");
//	}
//	return 0;
//}

////strcat�����ַ���׷��
//Դ�ַ��������� '\0' ����
//Ŀ��ռ�������㹻�Ĵ���������Դ�ַ���������
//Ŀ��ռ������޸�
//#include <stdio.h>
//#include <assert.h>
//char* My_strcat(char* dest, const char* scr)
//{
//	char* ret = dest;
//	assert(dest && scr);
//	if (*scr == '\0')
//		return ret;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *scr++)
//		;
//	return ret;
//}
//int main()
//{
//	char arr[20] = "hello ";
//	char* str = "everyone!";
//	My_strcat(arr, str);
//	printf("%s\n", arr);
//	return 0;
//}

//���������Ƶ��ַ���������������ȫ�ԱȲ������Ƶĺ�����Խϸߣ�
//strncpy�����ַ�������
//����num���ַ���Դ�ַ�����Ŀ��ռ�
//���Դ�ַ����ĳ���С��num���򿽱���Դ�ַ���֮����Ŀ��ĺ��׷��0��ֱ��num��
//#include <stdio.h>
//#include <assert.h>
//char* My_strncpy(char* dest, const char* scr,int num)
//{
//	assert(dest != NULL);
//	assert(scr != NULL);
//	char* ret = dest;
//	if (*scr == '\0')
//		return ret;
//	while (num && *scr)
//	{
//		*dest++ = *scr++;
//		num--;
//	}
//	while (num--)
//	    *dest = '\0';
//	return ret;
//}
//int main()
//{
//	char arr[20] = { 0 };
//	char* p = "hello bit!";
//	int num = 10;
//	My_strncpy(arr, p, num);
//	printf("%s", arr);
//	return 0;
//}

//strncmp�����ַ����ȽϺ���
//�Ƚϵ���������ַ���һ������һ���ַ�����������num���ַ�ȫ���Ƚ���
//#include <stdio.h>
//#include <assert.h>
//int My_strncmp(const char* s1, const char* s2, int num)
//{
//	assert(s1 && s2);
//	while (num && *s1 == *s2 && *s1 != '\0')
//	{
//		s1++;
//		s2++;
//		num--;
//	}
//	return *s1 - *s2;
//}
//int main()
//{
//	char* str1 = "hello world!";
//	char* str2 = "hello bit!";
//	int num = 5;
//	int ret = My_strncmp(str1, str2, num);
//	if (ret > 0)
//	{
//		printf("The first one is bigger than the second one!\n");
//	}
//	else if (ret == 0)
//	{
//		printf("The first one is equal to the second one!\n");
//	}
//	else
//	{
//		printf("The first one is smaller than the second one!\n");
//	}
//	return 0;
//}

////strncat�����ַ���׷��
//#include <stdio.h>
//#include <assert.h>
//char* My_strcat(char* dest, const char* scr ,int num)
//{
//	char* ret = dest;
//	assert(dest && scr);
//	if (*scr == '\0')
//		return ret;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (num!=0  && (*dest++ = *scr++))
//		num--;
//	while (num--)
//		*dest = '\0';
//	return ret;
//}
//int main()
//{
//	char arr[20] = "hello ";
//	char* str = "everyone!";
//	int num = 5;
//	My_strcat(arr, str,num);
//	printf("%s\n", arr);
//	return 0;
//}

//strchr�����ַ����Һ���
//��һ���ַ��������һ���ַ�������ҵ����ر������ַ������һ�γ��ָ��ַ��ĵ�ַ
//�Ҳ����ͷ���(NULL)
//#include <stdio.h>
//char* My_strchr(const char* dest, char k)
//{
//	while (*dest != k && *dest!='\0')
//		dest++;
//	if (*dest == '\0')
//		return (NULL);
//	else
//		return (char*)dest;
//}
//int main()
//{
//	char arr[] = "ahfdkdido";
//	char* ret = My_strchr(arr, '\0');
//	printf("%s", ret);
//	return 0;
//}

//strstr�����ַ������Һ���
//��һ���ַ����������һ���ַ���������ҵ� ����Ҫ���ҵ��ַ��� �ڱ����ҵ��ַ����еĶ�Ӧ��Ԫ�ص�ַ
//û���ҵ��ͷ��أ�NULL��
//#include <stdio.h>
//#include <assert.h>
//#include <string.h>
//char* My_strstr(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	const char* p1 = s1;
//	const char* p2 = s2;
//	const char* start = p1;
//	if (*p2 == '\0')
//		return (char*)s1;
//	while (*start && len1 >= len2)
//	{
//		p1 = start;
//		p2 = s2;
//		while (*p1 && *p2 && *p1 == *p2)
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//			return (char*)start;
//		start++;
//		len1--;
//	}
//	return (NULL);
//}
//int main()
//{
//	char arr[] = "addjjjgkl";
//	char* str = "jjg";
//	char* ret = My_strstr(arr, str);
//	printf("%s\n", ret);
//	return 0;
//}
