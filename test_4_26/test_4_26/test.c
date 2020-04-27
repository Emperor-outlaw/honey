#define _CRT_SECURE_NO_WARNINGS 1
////长度不受限制的字符串函数
////strcpy——字符串拷贝
//源字符串必须以 '\0' 结束；
//会将源字符串中的 '\0' 拷贝到目标空间； 
//目标空间必须足够大，以确保能存放源字符串；
//目标空间必须可变。
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

////strcmp——字符串比较（第一个大返回大于0的数字；相等返回0；第二个大返回小于1的数字）
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

////strcat——字符串追加
//源字符串必须以 '\0' 结束
//目标空间必须有足够的大，能容纳下源字符串的内容
//目标空间必须可修改
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

//长度受限制的字符串函数——（安全性比不受限制的函数相对较高）
//strncpy——字符串拷贝
//拷贝num个字符从源字符串到目标空间
//如果源字符串的长度小于num，则拷贝完源字符串之后，在目标的后边追加0，直到num个
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

//strncmp——字符串比较函数
//比较到出现另个字符不一样或者一个字符串结束或者num个字符全部比较完
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

////strncat——字符串追加
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

//strchr——字符查找函数
//在一个字符串里查找一个字符，如果找到返回被查找字符串里第一次出现该字符的地址
//找不到就返回(NULL)
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

//strstr——字符串查找函数
//在一个字符串里查找另一个字符串，如果找到 返回要查找的字符串 在被查找的字符串中的对应首元素地址
//没有找到就返回（NULL）
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
