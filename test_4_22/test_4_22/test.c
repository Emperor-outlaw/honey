#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
////int main()
////{
	//指针和数组解析
	/*数组名的意义：
	1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小。
	2. &数组名，这里的数组名表示整个数组，取出的是整个数组的地址。
	3. 除此之外所有的数组名都表示首元素的地址。*/
	//一维数组 
	//int a[] = {1,2,3,4}; 
	//printf("%d\n",sizeof(a));//16——整个数组的大小（单位字节）
	//printf("%d\n",sizeof(a+0));//4——第一个元素的地址的大小
	//printf("%d\n",sizeof(*a)); //4——第一个元素的大小
	//printf("%d\n",sizeof(a+1));//4——第二个元素地址的大小
	//printf("%d\n",sizeof(a[1]));//4——第二个元素的大小
	//printf("%d\n",sizeof(&a));//4——整个数组的地址的大小
	//printf("%d\n",sizeof(*&a));//16——整个数组元素的大小
	//printf("%d\n",sizeof(&a+1));//4——跳过整个数组的地址，元素4后面的地址（但也是地址）
	//printf("%d\n",sizeof(&a[0])); //4——首元素的地址
	//printf("%d\n",sizeof(&a[0]+1));//4——第二个元素的地址

	//字符数组 
	//char arr[] = {'a','b','c','d','e','f'}; 
	//printf("%d\n", sizeof(arr)); //6——整个数组的地址大小
	//printf("%d\n", sizeof(arr+0)); //4——首元素的地址大小
	//printf("%d\n", sizeof(*arr)); //1——首元素的大小
	//printf("%d\n", sizeof(arr[1])); //1——首元素的大小
	//printf("%d\n", sizeof(&arr)); //4——整个数组的地址大小
	//printf("%d\n", sizeof(&arr+1)); //4——跳过整个数组的地址，元素f后面的地址
	//printf("%d\n", sizeof(&arr[0]+1)); //4——第二个元素的地址

	//	char arr[] = {'a','b','c','d','e','f'}; 
	//	printf("%d\n", strlen(arr)); //x——strlen 找'\0',f后面不是\0，所以是随机值
	//	printf("%d\n", strlen(arr + 0));//x
	////	printf("%d\n", strlen(*arr)); //错误方式——strlen(const char*)括号是指针
	////	printf("%d\n", strlen(arr[1])); //错误方式
	//	printf("%d\n", strlen(&arr)); //x
	//	printf("%d\n", strlen(&arr + 1)); //y=(x+6)
	//	printf("%d\n", strlen(&arr[0] + 1));//z=x-1/z=y+5


	//char arr[] = "abcdef"; 
	//printf("%d\n", sizeof(arr)); //7——整个数组的大小
	//printf("%d\n", sizeof(arr + 0));//4 ——首元素的地址大小
	//printf("%d\n", sizeof(*arr)); //1——首元素的大小
	//printf("%d\n", sizeof(arr[1])); //1——首元素的大小
	//printf("%d\n", sizeof(&arr)); //4——整个数组的地址大小
	//printf("%d\n", sizeof(&arr + 1));//4 ——跳过整个数组后的地址，f后面\0后面的地址
	//printf("%d\n", sizeof(&arr[0] + 1));//4——第二个元素的地址

	//char arr[] = "abcdef";
	//printf("%d\n", strlen(arr));//6——从第一个元素a开始往后数，遇到\0就停止
	//printf("%d\n", strlen(arr + 0));//6——从第一个元素开始
	////printf("%d\n", strlen(*arr)); //err——strlen(const char*)括号是指针
	////printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr)); //6——从第一个元素开始
	//printf("%d\n", strlen(&arr + 1));//x ——跳过整个数组，从f后面的\0的后面开始数，遇到\0就停止
	//printf("%d\n", strlen(&arr[0] + 1));//5——从第二个元素开始数
	//
	//	char *p = "abcdef"; 
	//printf("%d\n", sizeof(p)); //4——指针p的大小（a元素的地址大小）
	//printf("%d\n", sizeof(p + 1));//4 ——第二个元素地址的大小
	//printf("%d\n", sizeof(*p)); //1——第一个元素的大小
	//printf("%d\n", sizeof(p[0])); //1——第一个元素的大小
	//printf("%d\n", sizeof(&p));//4——指针p的地址的大小
	//printf("%d\n", sizeof(&p + 1));//4——指针P地址的下一个地址
	//printf("%d\n", sizeof(&p[0] + 1));//4——第二个元素的地址
	//
	//
	//printf("%d\n", strlen(p)); //6——从第一个元素开始往后数，遇到\0就停止
	//printf("%d\n", strlen(p + 1));//5 ——从第二个元素开始往后数，遇到\0就停止
	////printf("%d\n", strlen(*p)); //err——strlen(const chat*)括号是指针
	////printf("%d\n", strlen(p[0]));//err
	//printf("%d\n", strlen(&p)); //x——无法确定地址对应的下一个空间是否是\0
	//printf("%d\n", strlen(&p + 1));//y 
	//printf("%d\n", strlen(&p[0] + 1));//5——从第二个元素开始往后数，遇到\0就停止
	//
	//二维数组 
	//int a[3][4] = {0};
	//printf("%d\n",sizeof(a));//48——整个数组的大小
	//printf("%d\n",sizeof(a[0][0]));//4 ——第一个元素的大小
	//printf("%d\n",sizeof(a[0])); //16——第一行元素的大小
	//printf("%d\n",sizeof(a[0]+1));//4——第一行第二个元素地址的大小
	//printf("%d\n",sizeof(*(a[0]+1)));//4——第一行第二个元素的大小
	//printf("%d\n",sizeof(a+1)); //4——第二行地址的大小
	//printf("%d\n",sizeof(*(a+1)));//16——第二行元素的大小
	//printf("%d\n",sizeof(&a[0]+1));//4——第二行元素地址的大小
	//printf("%d\n",sizeof(*(&a[0]+1))); //16——第二行元素的大小
	//printf("%d\n",sizeof(*a));//16——*a=a[0]——第一行元素的大小
	//printf("%d\n",sizeof(a[3]));//16——a[3]虽然越界，但是sizeof不参与运算，只是求a[3]类型空间的大小，a[3]类似与a[0],a[1]类型
