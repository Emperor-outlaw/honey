#include <stdio.h>

////模拟实现memcpy
//#include <assert.h>
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* p = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		src = (char*)src + 1;
//		dest = (char*)dest + 1;
//	}
//	return p;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	int n = sizeof(arr1) / sizeof(arr1[0]);
//	int* p = (int*)my_memcpy(arr2, arr1, sizeof(arr1));
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	return 0;
//}

////模拟实现memmove
#include <assert.h>
void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* p = dest;
	//如果dest小于src就从前往后移动，如果dest大于src就从后往前移动
	if (dest <= src)
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return p;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	my_memmove(arr, arr, 20); //我想将数字1，2，3，4，5移动到3，4，5，6，7这个位置
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}



//int main()
//{
//	//给void类型指针赋值
//	int a = 10; //创建一个变量
//	int* pa = &a; //指针pa指向a，pa指针的类型是int
//	void* s = pa; //直接可以将pa赋给s，不需要强制类型转换
//	//void* s = &a; //也可以直接取a的地址赋值给s
//
//	//使用void类型指针
//	void* s1 = s; //void类型指针可以直接赋给void类型指针
//	int* p1 = (int*)s; //要想将s赋值给int类型指针，需要加强制类型转换
//	printf("a = %d\n", *(int*)s); //通过void类型访问a
//
//	//void类型指针使用注意事项
//    //void 类型指针不能直接进项算术运算
//	s++; //错误，不能自增
//	s = s + 1; //错误，不能加1，因为你没有类型，加1的话，编译器根本不知道加几个字节
//	s = (int*)s + 1; //正确，必须先转换成具体类型，再计算
//	void* s2 = NULL;
//	if (s2 < s1)
//		printf("s2小\n");
//	else
//		printf("s1小\n");
//
//	return 0;
//
//}

////交换两个整形
//void swap_int(int* p1, int* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//
////交换两个字符
//void swap_char(char* c1, char* c2)
//{
//	char tmp = *c1;
//	*c1 = *c2;
//	*c2 = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap_int(&a, &b); //交换a和b
//	printf("a = %d, b = %d\n", a, b);
//
//	char c = '1';
//	char d = '2';
//	swap_char(&c, &d);
//	printf("c = %c, d = %c\n", c, d);
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6 };
//	int arr2[10] = { 0 };
//	int num = sizeof(arr1); //计算要拷贝多少个字节
//	memcpy(arr2, arr1, num); //将arr1中的所有元素拷贝到arr2中
//	int i = 0;
//	for (i = 0; i < 10; i++) //打印目标数组arr2
//	{
//		printf("%d ", arr2[i]); //输出结果为：1，2，3，4，5，6，0，0，0，0
//	}
//	return 0;
//}




//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//	memmove(arr + 2, arr, 16); //将元素1，2，3，4移动到3，4，5，6
//	int i = 0;
//	for (i = 0; i < 7; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}