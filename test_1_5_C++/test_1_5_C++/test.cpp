#define _CRT_SECURE_NO_WARNINGS 1
//猜数字游戏
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main()
//{
//	int val = 0;
//	int num = 0;
//	srand((unsigned int)time(NULL));
//	val = rand() % 100 + 1;
//	while (1)
//	{
//		cout << "玩家猜：";
//		cin >> num;
//		if (num > val)
//			cout << "猜大了！" << endl;
//		else if (num < val)
//			cout << "猜小了！" << endl;
//		else
//		{
//			cout << "猜对了！" << endl;
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}

////输出水仙花数
//#include <iostream>
//using namespace std;
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 999; i++)
//	{
//		int val = i;
//		double sum = 0;
//		while (val)
//		{
//			sum += pow((double)(val % 10), 3.0);
//			val /= 10;
//		}
//		if (i == sum)
//			cout << " " << i;
//	}
//	system("pause");
//	return 0;
//}

////敲桌子（1~100内是7的倍数，含7的数字，输出敲桌子，其余的直接打印）
//#include <iostream>
//using namespace std;
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 7 == 0)
//			cout << "敲桌子 ";
//		else if (i % 10 == 7)
//			cout << "敲桌子 ";
//		else if (i / 10 == 7)
//			cout << "敲桌子 ";
//		else
//			cout << " " << i;
//	}
//	system("pause");
//	return 0;
//}


