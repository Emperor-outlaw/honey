#define _CRT_SECURE_NO_WARNINGS 1
//����Ŀ������
//��12öӲ�ҡ�������11ö��Һ�1ö�ٱҡ��ٱҺ����������ͬ�� ����֪���ٱұ�����ỹ���ء�
//������һ����ƽ������Щ�����Σ�������ƵĽ��
//�����ҳ��ٱҲ���ȷ���ٱ��������أ����ݱ�֤һ���ҳ�����
//�����롿
//��һ���ǲ�������������
//ÿ�����������У�ÿ�б�ʾһ�γ����Ľ�������ұ��ΪA - L��
//ÿ�γ����Ľ���������Կո�������ַ�����ʾ����ƽ��߷��õ�Ӳ�ң���ƽ�ұ߷��õ�Ӳ��ƽ��״̬��
//����ƽ��״̬��"up", ��down��, ��"even"��ʾ, �ֱ�Ϊ�Ҷ˸ߡ��Ҷ˵ͺ�ƽ�⡣��ƽ���ҵ�Ӳ����������ȵġ�
//�������
//�����һ����ŵ������Ǽٱң���˵����������ỹ���ء�
//
//������������
//1
//ABCD EFGH even
//ABCI EFJK up
//ABIJ EFGH even
//�����������
//K is the counterfeit coin and it is light.

#include <iostream>
#include <cstring>
using namespace std;
char left[3][7];//���ڴ����ƽ��ߵ�����
char right[3][7];//���ڴ����ƽ�ұߵ�����
char result[3][5];//���ڴ����ƽ�Ľ��
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
		
		if (is_fake(i, true))  //true������
		{
			cout << i << " is the counterfeit coin and it is light." << endl;
			break;
		}
		else if (is_fake(i, false)) //false������
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