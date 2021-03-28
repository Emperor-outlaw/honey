#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstring>
using namespace std;
int lood[30][60];
int my_way(int n, int i, int j)
{
	if (n == 0)
		return 1;
	lood[i][j] = 1;
	int num = 0;
	if (!lood[i + 1][j])
		num += my_way(n - 1, i + 1, j);
	if (!lood[i][j + 1])
		num += my_way(n - 1, i, j + 1);
	if (!lood[i][j - 1])
		num += my_way(n - 1, i, j - 1);
	lood[i][j] = 0;
	return num;
}

int main()
{
	int n = 0;
	cin >> n;
	memset(lood, 0, sizeof(lood));
	//ºŸ…ËŒ“¥”a[0][25]
	int ret = my_way(n, 0, 25);
	cout << ret << endl;
	return 0;
}