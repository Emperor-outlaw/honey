#include <stdio.h>
#include <assert.h>

//// 模拟实现strlen
//size_t my_strlen(const char* p)
//{
//	assert(p);
//	const char* s = p;
//	while (*s++);
//	return s - p - 1;
//}
//int main()
//{
//	char* p = "hello world!";
//	printf("len = %d\n", my_strlen(p));
//	return 0;
//}

////模拟实现strcpy
//char* my_strcpy(char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* p = str1;
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	return p;
//}
//int main()
//{
//	char str1[] = "hello world!";
//	char str2[20] = { 0 };
//	printf("%s\n", my_strcpy(str2, str1));
//	return 0;
//}


//模拟实现strcmp
//int my_strcmp(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	while (*p1 == *p2)
//	{
//		if (*p1 == '\0')
//		{
//			return 0;
//		}
//		p1++;
//		p2++;
//	}
//	return (*p1 - *p2);
//}
//int main()
//{
//	char* p1 = "hello world!";
//	char* p2 = "hello a";
//	int ret = my_strcmp(p1, p2);
//	if (ret > 0)
//	{
//		printf("字符串p1大\n");
//	}
//	else if (ret < 0)
//	{
//		printf("字符串p2大\n");
//	}
//	else
//	{
//		printf("两个字符串相等\n");
//	}
//	return 0;
//}



//模拟实现字符串追加
//char* my_strcat(char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* p = str1;
//	while (*str1)
//	{
//		str1++;
//	}
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	return p;
//}
//int main()
//{
//	char str1[20] = "hello w";
//	char str2[] = "orld!";
//	printf("%s\n", my_strcat(str1, str2));
//	return 0;
//}


//模拟实现strstr
char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 && p2);
	const char* s1 = NULL;
	const char* s2 = NULL;
	while (*p1)
	{
		s1 = p1;
		s2 = p2;
		while (*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return p1;
		}
		if (*s1 == '\0')
		{
			return NULL;
		}
		p1++;
	}
	return NULL;
}
int main()
{
	char* p1 = "aababbccdef";
	char* p2 = "abbc";
	char* p = my_strstr(p1, p2);
	if (p == NULL)
	{
		printf("没有在p1中找到子串p2找到\n");
	}
	else
	{
		printf("%s\n", p);
	}
	return 0;
}