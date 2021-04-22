#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//古代有一个梵塔，塔内有三个座A、B、C，A座上有64个盘子，盘子大小不等，大的在下，小的在上。
//有一个和尚想把这64个盘子从A座移动到C座
//但每次只能允许移动一个盘子，并且再移动过程中，3个座位的盘子始终保持大盘在下，小盘在上。
//在移动过程中可以利用B座，要求输出移动步骤。
int count = 0;  //记录移动的次数
void Hanoi(int n, char X, char Y, char Z)
{
	if (n == 1)
	{
		::count++;
		cout << n << " 从 " << X << "----->" << Z << endl;
		return;
	}
	Hanoi(n - 1, X, Z, Y);
	::count++;
	cout << n << " 从 " << X << "----->" << Z << endl;
	Hanoi(n - 1, Y, X, Z);
}
int main()
{
	int n = 0;
	cin >> n;
	Hanoi(n, 'A', 'B', 'C');
	cout << ::count << endl;
	return 0;
}