//������A�е����ݺ�����B�е����ݽ��н�����������һ����
#include <stdio.h>

//void PrintArry(int arr[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void SwapArry(int arr1[], int arr2[], int n) //������������
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 11,12,13,14,15,16,17,18,19,20 };
//	printf("����ǰ����arr1:\n");
//	PrintArry(arr1, 10);
//	printf("����ǰ����arr2:\n");
//	PrintArry(arr2, 10);
//
//	SwapArry(arr1, arr2, 10); //������������
//
//	printf("����������arr1:\n");
//	PrintArry(arr1, 10);
//	printf("����������arr2:\n");
//	PrintArry(arr2, 10);
//	return 0;
//}


////��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
////ʵ�֣��������ַ����е��ַ��������У����������ӡ��
////Ҫ�󣺲���ʹ��C�������е��ַ�������������
//int MyString(char* str)
//{
//	char* p = str;
//	while (*p++); //ע�⣺�����++����while�pָ��'\0'�󻹻������ټ�һ�Σ�����ָ��'\0'����
//	//while(*p) //ע������������p����ָ��'\0'
//	//{
//	//    p++;
//	//}
//	return p - str - 1;
//}
//void reverse_string(char* str) //�ݹ�
//{
//	int len = MyString(str);
//	char tmp = str[0];
//	str[0] = str[len - 1];
//	str[len - 1] = '\0';
//	if (MyString(str + 1) >= 2)
//		reverse_string(str + 1);
//	str[len - 1] = tmp;
//}
//int main()
//{
//	char str[] = "hello bit!";
//	printf("��תǰ��%s\n", str);
//	reverse_string(str);
//	printf("��ת��%s\n", str);
//	return 0;
//}

////дһ�����������������Ľϴ�ֵ
//int GetMax(int a, int b)
//{
//	return a > b ? a : b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = GetMax(a, b);
//	printf("max = %d\n", ret);
//	return 0;
//}

#include <stdio.h>

int main() {
    printf("%d\n", -3 / 2);
    return 0;
}