//	return 0;
//}
#include <stdio.h>
int main()
{
	//int a[5] = { 1, 2, 3, 4, 5 };   
	//int *ptr = (int *)(&a + 1);//(&a+1)——取整个数组的地址然后加一，指针指向的是5后面的元素（此时指针的类型是数组指针类型）
	//printf("%d,%d", *(a + 1), *(ptr - 1));//2,5

	//struct Test //结构体的大小是20个字节
	//{ 
	//	int Num;  
	//	char *pcName; 
	//	short sDate;
	//	char cha[2];  
	//	short sBa[4];
	//}*p; 
	////假设p 的值为0x100000
	//p = (struct Test*)0x100000;
	//printf("%p\n", p + 0x1); //100014——p是结构体类型的指针，加一加的是p指针类型的大小20个字节，转化成16进制是14
	//printf("%p\n", (unsigned long)p + 0x1);//100001
	//printf("%p\n", (unsigned int*)p + 0x1);//100004
//
	//int a[4] = { 1, 2, 3, 4 };     
	//int *ptr1 = (int *)(&a + 1);   
	//int *ptr2 = (int *)((int)a + 1);//——指针偏移了一字节    
	//printf("%x,%x", ptr1[-1], *ptr2);//4，2000000
//
//
	//int a[3][2] = { (0, 1), (2, 3), (4, 5) };//——注意逗号表达式（大括号内的结果是{1，3，5}） 
	//int *p;   
	//p = a[0];//a[0]可以看作arr数组名，a[0]没有在sizeof中，所以是首行首元素的地址
	//printf("%d", p[0]);//1
//
	//int a[5][5];    
	//int(*p)[4];   
	//p = a;    
	//printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//FFFFFFFC,-4——FFFFFFFC是-4的16进制
//
	//int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; 
	//int *ptr1 = (int *)(&aa + 1);   
	//int *ptr2 = (int *)(*(aa + 1));//——*（aa+1）=aa[1]
	//printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10，5
//
	//char *a[] = { "work", "at", "alibaba" }; 
	//char**pa = a; //——注意&a是数组指针类型
	//pa++; 
	//printf("%s\n", *pa);//at
//
    //* 有两个意思，理论上
	//作为 乘法 运算符，级别低于 ++（自增）
	//作为 指针取值 运算符，级别同 ++（自增）一样
	//char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };  
	//char**cp[] = { c + 3, c + 2, c + 1, c }; 
	//char***cpp = cp; 
	//printf("%s\n", **++cpp); //POINT
	//printf("%s\n", *--*++cpp + 3); //ER
	//printf("%s\n", *cpp[-2] + 3); // ST
	//printf("%s\n", cpp[-1][-1] + 1);//EW
//return 0;
//}