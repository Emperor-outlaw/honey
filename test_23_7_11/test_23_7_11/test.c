#include <stdio.h>

////ģ��ʵ��memcpy
//#include <assert.h>
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* p = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		src = (char*)src + 1;
//		dest = (char*)dest + 1;
//	}
//	return p;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	int n = sizeof(arr1) / sizeof(arr1[0]);
//	int* p = (int*)my_memcpy(arr2, arr1, sizeof(arr1));
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	return 0;
//}

////ģ��ʵ��memmove
#include <assert.h>
void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* p = dest;
	//���destС��src�ʹ�ǰ�����ƶ������dest����src�ʹӺ���ǰ�ƶ�
	if (dest <= src)
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return p;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	my_memmove(arr, arr, 20); //���뽫����1��2��3��4��5�ƶ���3��4��5��6��7���λ��
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}



//int main()
//{
//	//��void����ָ�븳ֵ
//	int a = 10; //����һ������
//	int* pa = &a; //ָ��paָ��a��paָ���������int
//	void* s = pa; //ֱ�ӿ��Խ�pa����s������Ҫǿ������ת��
//	//void* s = &a; //Ҳ����ֱ��ȡa�ĵ�ַ��ֵ��s
//
//	//ʹ��void����ָ��
//	void* s1 = s; //void����ָ�����ֱ�Ӹ���void����ָ��
//	int* p1 = (int*)s; //Ҫ�뽫s��ֵ��int����ָ�룬��Ҫ��ǿ������ת��
//	printf("a = %d\n", *(int*)s); //ͨ��void���ͷ���a
//
//	//void����ָ��ʹ��ע������
//    //void ����ָ�벻��ֱ�ӽ�����������
//	s++; //���󣬲�������
//	s = s + 1; //���󣬲��ܼ�1����Ϊ��û�����ͣ���1�Ļ���������������֪���Ӽ����ֽ�
//	s = (int*)s + 1; //��ȷ��������ת���ɾ������ͣ��ټ���
//	void* s2 = NULL;
//	if (s2 < s1)
//		printf("s2С\n");
//	else
//		printf("s1С\n");
//
//	return 0;
//
//}

////������������
//void swap_int(int* p1, int* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//
////���������ַ�
//void swap_char(char* c1, char* c2)
//{
//	char tmp = *c1;
//	*c1 = *c2;
//	*c2 = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap_int(&a, &b); //����a��b
//	printf("a = %d, b = %d\n", a, b);
//
//	char c = '1';
//	char d = '2';
//	swap_char(&c, &d);
//	printf("c = %c, d = %c\n", c, d);
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6 };
//	int arr2[10] = { 0 };
//	int num = sizeof(arr1); //����Ҫ�������ٸ��ֽ�
//	memcpy(arr2, arr1, num); //��arr1�е�����Ԫ�ؿ�����arr2��
//	int i = 0;
//	for (i = 0; i < 10; i++) //��ӡĿ������arr2
//	{
//		printf("%d ", arr2[i]); //������Ϊ��1��2��3��4��5��6��0��0��0��0
//	}
//	return 0;
//}




//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//	memmove(arr + 2, arr, 16); //��Ԫ��1��2��3��4�ƶ���3��4��5��6
//	int i = 0;
//	for (i = 0; i < 7; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}