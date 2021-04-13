#define _CRT_SECURE_NO_WARNINGS 1
//【题目描述】
//有12枚硬币。其中有11枚真币和1枚假币。假币和真币重量不同， 但不知道假币比真币轻还是重。
//现在用一架天平称了这些币三次，告诉你称的结果
//请你找出假币并且确定假币是轻是重（数据保证一能找出来）
//【输入】
//第一行是测试数据组数。
//每组数据有三行，每行表示一次称量的结果。银币标号为A - L。
//每次称量的结果用三个以空格隔开的字符串表示：天平左边放置的硬币，天平右边放置的硬币平衡状态。
//其中平衡状态用"up", “down”, 或"even"表示, 分别为右端高、右端低和平衡。天平左右的硬币数总是相等的。
//【输出】
//输出哪一个标号的银币是假币，并说明它比真币轻还是重。
//
//【输入样例】
//1
//ABCD EFGH even
//ABCI EFJK up
//ABIJ EFGH even
//【输出样例】
//K is the counterfeit coin and it is light.

#include <iostream>
#include <cstring>
using namespace std;
char left[3][7];//用于存放天平左边的数据
char right[3][7];//用于存放天平右边的数据
char result[3][5];//用于存放天平的结果
bool is_fake(char ch, bool weight)
{
	char *pleft = NULL;
	char *pright = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (weight)
		{
			pleft = ::left[i];
			pright = ::right[i];
		}
		else
		{
			pleft = ::right[i];
			pright = ::left[i];
		}
		switch (result[i][0])
		{
		case 'u':
			if (!strchr(pleft, ch))
				return false;
			break;
		case 'e':
			if (strchr(pleft, ch) || strchr(pright, ch))
				return false;
			break;
		case 'd':
			if (strchr(pright, ch))
				return false;
			break;
		}
	}
}
void search_coin()
{
	for (int i = 'A'; i <= 'L'; i++)
	{
		
		if (is_fake(i, true))  //true代表重
		{
			cout << i << " is the counterfeit coin and it is light." << endl;
			break;
		}
		else if (is_fake(i, false)) //false代表轻
		{
			cout << (char)i << " is the counterfeit coin and it is light." << endl;
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
		for (int i = 0; i < 3; i++)
		{
			cin >> ::left[i] >> ::right[i] >> ::result[i];
		}
	}
	search_coin();
	return 0;
}
//1
//ABCD EFGH even
//ABCI EFJK up
//ABIJ EFGH even