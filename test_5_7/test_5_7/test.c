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
////1.对空指针的解应用操作
//#include <stdio.h>
//#include <stdlib.h>
////void test()
//{
//	int* p = (int*)malloc(sizeof(int));
//	*p = 20;//如果p的值是NULL，就会有问题
//	free(p);
//	p = NULL;
//}
//2.对动态空间的越界访问
//void test()
//{
//	int i = 0; 
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return;
//	}
//	for (i = 0; i <=10; i++)
//	{
//		*(p + i) = i;//当i是10的时候越界访问
//	}
//	free(p);
//	p = NULL;
//}
////3.使用free释放一块动态开辟内存的一部分
//void test() 
//{
//	int a = 10; 
//	int *p = &a; 
//	free(p);
//	p = NULL;
//} 
////4.对同一块动态内存多次释放
//void test()
//{
//	int *p = (int*)malloc(100);
//	free(p);
//  p = NULL;
//	free(p);//重复释放
//}
//int main()
//{
//	test();
//	return 0;
//}
////5.内存泄漏（动态内存忘记释放）
//int main()
//{
//	while (1)
//	{
//		malloc(1000);
//	}
//	return 0;
//}

//下面程序的运行结果
//1.
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void Getmemory(char* p)//此处的p只是str的一个临时拷贝（只是把str传给了p）
//{
//	p = (char*)malloc(100);//动态内存开辟了一个空间，把开辟空间的起始地址赋值给了P;这个函数调用结束后p被销毁返回给了内存（malloc开辟的空间还在（若没有释放整个程序结束后，系统会释放））
//}//此函数并没有返回值
//void test(void)
//{
//	char * str = NULL;
//	Getmemory(str);//这个函数调用结束后。str依然是NULL
//	strcpy(str, "hello world");//拷贝函数对NULL解应用操作，程序会崩溃
//	printf(str);
//	printf("%s\n", str);//两中printf都可以
//}
//int main()
//{
//  test();
//	return 0;
//}
//对上面程序的改正(第一种)
//void Getmemory(char** p)//传str的地址，对str进行操作
//{
//	if ((char*)malloc(100) == NULL)
//	{
//		printf("exit\n");
//		return;
//	}
//	*p = (char*)malloc(100);
//}
//void test()
//{
//	char* str = NULL;
//	Getmemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}
//（第二种）
//char* Getmemory(char* p)//有返回值，将返回值赋值给str
//{
//	return p = (char*)malloc(100);
//}
//void test()
//{
//	char* str = NULL;
//	str = Getmemory(str);
//	if (NULL == str)
//	{
//		return;
//	}
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}

//2.
//#include <stdio.h>
//char* Getmemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}//函数调用完后，p变量那块空间会被销毁，已不是“hello world”
//void test(void)
//{
//	char* str = NULL;
//	str = Getmemory();//返回了局部变量或者临时变量的地址；（此函数调用完之后将p（地址）的值赋给了str，str指向的那块空间还给了内存，已经不是“hello world”）
//	printf(str);
//}
//int main()
//{
//	test();
//	return 0;
//}
//#include <stdio.h>
//char* Getmemory(void)
//{
//	char* p = "hello world";
//	return p;
//}//P指向的是字符串常量，不是变量
//void test(void)
//{
//	char* str = NULL;
//	str = Getmemory();
//	printf(str);
//}
//int main()
//{
//	test();
//	return 0;
//}

//3.
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//void GetMemory(char **p, int num) 
//{
//	*p = (char *)malloc(num);//该程序使用完后没有释放空间（内存泄漏）
//}
//void test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	////free(str);
//	////str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}
//4.
//#include <stdio.h>
//#include <string.h>
//void test(void) 
//{
//	char *str = (char *)malloc(100);  
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)  
//	{
//		strcpy(str, "world");//非法访问（free已经将空间还给了内存）   
//		printf(str); 
//	}
//	//修改
//	char *str = (char *)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;//将str置NULL
//	if (str != NULL)//然后判断不是空就可以拷贝
//	{
//		strcpy(str, "world");   
//		printf(str);
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}
//柔性数组（flexible array）——结构中的最后一个元素允许是未知大小的数组，这就叫做柔性数组成员
//特点：
//结构中的柔性数组成员前面必须至少一个其他成员。 
//sizeof 返回的这种结构大小不包括柔性数组的内存。 
//包含柔性数组成员的结构用malloc ()函数进行内存的动态分配，并且分配的内存应该大于结构的大小，以适应 柔性数组的预期大小
//#include <stdio.h>
//不同的编译器可能表示不同
//（第一种）
//typedef struct st_type
//{
//	int i;
//	int a[];//柔性数组成员
//}S;
////（第二种）
////typedef struct st_type
////{
////	int i;
////	int a[0];//柔性数组成员
////}S;
//int main()
//{
//////	printf("%d", sizeof(S));//4
////	//柔性数组的使用(一般和malloc使用)
////	int i = 0;
////	S* p = (S*)malloc(sizeof(S) + 10 * sizeof(int));//这样柔性数组成员a，相当于获得了100个整型元素的连续空间
////	p->i = 100;
////	for (i = 0; i < 10; i++)
////	{
////		p->a[i] = i;
////	}
////	free(p);
//	return 0;
//}

//柔性数组的使用
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct S
//{
//	int i;
//	int * a;
//}S;
//int main()
//{
//	int i = 0;
//	S* p = malloc(sizeof(S));
//	p->i = 100;
//	p->a = (int*)malloc(10 * sizeof(int));
//	for (i = 0; i < 10; i++)
//	{
//		p->a[i] = i;
//	}
//	free(p->a);
//	p->a = NULL;
//	free(p);
//	p = NULL;
//	return 0;
//}
//上面两种代码使用可以完成同样的功能
//代码1的好处：1.方便释放（一次分配，一次释放）
//2.有利于访问速度（连续的内存有益于提高访问速度，也有益于减少内存碎片）



