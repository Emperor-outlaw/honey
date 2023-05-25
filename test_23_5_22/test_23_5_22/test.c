#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

////针对每行输入，输出用“* ”组成的X形图案。
//int main() {
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        char arr[n + 2]; //存放图案的一行（此处数组多分配两个字节空间，方便后面使用）
//        for (i = 0; i < n + 2; i++) //数组全部初始化为空格
//        {
//            arr[i] = ' ';
//        }
//
//        for (i = 0; i < n; i++) //一行一行打印
//        {
//            //更新数组（每次将数组两端的元素赋值为*,然后依次向中间逼近，并且将上一步的*还原为空格）
//            arr[i] = ' '; //将上一步更新的元素还原
//            arr[n + 2 - i - 1] = ' '; //将上一步更新的元素还原(n+2是数组的大小)
//            arr[i + 1] = '*'; //将左端元素赋值为*
//            arr[n + 2 - i - 2] = '*'; //将右端元素赋值为*
//            for (j = 1; j <= n; j++) //打印数组
//            {
//                printf("%c", arr[j]);
//            }
//            printf("\n"); //每打印一行换行
//        }
//    }
//    return 0;
//}




//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分
#include <stdlib.h>

//打印数组
void printArry(int* arr, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}

//调整数组
//思路：采用快排的思想，对数字进行一趟调整就可以完成要求。
//1、用两个指针left和right开始时分别指向数组的两端，再将数组元素arr[left]保存起来
//2、从right指向的元素开始往数组的左边找奇数，找到后将其放在left所指位置，然后再从left指向的位置往数组的右边找偶数，找到后将其放在right所指位置
//3、重复2操作，直到left和right相等，再将开始保存的arr[left]元素放在left和right相等的位置
//注意：我们发现上述操作中并没有判断元素arr[left]的奇偶性，是因为它的奇偶性并不影响操作，why?
//原因是：当left和right相等的时候，它们左边的元素都已经是奇数了，右边的元素都已经是偶数了,此位置无论是奇数还是偶数都满足要求，所以没有判断arr[left]元素奇偶性
void adjustArry(int* arr, int n)
{
	int left = 0; //开始时，指向数组左端
	int right = n - 1; //开始时，指向数组右端
	int tmp = arr[left]; //保存最左边元素
	while (left < right) //left小于right一直循环
	{
		while (left < right && (arr[right] % 2 == 0))//从right位置开始往左边找奇数，找到跳出循环
		{
			right--; //更新right
		}
		arr[left] = arr[right]; //奇数往前面放
		while (left < right && (arr[left] % 2 != 0)) //从left位置开始往右边找偶数，找到跳出循环
		{
			left++; //更新
		}
		arr[right] = arr[left]; //偶数往后面放
	}
	arr[left] = tmp;
}

int main()
{
	int n = 0;
	printf("请输入一个正整数:>");
	scanf("%d", &n); //获取数组元素个数
	int* arr = (int*)malloc(sizeof(int) * n); //开辟数组
	int i = 0;
	for (i = 0; i < n; i++) //获取数组元素
	{
		scanf("%d", arr + i);
	}
	printf("调整数组前：");
	printArry(arr, n);
	adjustArry(arr, n); //调整数组
	printf("\n调整数组后：");
	printArry(arr, n);
	return 0;
}


