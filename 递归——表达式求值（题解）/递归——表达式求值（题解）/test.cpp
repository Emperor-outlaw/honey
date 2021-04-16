#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//【描述】
//输入为四则运算表达式，仅有数字、+、-、*、/、（、）组成，没有空格，要求求其值。假设运算符结果都是整数。
//【输入】
//（2+3）*（5+7）+9/3
//【输出】
//63
//构思提示：表达式可以由项的加减组成：（项+项）或者（项-项）
//          项可以由因子乘除构成：（因子*因子）或者（因子/因子）
//          因子可以由'('表达式'）'或者一个整数构成：'('表达式'）'或者 整数
int exp_val();
int term_val();
int factor_val();
//计算一个因子的值
int factor_val()
{
	int result = 0;
	char ch = cin.peek();
	if (ch == '(')
	{
		cin.get(); //获取左括号
	    result += exp_val(); //计算括号中间表达式的值
		cin.get(); //获取右括号
	}
	else if (isdigit(ch))
	{
		while (isdigit(ch))
		{
			cin.get();
			result = result * 10 + ch - '0';
			ch = cin.peek();
		}
	}
	return result;
}
//计算项一个项的值
int term_val()
{
	int result = factor_val();
	while (1)
	{
		char ch = cin.peek();
		if (ch == '*')
		{
			cin.get();
			result *= factor_val();
		}
		else if (ch == '/')
		{
			cin.get();
			result /= factor_val();
		}
		else
			return result;
	}
}
//计算一个表达式的值
int exp_val()
{
	int result = term_val();
	while (1)
	{
		char ch = cin.peek();
		if (ch == '+')
		{
			cin.get(); //将+号获取走
			result += term_val();
		}
		else if (ch == '-')
		{
			cin.get(); //将-号获取走
			result -= term_val();
		}
		else
			return result;
	}
}
int main()
{
	cout << exp_val() << endl;
	return 0;
}