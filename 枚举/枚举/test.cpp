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


////生理周期
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

////称硬币
//#include <cstring>
//char Left[3][8], Right[3][8], Result[3][8];
//bool is_success(char coin, bool weight)
//{
//	char *pleft = NULL;
//	char *pright = NULL;
//	for (int i = 0; i < 3; i++)
//	{
//		if (weight == true)
//		{
//			//假币，轻的
//			pleft = Left[i];
//			pright = Right[i];
//		}
//		else
//		{
//			//假币，重的
//			pleft = Right[i];
//			pright = Left[i];
//		}
//		switch (Result[i][0])
//		{
//		case 'u':
//			if (strchr(pright, coin) == NULL)
//				return false;
//			else
//				break;
//		case 'e':
//			if (strchr(pleft, coin) != NULL || strchr(pright, coin) != NULL)
//				return false;
//			else
//				break;
//		case 'd':
//			if (strchr(pleft, coin) == NULL)
//				return false;
//			else
//				break;
//		}
//	}
//	return true;
//}
//int main()
//{
//	for (int i = 0; i < 3; i++)
//	{
//		cin >> Left[i] >> Right[i] >> Result[i];
//	}
//	for (char coin = 'A'; coin <= 'L'; coin++)
//	{
//		//枚举每一个硬币
//		if (is_success(coin, true))  //假币，轻的
//			cout << coin << "is counterfeit coin and it is light" << endl;
//		else if (is_success(coin, false))//假币，重的
//			cout << coin << " is counterfeit coin and it is heavy" << endl;
//	}
//	return 0;
//}


//熄灯问题
#include <cstdlib>
int get_bit(char n, int i)
{
	return (n >> i) & 1;
}

void set_bit(char &n, int i, int v)
{
	if (v)
	{
		//设置成1
		n |= (1 << i);
	}
	else
	{
		//设置成0
		n &= ~(1 << i);
	}
}

void flip_bit(char &n, int i)
{
	n ^= 1 << i;
}

void print_bit(char* presult)
{
	cout << "PUZZLE# " << endl;
	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 6; i++)
		{
			cout << get_bit(*(presult + j), i) << " ";
		}
		cout << endl;
	}
}

int main()
{
	char orilight[5];
	char result[5];
	char light[5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			int n = 0;
			cin >> n;
			set_bit(orilight[i], j, n);
		}
	}
	for (int i = 0; i <= 63; i++)
	{
		memcpy(light, orilight, sizeof(orilight));
		int value = i;
		for (int k = 0; k < 5; k++)
		{
			result[k] = value;
			for (int j = 0; j < 6; j++)
			{
				if (get_bit(value, j))
				{
					if (j > 0)
						flip_bit(light[k], j - 1);
					flip_bit(light[k], j);
					if (j < 5)
						flip_bit(light[k], j + 1);
				}
			}
			if (k < 4)
				light[k + 1] ^= value;
			value = light[k];
		}
		if (light[4] == 0)
		{
			print_bit(result);
			break;
		}
	}
	return 0;
}

//0 1 1 0 1 0
//1 0 0 1 1 1
//0 0 1 0 0 1
//1 0 0 1 0 1
//0 1 1 1 0 0
