#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cmath>
using namespace std;
#define EPS 1e-6
bool is_zero(double n)
{
	return fabs(n) <= EPS;
}
bool count24(double a[], int n)
{
	if (n == 1)
	{
		if (is_zero(a[0] - 24))
			return true;
		else
			return false;
	}
	double b[5];
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			//将不参与元素先放在b数组中
			int p = 0;
			for (int k = 0; k < n; k++)
			{
				if (i != k && j != k)
					b[p++] = a[k];
			}
			b[p] = a[i] + a[j];
			if (count24(b, p + 1))
				return true;
			b[p] = a[i] - a[j];
			if (count24(b, p + 1))
				return true;
			b[p] = a[j] - a[i];
			if (count24(b, p + 1))
				return true;
			b[p] = a[i] * a[j];
			if (count24(b, p + 1))
				return true;
			if (!is_zero(a[j]))
			{
				b[p] = a[i] / a[j];
				if (count24(b, p + 1))
					return true;
			}
			if (!is_zero(a[i]))
			{
				b[p] = a[j] / a[i];
				if (count24(b, p + 1))
					return true;
			}
		}
		return false;
	}

}
//检查输入是否全为 0 0 0 0  结束程序
bool check_end(double a[])
{
	int count = 0;
	for (int i = 0; i < 4; i++)
	{
		if (a[i] == 0)
			count++;
	}
	if (count == 4)
		return true;
	else
		return false;
}
int main()
{
	double a[5];
	while (1)
	{
		for (int i = 0; i < 4; i++)
		{
			cin >> a[i];
		}
		if (!check_end(a))
		{
			if (count24(a, 4))
				cout << "Yes!" << endl;
			else
				cout << "No!" << endl;
		}
		else
			break;
	}
	return 0;
}