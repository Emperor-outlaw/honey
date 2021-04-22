#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
#define N 52
int count = 0;
int color[N][N];
string str = "01010101001011001001010110010110100100001000101010\
00001000100000101010010000100000001001100110100101\
01111011010010001000001101001011100011000000010000\
01000000001010100011010000101000001010101011001011\
00011111000000101000010010100010100000101100000000\
11001000110101000010101100011010011010101011110111\
00011011010101001001001010000001000101001110000000\
10100000101000100110101010111110011000010000111010\
00111000001010100001100010000001000101001100001001\
11000110100001110010001001010101010101010001101000\
00010000100100000101001010101110100010101010000101\
11100100101001001000010000010101010100100100010100\
00000010000000101011001111010001100000101010100011\
10101010011100001000011000010110011110110100001000\
10101010100001101010100101000010100000111011101001\
10000000101100010000101100101101001011100000000100\
10101001000000010100100001000100000100011110101001\
00101001010101101001010100011010101101110000110101\
11001010000100001100000010100101000001000111000010\
00001000110000110101101000000100101001001000011101\
10100101000101000000001110110010110101101010100001\
00101000010000110101010000100010001001000100010101\
10100001000110010001000010101001010101011111010010\
00000100101000000110010100101001000001000000000010\
11010000001001110111001001000011101001011011101000\
00000110100010001000100000001000011101000000110011\
10101000101000100010001111100010101001010000001000\
10000010100101001010110000000100101010001011101000\
00111100001000010000000110111000000001000000001011\
10000001100111010111010001000110111010101101111000";
int C = 0;
int R = 0;
typedef struct Node
{
	int c;    //行
	int l;    //列
	int f;    //父亲节点
}Node;
typedef struct Queue
{
	int front = 0;
	int rear = 0;
	Node a[N * N];
}Queue;
Queue queue;
//入队
void push(int c, int l, int f)
{
	queue.a[queue.rear].c = c;
	queue.a[queue.rear].l = l;
	queue.a[queue.rear].f = f;
	queue.rear++;
}
//出队
void pull()
{
	queue.front++;
}
//输出迷宫
void output()
{
	cout << "--------------------------" << endl;
	for (int i = 0; i < C; i++)
	{
		for (int j = 0; j < R; j++)
		{
			cout << color[i][j] << " ";
		}
		cout << endl;
	}
}
//输出队列的元素
void result()
{
	int i = queue.front;
	while (i < queue.rear)
	{
		cout << queue.a[i].c << " " << queue.a[i].l << " ";
		i++;
		cout << endl;
	}
}

void bfs(int c, int l, int f)
{
	if (c == C - 1 && l == R - 1)
	{
		cout << "--------------" << endl;
		//cout << c << " " << l << endl;
		return;
	}
	//output();
	if (color[c - 1][l] == 0 && c - 1 >= 0)
	{
		push(c - 1, l, f);
		color[c - 1][l] = 1;
	}
	if (color[c + 1][l] == 0 && c + 1 < C)
	{
		push(c + 1, l, f);
		color[c + 1][l] = 1;
	}
	if (color[c][l - 1] == 0 && l - 1 >= 0)
	{
		push(c, l - 1, f);
		color[c][l - 1] = 1;
	}
	if (color[c][l + 1] == 0 && l + 1 < R)
	{
		push(c, l + 1, f);
		color[c][l + 1] = 1;
	}
	pull();
	/*cout << "-----------------result-----------------" << endl;
	result();
	cout << "-------------------endl------------------" << endl;*/
	bfs(queue.a[queue.front].c, queue.a[queue.front].l, queue.front);
}

void print(int k)
{
	::count++;
	if (k == 0)
		return;
	int i = queue.a[k].c;
	int j = queue.a[k].l;
	print(queue.a[k].f);
	color[i][j] = '8' - '0';
	cout << i << " " << j << endl;
}

