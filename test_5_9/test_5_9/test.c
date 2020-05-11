#define _CRT_SECURE_NO_WARNINGS 1
//文件类型--（1.文本文件 2.二进制文件）
//二进制文件
//#include <stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件当中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//文件的顺序读写
//字符输入函数——fgetc(适用于所有输入流)
//int fgetc(FILE *stream);
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	int ch = 0;
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	//读文件
//	ch = fgetc(pf);
//	putchar(ch);//h
//	ch = fgetc(pf);
//	putchar(ch);//e
//	ch = fgetc(pf);
//	putchar(ch);//l
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//字符输出函数——fputc(适用所有输出流)
//int fputc(int c, FILE *stream);
//#include <stdio.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	写文件
//	fputc('a', pf);
//	fputc('b', pf);
//	fputc('c', pf);
//	//stdin——标准输入流
//	//stdout——标准输出流
//	//stderr——标准错误流
//	//fputc('a', stdout);
//	关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//文本行输入函数——fgets(适用所有输入流)
//char *fgets(char *string, int n, FILE *stream);
#include <stdio.h>
int main()
{
	char buf[1000] = { 0 };
	FILE* pf = fopen("test1.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}
	//读文件——每次读一行
	fgets(buf, 1000, pf);
	printf("%s", buf);
	/*fgets(buf, 20, pf);
	printf("%s", buf);
	fgets(buf, 20, pf);
	printf("%s", buf);*/
	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}

//文本行输出函数——fputs(适用于所有流)
//#include <stdio.h>
//int main()
//{
//	char arr[] = "hello world";
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//写文件——每次写一行
//	fputs(arr, pf);
//	fputs("hello world", pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//格式化的输入函数——fscanf(适用于所有输入流)
//int fprintf( FILE *stream, const char *format [, argument ]...);
//typedef struct People
//{
//	char name[20];
//	short age;
//	float score;
//}Peo;
//#include <stdio.h>
//int main()
//{
//	Peo p = { "zhangsan", 20, 55.5f };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//    //写文件
//	fprintf(pf, "%s %d %f", p.name, p.age, p.score);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//格式化的输出函数——fscanf(适用所有流)
//int fscanf( FILE *stream, const char *format [, argument ]... );
//typedef struct People
//{
//	char name[20];
//	short age;
//	float score;
//}Peo;
//#include <stdio.h>
//int main()
//{
//	Peo p = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//写文件
//	fscanf(pf, "%s %d %f", p.name, &(p.age), &(p.score));
//	printf("%s %d %f", p.name, p.age, p.score);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

////二进制输出——fwrite(适用于文件)
////size_t fwrite( const void *buffer, size_t size, size_t count, FILE *stream );
//#include <stdio.h>
//typedef struct People
//{
//	char name[20];
//	short age;
//	float score;
//}Peo;
//#include <stdio.h>
//int main()
//{
//	Peo p = { "zhangsan", 20, 55.5f };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//写文件（二进制形式写入）
//	fwrite(&p, sizeof(p), 1, pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

////二进制输入——fread(适用于文件) 
////size_t fread(void *buffer, size_t size, size_t count, FILE *stream);
//#include <stdio.h>
//typedef struct People
//{
//	char name[20];
//	short age;
//	float score;
//}Peo;
//#include <stdio.h>
//int main()
//{
//	Peo p = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//读文件（文件是二进制，打印出来才可能看懂）
//	fread(&p, sizeof(Peo), 1, pf);
//	printf("%s %d %f", p.name, p.age, p.score);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

////对比一组函数（区别）
////scanf/fscanf/sscanf 
////printf/fprintf/sprintf 
////sscanf——读一个格式化的数据从一个字符串里(结构体转化为字符串)
////int sscanf( const char *buffer, const char *format [, argument ] ... );
////sprintf——写一个格式化的数据到字符串里（字符串转化为结构体）
////int sprintf(char *buffer, const char *format[, argument] ...);
//#include <stdio.h>
//typedef struct People
//{
//	char name[20];
//	short age;
//	float score;
//}Peo;
//#include <stdio.h>
//int main()
//{
//	Peo p = { "张三", 20, 50.6f };
//	Peo p1 = { 0 };
//	char buff[20] = { 0 };
//	//先写一个格式化的数据到字符串里
//	sprintf(buff, "%s %d %f", p.name, p.age, p.score);
//	printf("%s\n", buff);
//	//读一个格式化的数据从字符串里（buff数组上一步已经存入格式化的数据）
//	sscanf(buff, "%s %d %f", p1.name, &(p1.age), &(p1.score));
//	printf("%s %d %f\n", p1.name, p1.age, p1.score);
//	return 0;
//}
//sscanf和sprintf——用作序列化和反序列化（用户界面和后台）

//文件的随机读写
//fseek——根据文件指针的位置和偏移量来定位文件指针
//int fseek(FILE * stream, long int offset, int origin)//offset——偏移量（字节个数）
//#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//		return 0;
//	//定位文件指针
//	//i love you
//	//SEEK_SET——文件开始
//	//SEEK_CUR——指针当前位置
//	//SEEK_END——文件结束
//	//fseek(pf, 2, SEEK_SET);
//	fseek(pf, -3, SEEK_END);//注意文件结束要用负的
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0; 
//}

//ftell——返回文件指针相对于起始位置的偏移量
//long int ftell ( FILE * stream );
//#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//		return 0;
//	//定位文件指针
//	//i love you
//	fseek(pf, 2, SEEK_SET);
//	//fseek(pf, -4, SEEK_END);//注意文件结束要用负的
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	printf("%d\n", ftell(pf));
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//rewind——让文件指针回到文件的起始位置
//void rewind(FILE* stream);
//#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//		return 0;
//	fseek(pf, 2, SEEK_SET);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//文件结束判定——被错误使用的feof
//在文件读取过程中，不能用feof函数的返回值直接用来判断文件的是否结束,而是应用于当文件读取结束的时候，判断是读取失败结束，还是遇到文件尾结束。
//1. 文本文件读取是否结束，判断返回值是否为EOF （fgetc），或者NULL（fgets） 
//例如： 
//fgetc判断是否为EOF. 
//fgets判断返回值是否为NULL.
//2. 二进制文件的读取结束判断，判断返回值是否小于实际要读的个数。 
//例如： 
//fread判断返回值是否小于实际要读的个数。
//1.
//#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//		return 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c", ch);
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char arr[30] = { 0 };
//	int ch = 0;
//	FILE* pwrite = NULL;
//	FILE* pread = NULL;
//	pread = fopen("test.txt", "r");
//	if (pread == NULL)
//		return 0;
//	pwrite = fopen("test1.txt", "w");
//	if (pwrite == NULL)
//	{
//		fclose(pread);
//		return 0;
//	}
//	//拷贝
//	while ((ch = fgetc(pread)) != EOF)
//	{
//		fputc(ch, pwrite);
//	}
//	if (ferror(pread))//如果遇到错误这个会返回一个真
//		puts("error when reading");
//	else if (feof(pread))//遇到文件结束标志EOF,返回非0数字（也就是真）
//		puts("end of file reached successfully");
//	//关闭文件
//	fclose(pread);
//	fclose(pwrite);
//	pread = NULL;
//	pwrite = NULL;
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char arr[30] = { 0 };
//	int ch = 0;
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//		return 0;
//	while (fgets(arr,30,pf))
//	{
//		printf("%s", arr);
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//2.
//#include <stdio.h>
//int main()
//{
//	char arr1[30] = { 0 };
//	int ch = 0;
//	FILE* pf = fopen("test1.txt", "r");
//	if (pf == NULL)
//		return 0;
//	while (fread(arr1, 20,1, pf)>=1)
//	{
//		printf("%s", arr1);
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
