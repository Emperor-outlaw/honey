#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cmath>
using namespace std;
//��Description��
//��N*N�ķ������̷�����N���ʺ�ʹ�����ǲ��໥������������2���ʺ�������ͬһ�ţ�ͬһ�У�Ҳ�������������̱߿��45�ǵ�б���ϣ�
//��������ǣ����ڸ�����N��������еİڷ���
//��Input��
//����һ��������N,��������N�ʺ������ȫ���ڷ�
//��Output��
//����Ľ�����ÿһ�ж�����һ�ְڷ�������ĵ�i�����ֻʺ���С��б�Ŷ��Ǵ�1��ʼ����
//��Sample Input��
//4
//��Sample Output��
//2 4 1 3
//3 1 4 2

#define MAX 100
int result[MAX];
int N;
void Nqueen(int n)//����Ϊ��1��n-1�Ѿ��ڷź��ˣ����ڰڷŵ�n��
{
	if (n - 1 == N)
	{
		for (int i = 1; i <= N; i++)
		{
			cout << result[i] << " ";
		}
		cout << endl;
		return;
	}
	//������Ե�n���ʺ��λ��
	for (int i = 1; i <= N; i++)
	{
		//���Ѿ��ڷźõ�n-1���ʺ�λ�ñȽϣ����Ƿ��ͻ
		int j = 0;
		for (j = 1; j < n; j++)
		{
			if (result[j] == i || abs(result[j] - i) == abs(n - j))
				break;  //��ͻ������һ��λ��
		}
		//���if������������λ��û�к�ǰ���κλʺ��λ�ó�ͻ
		if (j == n)
		{
			//cout << "i = " << i << endl;
			
			result[n] = i; //����k���ʺ��λ�ñ�������
			//cout << "result = " << result[n] << endl;
			Nqueen(n + 1);
		}
	}
}
int main()
{
	cin >> N;
	Nqueen(1);
	return 0;
}