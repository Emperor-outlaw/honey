#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cmath>
using namespace std;
#define EPS 1e-6
//�����淽�̵�һ������f(x) = x^3 - 5x^2 + 10x - 80 = 0
//������ĸ���a����Ҫ��|f(a)|<=10^(-6)(10�ĸ�6�η�)
double f(double n)
{
	return n*n*n - 5 * n*n + 10 * n - 80;
}
int main()
{
	//�Դ˺����󵼷��ִ˺����ǵ��������ģ����ҷ���f(0)<0,f(100)>0,��һ����һ������[0,100]֮��
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