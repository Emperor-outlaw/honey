#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
////递归的方法
//int Factorial(int n)
//{
//	if (n <= 1)
//		return 1;
//	return n * Factorial(n - 1);
//}
//int main()
//{
//	int n = 0;
//	cin >> n;
//	cout << Factorial(n);
//	return 0;
//}

//循环
int main()
{
	int n = 0;
	cin >> n;
	int ret = 1;
	for (int i = 1; i <= n; i++)
	{
		ret *= i;
	}
	cout << "ret = " << ret << endl;
	return 0;
}