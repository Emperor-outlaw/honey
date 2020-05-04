#define _CRT_SECURE_NO_WARNINGS 1
//内存函数 
//sep参数是个字符串，定义了用作分隔符的字符集合
//第一个参数指定一个字符串，它包含了0个或者多个由sep字符串中一个或者多个分隔符分割的标记。
//strtok函数找到str中的下一个标记，并将其用 \0 结尾，返回一个指向这个标记的指针。（注：strtok函数会改
//变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可修改。）
//strtok函数的第一个参数不为 NULL ，函数将找到str中第一个标记，strtok函数将保存它在字符串中的位置。
//strtok函数的第一个参数为 NULL ，函数将在同一个字符串中被保存的位置开始，查找下一个标记。
//如果字符串中不存在更多的标记，则返回 NULL 指针
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
//    strcpy(arr1,arr);//因为strtok函数会修改原来的函数，所以拷贝一个字符串数组
//    char * ret=NULL;
//    for(ret=strtok(arr1,sep);ret!=NULL;ret=strtok(NULL,sep))
//    {
//     printf("%s\n",ret);
//    } 
// return 0;
//} 
//返回错误码所对应的错误的信息 
//char* strerror (int errnum)
//#include <stdio.h>
//#include <string.h> 
//#include <errno.h>
//int main()
//{
//// printf("%s\n",strerror(1));
//// printf("%s\n",strerror(2));
//// printf("%s\n",strerror(3));
////  读文件 
//    FILE* pf = fopen("test.txt",'r');
//    if(pf==NULL)
//    {
//     printf("%s\n",strerror(errno));
//  return 0; 
//    }
////  打开文件
////  关闭文件  
//    fcolse(pf);
//    pf=NULL;
// return 0;
//}
//字符分类函数
//如果他的函数符合下列条件就返回真
//iscntrl——任何控制字符
//isspace——空白字符：空格' ',换页'\f',换行'\n',回车'\t',制表符'\t'或者垂直制表符'\v'
//isdigit——十进制数字0~9
//isxdigit——十六进制数字，包括所有十进制数字，小写字母a~f,大写字母A~F
//islower ——小写字母a~z
//isupper——大写字母A~Z
//isalpha——字母a~z或A~Z 
//isalnum——字母或者数字，a~z,A~Z,0~9 
//ispunct——标点符号，任何不属于数字或者字母的字符（可打印）
//isgraph——任何图形字符
//isprint——任何可打印字符，包括图形字符和空白字符 

//函数memcpy从source的位置开始向后复制num个字节的数据到destination的内存位置。
//这个函数在遇到 '\0' 的时候并不会停下来。
//如果source和destination有任何的重叠，复制的结果都是未定义的
//void * memcpy ( void * destination, const void * source, size_t num )——内存拷贝函数（任何类型都可以拷贝） 
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


//一个数组中只有两个数字是出现一次，其他所有数字都出现两次，找出这两个只出现一次的数字，编程实现
//#include <stdio.h>
//void find_diff_num(int arr[], int sz, int* n1, int* n2)
//{
//	int i = 0;
//	int tmp = 0;
//	int pos = 0;
//	//1、异或
//	for (i = 0; i < sz; i++)
//	{
//		tmp ^= arr[i];
//	}
//	//2、计算异或的结果tmp中二进制位哪一位是1
//	for (i = 0; i < sz; i++)
//	{
//		if (((tmp >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	//3、分组
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
//喝汽水，一瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水
//#include <stdio.h>
//int main()
//{
//	int money = 0;
//	printf("请输入钱数\n");
//	scanf("%d", &money);
//	int empty = money;
//	int total = money;
//	if (money > 0)
//		total = money * 2 - 1;
//	else
//		total = 0;
//	//根据下面的算法发现规律，优化为以上算法
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	printf("total = %d\n", total);
//	return 0;
//}
//实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
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
//	printf("请输入字符串\n");
//	scanf("%s", arr);
//	printf("亲输入你要左旋的次数\n");
//	scanf("%d", &k);
//	My_leftmove(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}
//判断一个字符串是否为另一个字符串旋转之后的字符串。
//例如：给定S1=AABCD 和 S2=BCDAA，返回1
//给定S1=abcd 和 S2=ACBD,返回0。
//1、第一种方法：通过每左旋转一次，然后判断两个字符串是否相等（strcmy)
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
//	printf("请输入字符串\n");
//	scanf("%s", arr);
//	int ret = compare(arr, "abcdefgh");
//	if (ret == 1)
//		printf("Yes!\n");
//	else
//		printf("N0!\n");
//	return 0;
//}
//2、第二种:通过把其中的一个字符串追加到自己后面，然后在追加的这个字符串中寻找另一个字符串
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
//	char arr[40] = { 0 };//数组要足够大
//	printf("请输入字符串\n");
//	scanf("%s", arr);
//	int ret = compare(arr, "abacDEfgHsdji");
//	if (ret == 1)
//		printf("Yes!\n");
//	else
//		printf("N0!\n");
//	return 0;
//}