int main()
{
	cin >> C >> R;
	//16 50
	int k = 0;
	for (int i = 0; i < C; i++)
	{
		for (int j = 0; j < R; j++)
		{
			color[i][j] = str[k++] - '0';
		}
	}
	for (int i = 0; i < C; i++)
	{
		for (int j = 0; j < R; j++)
		{
			cout << color[i][j];
		}
		cout << endl;
	}
	push(0, 0, 0);
	color[0][0] = 1;
	bfs(queue.a[queue.front].c, queue.a[queue.front].l, queue.front);
	print(queue.front);
	for (int i = 0; i < C; i++)
	{
		for (int j = 0; j < R; j++)
		{
			cout << color[i][j];
		}
		cout << endl;
	}
	cout << "count = " << ::count << endl;
	return 0;
}

//0 1 0 0 0 1
//0 0 0 0 1 0
//0 1 0 0 0 0
//1 0 0 0 0 1
//1 0 0 0 0 0

//0 1 0 0 0 1 1 0 0 0 0 1 0 1
//0 0 0 0 1 0 0 0 1 1 0 1 0 1
//0 1 0 0 0 0 1 0 0 1 0 0 0 1
//1 1 0 1 0 1 1 0 0 0 0 0 1 1
//1 0 0 0 0 0 1 1 1 0 1 0 0 0

//01010101001011001001010110010110100100001000101010
//00001000100000101010010000100000001001100110100101
//01111011010010001000001101001011100011000000010000
//01000000001010100011010000101000001010101011001011
//00011111000000101000010010100010100000101100000000
//11001000110101000010101100011010011010101011110111
//00011011010101001001001010000001000101001110000000
//10100000101000100110101010111110011000010000111010
//00111000001010100001100010000001000101001100001001
//11000110100001110010001001010101010101010001101000
//00010000100100000101001010101110100010101010000101
//11100100101001001000010000010101010100100100010100
//00000010000000101011001111010001100000101010100011
//10101010011100001000011000010110011110110100001000
//10101010100001101010100101000010100000111011101001
//10000000101100010000101100101101001011100000000100
//
//#include <iostream>
//#include <cstring>
//#include <string>
//#include <queue>
//char xx[4] = { 'D', 'L', 'R', 'U' };
//int x[4][2] = { { 1, 0 }, { 0, -1 }, { 0, 1 }, { -1, 0 } };
//char visited[N][N];
//typedef struct Node
//{
//	int x;
//	int y;
//	string road;
//	void set(int a, int b)
//	{
//		x = a;
//		y = b;
//	}
//}Node;
//
//void bfs()
//{
//	int count = 0;
//	memset(visited, 0, sizeof(visited));
//	queue < Node > q;
//	Node r;
//	r.road = "";
//	r.set(0, 0);
//	q.push(r);
//	visited[0][0] = 1;
//	while (!q.empty())
//	{
//		cout << "j" << endl;
//		Node n = q.front();
//		if (n.x == C - 1 && n.y == R - 1)
//		{
//			cout << n.road << endl;
//			return;
//		}
//		q.pop();
//		for (int i = 0; i < 4; i++)
//		{
//			int dx = n.x + x[i][0];
//			int dy = n.y + x[i][1];
//			if (dx >= 0 && dx < C && dy >= 0 && dy < R && visited[dx][dy] == 0 && color[dx][dy] == 0)
//			{
//				Node m;
//				m.set(dx, dy);
//				m.road = n.road + xx[i];
//				q.push(m);
//				visited[dx][dy] = 1;
//			}
//		}
//	}
//}
//int main()
//{
//	cin >> C >> R;
//	16 50
//	int k = 0;
//	for (int i = 0; i < C; i++)
//	{
//		for (int j = 0; j < R; j++)
//		{
//			color[i][j] = str[k] - '0';
//			k++;
//		}
//	}
//	cout << "k = " << k << endl;
//	bfs();
//	for (int i = 0; i < C; i++)
//	{
//		for (int j = 0; j < R; j++)
//		{
//			cout << color[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}
