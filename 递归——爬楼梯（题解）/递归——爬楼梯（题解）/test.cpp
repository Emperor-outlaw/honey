#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//������������
//����ʦ��¥�ݣ�������ÿ����1������2��������¥�ݵļ�������ͬ���߷�
//�����롿
//������������У�ÿ�а���һ��������N������¥�ݼ�����1<=N<=30�����ͬ���߷�����ÿһ�������Ӧһ��
//�������
//��ͬ���߷�����ÿһ�������Ӧһ�����
//���������롿
//5
//8
//10
//�����������
//8
//34
//89
////��ʾ��f(n) = f(n - 1) + f(n - 2)
//int stair_up(int n)
//{
//	if (n == 1)
//		return 1;
//	if (n == 2)
//		return 2;
//	return stair_up(n - 1) + stair_up(n - 2);
//}
//int main()
//{
//	int N = 0;
//	cin >> N;
//	int ret = stair_up(N);
//	cout << "ret = " << ret << endl;
//	return 0;
//}

//��������չ��
//�����N��¥�ݣ�һ�ο�����1�ף�2�ף�3�ף�.......����n�ף����м����߷�
//�����롿
//����һ��N(̨����)��һ��n��һ���������ߵĽ�������n<=N;
//�������
//����N��̨�׵�ȫ���߷�
int stair_up(int N, int n)
{

	int val = 0;
	for (int i = 1; i <= n; i++)
	{
		val += stair_up(N - i, n);
	}
	return val;
}
int main()
{
	int n = 0;
	int N = 0;
	cin >> N >> n;
	int ret = stair_up(N, n);
	cout << "ret = " << ret << endl;
	return 0;
}