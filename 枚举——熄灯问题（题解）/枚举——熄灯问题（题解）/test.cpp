#define _CRT_SECURE_NO_WARNINGS 1
//【问题描述】
//一个由按钮组成的矩阵，其中每行有6个按钮，共5行。每个按钮的位置上有一盏灯。
//当按下一个按钮后，该按钮以及周围位置(上边、下边、左边、右边)的灯都会改变一次。
//即，如果灯原来是点亮的，就会被熄灭；如果灯原来是熄灭的，则会被点亮。
//在矩阵角上的按钮改变3盏灯的状态；在矩阵边上的按钮改变4盏灯的状态；其他的按钮改变5盏灯的状态。
//
//请你写一个程序，确定需要按下哪些按钮，恰好使得所有的灯都熄灭。根据上面的规则，我们知道：
//(1)第2次按下同一个按钮时，将抵消第1次按下时所产生的结果。因此，每个按钮最多只需要按下一次；
//(2)各个按钮被按下的顺序对最终的结果没有影响；
//(3)对第1行中每盏点亮的灯，按下第2行对应的按钮，就可以熄灭第1行的全部灯。
//如此重复下去，可以熄灭第1、2、3、4行的全部灯。同样，按下第1、2、3、4、5列的按钮，可以熄灭前5列的灯。
//【输入数据】
//第一行是一个正整数N，表示需要解决的案例数。每个案例由5行组成，每一行包括6个数字。
//这些数字以空格隔开，可以是0或1。0表示灯的初始状态是熄灭的，1表示灯的初始状态是点亮的。
//【输出要求】
//对每个案例，首先输出一行，输出字符串“PUZZLE #m”，其中m是该案例的序号。
//接着按照该案例的输入格式输出5行，其中的1表示需要把对应的按钮按下，0则表示不需要按对应的按钮。每个数字以一个空格隔开。
//
//【输入样例】
//2
//0 1 1 0 1 0
//1 0 0 1 1 1
//0 0 1 0 0 1
//1 0 0 1 0 1
//0 1 1 1 0 0
//0 0 1 0 1 0
//1 0 1 0 1 1
//0 0 1 0 1 1
//1 0 1 1 0 0
//0 1 0 1 0 0
//【输出样例】
//PUZZLE #1
//1 0 1 0 0 1
//1 1 0 1 0 1
//0 0 1 0 1 1
//1 0 0 1 0 0
//0 1 0 0 0 0
//PUZZLE #2
//1 0 0 1 1 1
//1 1 0 0 0 0
//0 0 0 1 0 0
//1 1 0 1 0 1
//1 0 1 1 0 1

#include <iostream>
#include <cstring>
using namespace std;
//我将灯的状态用一个字节的比特位来存放
char light[5];  //用于存放灯的初始状态
char p_light[5];//用于存放开关灯的过程
char result[5];//用于存放最后的结果
//设置bit
void set_bit(char &n, int i, int v)
{
	if (v)
	{
		n |= (1 << i);
	}
	else
	{
		n &= ~(1 << i);
	}
}
//获取bit
int get_bit(char n, int i)
{
	return (n >> i) & 1;
}
//翻转bit
void flip_bit(char &n, int i)
{
	n ^= (1 << i);
}
void display()
{
	static int N = 1;
	cout << "PUZZLE #" << N++ << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << get_bit(result[i], j) << " ";
		}
		cout << endl;
	}
}
void calculate()
{
	for (int i = 0; i <= 63; i++)
	{
		int s = i;
		memcpy(p_light, light, sizeof(light));
		for (int k = 0; k < 5; k++)
		{
			result[k] = s;
			for (int j = 0; j < 6; j++)
			{
				if (get_bit(s, j))
				{
					if (j > 0)
						flip_bit(p_light[k], j - 1);
					flip_bit(p_light[k], j);
					if (j < 5)
						flip_bit(p_light[k], j + 1);
				}
			}
			if (k < 4)
				p_light[k + 1] ^= s;
			s = p_light[k];
		}
		if (p_light[4] == 0)
		{
			display();
			break;
		}
	}
}
int main()
{
	int n = 0;
	cin >> n;
	while (n--)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				int v = 0;
				cin >> v;
				set_bit(light[i], j, v);
			}
		}
		calculate();
	}
	return 0;
}

//1
//0 1 1 0 1 0
//1 0 0 1 1 1
//0 0 1 0 0 1
//1 0 0 1 0 1
//0 1 1 1 0 0