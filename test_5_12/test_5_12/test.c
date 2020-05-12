#define _CRT_SECURE_NO_WARNINGS 1
//预定义符号
//__FILE__  //进行编译的源文件
//__LINE__  //文件当前的行号
//__DATE__  //文件被编译的日期
//__TIME__  //文件被编译的时间
//__STDC__  //如果编译器遵循ANSI C（国际C标准）,其值为1，否则未定义
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		printf("file:%s date:%s time:%s line:%d i=%d\n", __FILE__, __DATE__, __TIME__, __LINE__, i);
//	}
//	return 0;
//}
//#define 定义标识符
//#define MAX 100
//#define reg register //为 register这个关键字，创建一个简短的名字 
//#define do_forever for(;;)     //用更形象的符号来替换一种实现
//#undef NAME//移除一个宏定义
//常见的条件编译指令
//1.#if  常量表达式  
         //... 
//  #endif 
//  /常量表达式由预处理器求值
//#include <stdio.h>
//#define MAX 100
//#define __DEBUG__ 1
//int main()
//{
////#if MAX == 1
////	printf("hehehh");
////#endif
//#if __DEBUG__
//	printf("heheheh");
//#endif
//	return 0;
//}
//2.多个分支的条件编译 
//#if 常量表达式  
      //... 
//#elif 常量表达式 
      //... 
//#else  
      //...
//#endif 
//#include <stdio.h>
//#define MAX 100
//int main()
//{
//#if MAX == 1
//	printf("hehehh");
//#elif MAX == 4
//	printf("uuuuuu");
//#else
//	printf("wwwwww");
//#endif
//	return 0;
//}
//3.判断是否被定义 
//#if defined(symbol) //判断定义了（第一种）
//#ifdef symbol //判断定义了（第二种）
//#include <stdio.h>
//#define MAX 100
//int main()
//{
//	//判断定义了（第一种）
////#if defined(MAX)
////	printf("hhhhhh");
////#endif
////	return 0;
//	//判断定义了（第二种）
//#ifdef MAX
//	printf("hhhhhh");
//#endif
//	return 0;
//}
//#if !defined(symbol)  //判断没定义（第一种）
//#ifndef symbol  //判断没定义（第二种）
//#include <stdio.h>
//#define MAX 100
//int main()
//{
//	//判断没定义（第一种）
//	//#if !defined(MAX)
//	//	printf("hhhhhh");
//	//#endif
//	//	return 0;
//	//判断没定义了（第二种）
//    #ifndef MAX
//		printf("hhhhhh");
//    #endif
//	return 0;
//}
//4.嵌套指令 
//#if defined(OS_UNIX)
//        #ifdef OPTION1   
//                 unix_version_option1(); 
//        #endif
//        #ifdef OPTION2   
//				   unix_version_option2();
//        #endif 
//#elif defined(OS_MSDOS) 
//        #ifdef OPTION2  
//                 msdos_version_option2(); 
//        #endif 
//#endif
//避免头文件的重复引入——解决方法：条件编译
//每个头文件开头写
//1.
//#ifndef __TEST_H__ 
//#define __TEST_H__ 
//   头文件的内容 
//#endif
//2.
//#pragma once
//其他预处理指令
//#error #pragma #line 等等

