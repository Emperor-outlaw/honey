#define _CRT_SECURE_NO_WARNINGS 1
//Description
//形如a^3 = b^3 + c^3 + d^3的等式被称为完美立方等式。
//例如12 ^ 3 = 6 ^ 3 + 8 ^ 3 + 10 ^ 3编写一个程序，对任给的正整数N（N⩽100）,
//寻找所有的四元组（a，b，c，d）（a，b，c，d），使得a ^ 3 = b ^ 3 + c ^ 3 + d ^ 3，其中a，b，c，d大于1，小于等于N，且b⩽c⩽d
//Input
//一个正整数N（N⩽100）N（N⩽100）
//Output
//Cube = a, Triple = (b, c, d)
//Sample Input
//24
//Sample Output
//Cube = 6, Triple = (3, 4, 5)
//Cube = 12, Triple = (6, 8, 10)
//Cube = 18, Triple = (2, 12, 16)
//Cube = 18, Triple = (9, 12, 15)
//Cube = 19, Triple = (3, 10, 18)
//Cube = 20, Triple = (7, 14, 17)
//Cube = 24, Triple = (12, 16, 20)

#include <iostream>
using namespace std;
void calculate(int N)
{
	for (int a = 2; a <= N; a++)
	{
		for (int b = 2; b <= N; b++)
		{
			//如果a * a * a > b * b * b才有必要进去
			if (a * a * a > b * b * b)
			{
				for (int c = b; c <= N; c++)
				{
					//如果a * a * a > b * b * b + c * c * c才有必要进去
					if (a * a * a > b * b * b + c * c * c)
					{
						for (int d = c; d <= N; d++)
						{
							if (a * a * a == b * b * b + c * c * c + d * d * d)
							{
								cout << "Cube = " << a << " " << "Tripe = (" << b << "," << c << "," << d << ")" << endl;
							}
						}
					}
				}
			}
		}
	}
}
int main()
{
	int N = 0;
	cin >> N;
	calculate(N);
	return 0;
}