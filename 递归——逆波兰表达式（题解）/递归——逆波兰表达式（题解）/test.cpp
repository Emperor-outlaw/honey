#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstdlib>
using namespace std;
//【描述】
//逆波兰表达式是一种把运算符前置的算术表达式，例如普通表达式 2 + 3 的逆波兰表示法为 + 2 3.
//逆波兰表达式的有优点是运算符之间不必有优先级关系，也不必用括号改变运算次序，例如（2 + 3） * 4的李伯兰表示方法为 * + 2 3 4
//本题求解逆波兰表达式的值，其中运算符包括+、-、*、/四个
//【输入】
//输入为一行，其中运算符和运算数之间都用空格分隔，运算数是浮点数
//【输出】
//输出为一行，表达式的值
//【样例输入】
//* + 11.0 12.0 + 24.0 35.0
//【样例输出】
//1357.000000
//提示: (11.0 + 12.0) * (24.0 + 35.0)
double exp()
{
	char s[20];
	cin >> s;
	switch (s[0])
	{
	case '+':
		return exp() + exp();
	case '-':
		return exp() - exp();
	case '*':
		return exp() * exp();
	case '/':
		return exp() / exp();
	default:
		return atof(s);  //atof():将一个字符串转化为double类型的值（需要引用头文件stdlib.h） 例如："12.03" ——> 12.03
	}
}
int main()
{
	cout << exp() << endl;
	return 0;
}