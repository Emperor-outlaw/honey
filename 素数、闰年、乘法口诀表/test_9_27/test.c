#define _CRT_SECURE_NO_WARNINGS 1

//输出100—200之间的素数
//第一种方法：试除法
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 1;
//	int count = 0;
//	for (i = 101;i <= 200;i+=1)
//	{
//		int j = 2;
//		for (j = 2; j <= sqrt(i) ; j++)
//		{
//			if (0 == i % j)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n素数的个数是%d个\n", count);
//	return 0;
//}

////第二种方法：筛选法（将不是素数的值直接改为0，代表已经筛选过）
////第一步：先定义并初始化一个数组1—100
////第二步：1不是素数，直接筛去，将其赋值为0
////第三步：从2开始，2是素数保留，然后依次用2后面的数去除2，能被2整除则不是素数，赋值为0；
////第四步：接下来是3，因为上一步没有被2整除，保留，接着第三步的操作，用3后面的数去除3，能被3整除的数则不是素数，赋值为0
////第五步：4第二步已经被2整除赋值为0了，不用管，接着是5，保留依次循环上述操作，直到某个数后面没有要筛选的数为止
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int count = 0;
//	int arr[100] = { 0 };  //先将其初始化为0
//	int i = 0;
//	for (i = 0; i < 100; i++) //给数组赋值1—100
//	{
//		arr[i] = i + 1;
//	}
//	//开始筛选
//	arr[0] = 0; // 1不是素数直接赋值为0，筛选去
//	for (i = 1; i <= sqrt(100); i++)  //其实只需要用2到最大的那个数（这里最大的数是100）开方之间的数去筛选就可以，因为它总有一个因数不会超过它的开平方，前面已经讲过.既然最大的那个数的因数都包含在范围内，那么比它小的那些数因数也一定在范围内。
//	{
//		if (0 != arr[i])  //判断是否是前面筛选保留下来的数
//		{
//			int j = 0;
//			for (j = i + 1; j < 100; j++)
//			{
//				if (0 != arr[j])  //判断是否已经被筛选过
//				{
//					if (0 == arr[j] % arr[i])
//						arr[j] = 0;
//				}
//			}
//		}
//	}
//	//晒选结束，打印素数
//	for (i = 0; i < 100; i++)
//	{
//		if (arr[i] != 0)
//		{
//			count++;
//			printf("%d ",arr[i]);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}



////判断1000到2000之间的闰年
////1.能被4整除，不能被100整除的数
////2.能被400整除的数
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;  
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (((0 == i % 4) && (0 != i % 100)) || (0 == i % 400))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n ",count);
//	return 0;
//}

////打印乘法口诀表
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//打印每一行
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		//打印每一行后换行
//		printf("\n");
//	}
//	return 0;
//}
