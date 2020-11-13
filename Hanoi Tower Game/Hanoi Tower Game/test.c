#define _CRT_SECURE_NO_WARNINGS 1
//汉诺塔游戏
#include <stdio.h>
void move(int n, char x, char y, char z)
{
	if (n > 1)
		move(n - 1, x, z, y);
	printf("将%d从%c移动到%c\n", n, x, z);
	if (n > 1)
		move(n - 1, y, x, z);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	move(n, 'A', 'B', 'C');
	return 0;
}