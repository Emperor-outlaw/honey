#define _CRT_SECURE_NO_WARNINGS 1
//////����ʱ
//#include <stdio.h>
//#include <stdlib.h>
//#include <Windows.h>
//int main()
//{
//	int a = 0; 
//	printf("�����뵹��ʱ��ʱ�䣨��λʱ�룩\n");
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


////�������е�ʱ��
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


////��ȡ����ʱ��
//#include  <stdio.h>
//#include <time.h>
//#include <Windows.h>
//int main()
//{
//	time_t ltime;
//	while (1)
//	{
//		time(&ltime);
//		printf("Time in seconds since UTC 1/1/70:\t%ld\n", ltime);//UTC��׼ʱ��
//		printf("UNIX time and date:\t\t\t%s", ctime(&ltime));//��ȡ��ǰNUIX����ϵͳ��ʱ��
//		Sleep(1000);
//		system("cls");
//	}
//	return 0;
//}