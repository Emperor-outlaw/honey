#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cmath>
using namespace std;
//������������
//����4��С��10���������������ʹ�üӼ��˳�4�������Լ����Ű���4�������������õ�һ�����ʽ��
//���ڵ������ǣ��Ƿ����һ�ַ�ʽʹ�õõ��ı��ʽ�Ľ������24��
//����Ӽ��˳��Լ����ŵ�����������������ȼ�������ƽ���Ķ���һ�£�����ĳ���������ʵ����������
//���磬����5��5��5��1������֪��5 * (5 �C 1 / 5) = 24����˿��Եõ�24���ֱ��磬����1��1��4��2��������ô�����ܵõ�24��
//�����롿
//�������ݰ������У�ÿ�и���һ��������ݣ�����4��С��10�������������һ����������а���4��0����ʾ����Ľ������������ݲ��ô���
//�������
//����ÿһ��������ݣ����һ�У�������Եõ�24�������YES�������������NO
//���������롿
//5 5 5 1
//1 1 4 2
//0 0 0 0
//�����������
//YES
//NO
#define EPS 1e-6
bool is_zero(double x)
{
	return fabs(x) <= EPS;
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
	double b[4];
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i; j < n; j++)
		{
			//�Ƚ�δ�����Ԫ�ط���������
			int m = 0;
			for (int k = 0; k < n; k++)
			{
				if (k != i && k != j)
					b[m++] = a[k];
			}
			b[m] = a[i] + a[j];
			if (count24(b, n - 1))
				return true;
			b[m] = a[i] - a[j];
			if (count24(b, n - 1))
				return true;
			b[m] = a[j] - a[i];
			if (count24(b, n - 1))
				return true;
			b[m] = a[i] * a[j];
			if (count24(b, n - 1))
				return true;
			if (is_zero(a[j]))
			{
				b[m] = a[i] / a[j];
			    if (count24(b, n - 1))
					return true;
			}
			if (is_zero(a[i]))
			{
				b[m] = a[j] / a[i];
				if (count24(b, n - 1))
					return true;
			}
		}
	}
	return false;
}
int main()
{
	double a[4];
	while (1)
	{
		for (int i = 0; i < 4; i++)
		{
			cin >> a[i];
		}
		if (a[0] == a[1] && a[1] == a[2] && a[2] == a[3] && a[3] == 0)
			break;
		if (count24(a, 4))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}