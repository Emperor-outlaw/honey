//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
#include <stdio.h>

//void PrintArry(int arr[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void SwapArry(int arr1[], int arr2[], int n) //交换两个数组
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 11,12,13,14,15,16,17,18,19,20 };
//	printf("交换前数组arr1:\n");
//	PrintArry(arr1, 10);
//	printf("交换前数组arr2:\n");
//	PrintArry(arr2, 10);
//
//	SwapArry(arr1, arr2, 10); //交换两个数组
//
//	printf("交换后数组arr1:\n");
//	PrintArry(arr1, 10);
//	printf("交换后数组arr2:\n");
//	PrintArry(arr2, 10);
//	return 0;
//}


////编写一个函数 reverse_string(char * string)（递归实现）
////实现：将参数字符串中的字符反向排列，不是逆序打印。
////要求：不能使用C函数库中的字符串操作函数。
//int MyString(char* str)
//{
//	char* p = str;
//	while (*p++); //注意：如果将++放在while里，p指向'\0'后还会往后再加一次，最终指向'\0'后面
//	//while(*p) //注意这两种区别，p最终指向'\0'
//	//{
//	//    p++;
//	//}
//	return p - str - 1;
//}
//void reverse_string(char* str) //递归
//{
//	int len = MyString(str);
//	char tmp = str[0];
//	str[0] = str[len - 1];
//	str[len - 1] = '\0';
//	if (MyString(str + 1) >= 2)
//		reverse_string(str + 1);
//	str[len - 1] = tmp;
//}
//int main()
//{
//	char str[] = "hello bit!";
//	printf("反转前：%s\n", str);
//	reverse_string(str);
//	printf("反转后：%s\n", str);
//	return 0;
//}

////写一个函数求两个整数的较大值
//int GetMax(int a, int b)
//{
//	return a > b ? a : b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = GetMax(a, b);
//	printf("max = %d\n", ret);
//	return 0;
//}

#include <stdio.h>

int main() {
    printf("%d\n", -3 / 2);
    return 0;
}