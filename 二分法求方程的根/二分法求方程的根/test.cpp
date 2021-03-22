#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cmath>
using namespace std;
#define EPS 1e-6
//求下面方程的一个根：f(x) = x^3 - 5x^2 + 10x - 80 = 0
//若求出的根是a，则要求|f(a)|<=10^(-6)(10的负6次方)
double f(double n)
{
	return n*n*n - 5 * n*n + 10 * n - 80;
}
int main()
{
	//对此函数求导发现此函数是单调递增的，并且发现f(0)<0,f(100)>0,则一定有一个根在[0,100]之间
	double L = 0;
	double R = 100;
	double root = L + (R - L) / 2;
	double y = f(root);
	while (fabs(y) > EPS)
	{
		if (y > 0)
			R = root;
		else
			L = root;
		root = L + (R - L) / 2;
		y = f(root);
	}
	cout << root << endl;
	return 0;
}