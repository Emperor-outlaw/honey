#define _CRT_SECURE_NO_WARNINGS
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
#include <stdio.h>
////�ݹ�ʵ��
//long long fibonacci_one(int num)
//{
//	if (num == 1 || num == 2)
//		return 1;
//	else
//		return fibonacci_one(num - 1) + fibonacci_one(num - 2);
//}
//
////�ǵݹ�
//long long fibonacci_two(int num)
//{
//	long long a = 1;
//	long long b = 1;
//	long long c = 1;
//	int i = 0;
//	for (i = 0; i < num - 2; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//
//int main()
//{
//	//�ݹ�
//	int num = 0;
//	long long ret = 0;
//	printf("������һ��������:>");
//	scanf("%d", &num);
//	//�ݹ�
//	ret = fibonacci_one(num);
//	printf("�ݹ���ret = %lld\n", ret);
//
//	//�ǵݹ�
//	ret = fibonacci_two(num);
//	printf("�ǵݹ���ret = %lld\n", ret);
//	return 0;
//}



////��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
//long double my_pow(double n, unsigned int k)
//{
//	if (k == 1)
//		return n;
//	else
//		return n * my_pow(n, k - 1);
//}
//
//int main()
//{
//	double n = 0;
//	unsigned int k = 0;
//	scanf("%lf %u", &n, &k);
//	long double ret = my_pow(n, k);
//	printf("ret = %lf\n", ret);
//	return 0;
//}


//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19
//unsigned int DigitSum(unsigned int n)
//{
//	unsigned int sum = 0;
//	while (n)
//	{
//		sum += n % 10;
//		n /= 10;
//	}
//	return sum;
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	unsigned int ret = DigitSum(n);
//	printf("ret = %u\n", ret);
//	return 0;
//}


//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//void reverse_string(char* str)
//{
//	int len = 0; //��¼�ַ����ĳ���
//	char* p = str; //��ָ��Pȥ���ַ����ĳ��ȣ����ֱ����str,���潻��ʱ�õ���str�Ͳ���ָ���һ���ַ�
//	while (*p++) //���ַ����ĳ���
//	{
//		len++;
//	}
//	int left = 0; //����ָ�룬ָ���ַ��������
//	int right = len - 1; //����ָ�룬ָ���ַ������ұ�
//	while (left < right) 
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char str[] = "hello bit!";
//	printf("��תǰ:%s\n", str);
//	reverse_string(str);
//	printf("��ת��:%s\n", str);
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
////�ݹ�
//int my_strlen_one(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return my_strlen_one(str + 1) + 1;
//}
//
////�ǵݹ�
//int my_strlen_two(char* str)
//{
//	int len = 0;
//	while (len++, *str++);
//	return len - 1;
//}
//int main()
//{
//	char str[] = "hello bit!";
//	int len = my_strlen_one(str);
//	printf("�ݹ����ַ����ĳ��ȣ�len = %d\n", len);
//	len = my_strlen_two(str);
//	printf("�ǵݹ����ַ����ĳ��ȣ�len = %d\n", len);
//	return 0;
//}

////�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
////�ݹ�
//int factorial_one(int n)
//{
//	if (n == 1 || n == 0)
//		return 1;
//	else
//		return n * factorial_one(n - 1);
//}
////�ǵݹ�
//int factorial_two(int n)
//{
//	int i = 1;
//	int tmp = 1;
//	for (i = 1; i <= n; i++)
//	{
//		tmp *= i;
//	}
//	return tmp;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = factorial_one(n);
//	printf("�ݹ���n�Ľ׳ˣ�ret = %d\n", ret);
//	ret = factorial_two(n);
//	printf("�ǵݹ���n�Ľ׳ˣ�ret = %d\n", ret);
//	return 0;
//}


//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
void print_every(int n)
{
	if (n > 0)
	{
		print_every(n / 10);
		printf("%d ", n % 10);
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	print_every(n);
	return 0;
}