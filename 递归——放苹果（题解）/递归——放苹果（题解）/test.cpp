#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//������������
//��M��ͬ����ƻ������N��ͬ��������������е����ӿ��Ų��ţ��ʹ��ж����ֲ�ͬ�ķַ�������K��ʾ��5��1��1��1��5��1 ��ͬһ�ַַ���
//��Input��
//��һ���ǲ������ݵ���Ŀt��0 <= t <= 20��������ÿ�о�������������M��N���Կո�ֿ���1 <= M��N <= 10��
//��Output��
//�������ÿ������M��N����һ�������Ӧ��K��
//��Sample Input��
//1
//7 3
//��Sample Output��
//8
int put(int m, int n)
{
	if (n > m)
		return put(m, m);
	if (n == 1 || m == 0)
		return 1;
	return put(m, n - 1) + put(m - n, n);
}
int main()
{
	int m, n; //m��ƻ�� n:����
	cin >> m >> n;
	int ret = put(m, n);
	cout << "ret = " << ret << endl;
	return 0;
}
