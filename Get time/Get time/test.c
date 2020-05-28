#define _CRT_SECURE_NO_WARNINGS 1
//////倒计时
//#include <stdio.h>
//#include <stdlib.h>
//#include <Windows.h>
//int main()
//{
//	int a = 0; 
//	printf("请输入倒计时的时间（单位时秒）\n");
//	scanf("%d", &a);
//	system("color 0b\n");
//	while (a >= 0)
//	{
//		system("cls");
//		printf("%d", a);
//		Sleep(1000);
//		a--;
//	}
//	system("pause\n");
//	return 0;
//}


////程序运行的时间
//#include <stdio.h>
//#include <time.h>
//#include <Windows.h>
//int main()
//{
//	clock_t start, finish;
//	double num = 0;
//	start = clock();
//	Sleep(5000);
//	finish = clock();
//	num = (double)(finish - start);
//	printf("%time = %lf s\n", num / CLK_TCK);
//	return 0;
//}


////获取电脑时间
//#include  <stdio.h>
//#include <time.h>
//#include <Windows.h>
//int main()
//{
//	time_t ltime;
//	while (1)
//	{
//		time(&ltime);
//		printf("Time in seconds since UTC 1/1/70:\t%ld\n", ltime);//UTC标准时间
//		printf("UNIX time and date:\t\t\t%s", ctime(&ltime));//获取当前NUIX操作系统的时间
//		Sleep(1000);
//		system("cls");
//	}
//	return 0;
//}