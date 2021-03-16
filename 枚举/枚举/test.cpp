#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
////完美立方
//int main()
//{
//	int N = 0;
//	cin >> N;
//	for (int a = 2; a <= N; a++)
//	{
//		for (int b = 2; b < a; b++)
//		{
//			for (int c = b; c < a; c++)
//			{
//				for (int d = c; d < a; d++)
//				{
//					if (a*a*a == b*b*b + c*c*c + d*d*d)
//					{
//						cout << "Cube = " << a << "," << "Triple(" << b << "," << c << "," << d << ")" << endl;
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


////生理周期(一)
//int main()
//{
//	int p, e, i, d;
//	cin >> p >> e >> i >> d;
//	int day = 0;
//	for (day = d + 1; (day - p) % 23; day++);
//	for (; (day - e) % 28; day += 23);
//	for (; (day - i) % 33; day += 23 * 28); // 23*28是最小公倍数
//	cout << "the next triple peak occurs in " << day - d << "天" << endl;
//	return 0;
//}


//生理周期(二)
int main()
{
	int p, e, i, d;
	cin >> p >> e >> i >> d;


	return 0;
}
