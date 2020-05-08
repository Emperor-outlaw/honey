#define _CRT_SECURE_NO_WARNINGS 1
//int val = 20;//在栈空间上开辟四个字节 
//char arr[10] = {0};//在栈空间上开辟10个字节的连续空
//动态内存管理
//动态内存函数
//malloc
//free
//calloc
//realloc
//这些函数开辟的内存空间在堆区
//malloc和free
//void * malloc(size_t size);
//这个函数向内存申请一块连续可用的空间，并返回指向这块空间的指针
//如果开辟成功，则返回一个指向开辟好空间的指针。
//如果开辟失败，则返回一个NULL指针，因此malloc的返回值一定要做检查。 
//返回值的类型是 void* ，所以malloc函数并不知道开辟空间的类型，具体在使用的时候使用者自己来决定。
//如果参数 size 为0，malloc的行为是标准是未定义的，取决于编译器
//void free(void* ptr);
//free函数用来释放动态开辟的内存。 
//如果参数 ptr 指向的空间不是动态开辟的，那free函数的行为是未定义的。 
//如果参数 ptr 是NULL指针，则函数什么事都不做。

//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	int* p = NULL;
//	//p = (int*)malloc(10 * sizeof(int));
//	p = (int*)malloc(10 * sizeof(INT_MAX));//INT_MAX是开辟整形的最大空间
//	if (p == NULL)
//	{
//		printf("%s \n", strerror(errno));
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p+i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

////calloc函数
////void* calloc(size_t num, size_t size);--他会自己把开辟的空间初始化为0（其他使用基本与malloc相同（传参不同））
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* p = NULL;
//	p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

////可以对空间的大小做出调整
////realloc--返回值为调整之后的内存起始位置（地址可能会变（要看之前开辟的空间后面是否可以继续增加空间来满足新开辟的空间；若足够，则返回的地址不会变；不够则会变））
////void* realloc(void* ptr, size_t size);size--是字节大小（并且是调整之后的新大小）
////ptr 是要调整的内存地址 
////size 调整之后新大小 
////返回值为调整之后的内存起始位置。 
////这个函数调整原内存空间大小的基础上，还会将原来内存中的数据移动到新的空间。
//
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* p = NULL;
//	p = (int*)malloc(10);//--10个字节
//	//p = realloc(p, 20);//20个字节
//	p = realloc(p, 5*sizeof(int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//常见的动态内存错误
//1.对空指针的解应用操作