/*#include <stdio.h>
int main()
{
	 printf("\a\a\a\a\a"); 
	 return 0;
}*/
/*输出乘法口诀表*/ 
/*#include <stdio.h>
int main ()
  {
  	int i=0;
	int j=0;
  	for (i=1;i<=9;i++)
  {
  	
  	for (j=1;j<=i;j++)
  {
    printf("%d*%d=%-2d  ",i,j,i*j);
  }
	printf("\n");	
  }
  return 0;
  }*/ 
  /*判断100~200之间的素数*/ 
  /*#include <stdio.h>
  int main ()
  {
  	 int i,j;
  	 int count=0;
	 for(i=100;i<=200;i++) 还可for(i=101;i<=200;i+=2) 
	 {
	 	for(j=2;j<i;j++)  还可for(j=2;j<sqrt(i);j++),加头文件#include<math.h> 
	 {
	 	if(i% j==0)
	    {break;
	    }	
	 }	
	 	if(i==j)
		{printf("%d ",i);
		count++;
		}	
	 }
	 printf("count=%d",count);
	 return 0; 
  }*/ 
  /*判断闰年的方法：
  1、能被4整出不能被100整除
  2、能被400整出
    下面两种方法*/ 
  /*#include <stdio.h>
  int main()
  {
  	int year=0;
  	int count=0;
  	for (year=1000;year<=2000;year++)
  	{
	  
	  if((year% 4==0)&&(year%100!=0))
	  {printf("%d ",year);
	  count++;
	  }
	  else if (year%400==0)
	  {printf("%d ",year);
	  count++;	 
	  }
  	}  	
  	printf("\ncount=%d",count);
  	return 0;	
  } */
 /* #include <stdio.h>
  int main()
{
  int year=0;
  int count=0;
  for (year=1000;year<=2000;year++)
{
  if ((year%4==0）&&（year%100!=0)||(year%400==0))
  {
  printf("%d ",year);
  count++;
  }
}
  printf("\ncount=%d",count);
  return 0;
}*/
/*判断一个数是否为奇数*/ 
 /*#include <stdio.h>
 int main ()
 {
 	int i=0;
 	int j;
 	printf("请输入一个数\n");
 	scanf("%d",&j);
 	for (i=1;i<=j;i+=2)
 	{
 		if (i== j)
 		{
 		    printf ("j是奇数");
 			break;
 		}
 	}
 	if(i!=j)
 	printf  ("j不是奇数"); 
 	return 0;
 } */
 /*输出1~100之间的奇数*/  
 /*#include <stdio.h> //输出奇数第一种方法
 int main ()
 {
 	int i=0;
 	int j=0;
 	int count=0; 
 	for (i=1;i<=100;i++)
 	{
 		for(j=1;j<=i;j+=2)
 		if (i== j)
 		{
 		    printf ("%-2d ",i);
 		    count++;
 			break;
 		}
 	} 
 	printf("\ncount=%d",count);
 	return 0;
 } */ 
 /*#include <stdio.h> //输出奇数第二种方法 
 int main()
 {
	int i;
 	int count= 0;
 	for(i=1;i<=100;i+=2)
 	{
	 printf("%-2d ",i);
 	 count++;
 	}
 	printf("\ncount=%d",count);
 	return 0;
 }*/
// #include <stdio.h>//将输入的任意小写字母输出为对应的大写字母 
// int main()
// {
// 	  int ch=0;
// 	  while((ch=getchar())!= EOF)
// 	{
// 		if ((ch>='a')&&(ch<='z'))
// 		{
// 	     putchar(ch-32);
// 		} 
//		else
//		 putchar(ch);		 	    
// 	}
//    return 0;
// } 
//#include <stdio.h>//创建一个临时变量进行两个数的交换 
//int main()
//{
//	int i,j,temp;
//	printf("请输入两个数\n");
//	scanf("%d%d",&i,&j);
//	printf("i=%d j=%d\n",i,j);
//	temp=i;
//	i=j;
//	j=temp;
//	printf("i=%d j=%d\n",i,j);	
//	return 0;
//}
//#include <stdio.h>//不创建临时变量进行两个数的交换 
//int main()
//{
//	int i,j;
//	printf("请输入两个数\n");
//	scanf("%d%d",&i,&j);
//	printf("i=%d j=%d\n",i,j);//加法运算 
//	i=i+j;
//	j=i-j;
//	i=i-j;
//	printf("i=%d j=%d\n",i,j);	
//	return 0;
//}
//#include <stdio.h>//按位异或交换 
//int main()
//{
//	int mum1=3;                  //011—mum1	
//	int mum2=5;                  //101—mum2 
//	printf("mum1=%d mum2=%d\n",mum1,mum2); //110—按位异或的结果 
//	mum1=mum1^mum2;
//	mum2=mum1^mum2;
//	mum1=mum1^mum2;
//	printf("mum1=%d mum2=%d\n",mum1,mum2);
//	return 0;	
//}
//求最大公约数
//#include <stdio.h>
//int main()
//{
//	int a=18;                    //int a =18; 
//	int b=24;                    //int b=24;
//	while(a%b)//a、b的顺序无所谓 //int c=0;
//	{                            //while(c=a%b)
//		int c;                   // {a=b;b=c;} 
//		c=a%b;                   //printf()
//		a=b;
//		b=c;		
//	}
//	printf("%d",b);
//	return 0;
//} 
//求最小公倍数
//a和b相乘再除以a和b的最大公约数 
//#include <stdio.h>
//int main()
//{
//	int a=18;
//	int b=24;
//	int c=a%b;
//	int d=a*b;
//	if(c==0)
//	{
//		printf("%d",a);
//	}
//	else
//	{
//		while(c=a%b)
//	{
//		a=b;
//		b=c;
//	}
//	a=d/b;
//	printf("%d",a);	
//	}
//	return 0;
//	
//}
//求十个整数的最大值
//#include <stdio.h>
//int main()
//{
//	int arr[]={-78,1,-2,-133,4,5,6,7,8,9};
//	int max=arr[0];
//	int i;
//	for(i=1;i<10;i++)
//	{
//		if(max<arr[i])
//		{
//			max=arr[i];
//		}
//	}
//	printf("%d",max);
//	return 0;
//} 
//将三个数从大到小排列
//#include <stdio.h>
//int main()
//{
//	int a=-4;
//	int b=-2;
//	int c=-9;
//	if (a<b)
//	{
//		int temp=a;
//		a=b;
//		b=temp;		
//	}
//	if (a<c)
//	{
//		int temp=a;
//		a=c;
//		c=temp;
//	}
//	if (b<c)
//	{
//		int temp=b;
//		b=c;
//		c=temp;
//	}
//	printf("%d %d %d",a,b,c);
//	return 0;	
//}
//将十个数从大到小排列 
//#include <stdio.h>//算法1 
//int main()
//{
//	int arr[]={1,4,6,3,2,7,9,8,0,5};
//	int i,j;
//	for (j=9;j>=0;j--)
//	{
//		for(i=0;i<=j;i++)
//		{
//			if(arr[i]<arr[i+1])
//			{
//				int temp=arr[i];
//				arr[i]=arr[i+1];
//				arr[i+1]=temp;
//			}
//		}
//	}
//	for(j=0;j<10;j++)
//	{
//		printf("%d\n",arr[j]);
//	}	
//	return 0;
//}
//求一个数的阶乘 
//#include <stdio.h>
//int main()
//{
//	int n=0;
//	int i=0;
//	int ret=1;
//	printf("请输入一个数\n");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++)
//	{
//		
//		ret *=i;		
//	}
//	printf("%d\n",ret);
//	return 0;	
//} 
//1!+2!+3!+4!的阶乘 
//#include <stdio.h>
//int main()
//{
//	int n=0;
//	int i=0;
//	int ret=1;
//	int sum=0;
//	if (0!=n)
//	{
//		for(i=1;i<=n;i++)
//	{
//		ret *=i;
//		sum +=ret;		
//	}
//	    printf ("%d",sum);
//	}
//	else
//	{
//		printf("%d",1);
//	}		
//	return 0;
//}
//在一个有序数组中查找具体的某个数字n，编写int binsearch(int x,intv[],int n);功能：在v[0]<=v[1]<=[2]<=[3]...<=[n-1]的数组中查找x. 
//#include <stdio.h>//折半查找法；二分法 
//int main()
//{
//	int arr[]={0,1,2,3,4,5,6,7,8,9};
//	int n=9;
//	int left=0;//左标 
//	int right=sizeof(arr)/sizeof(arr[0])-1;//右标
//	while(left<=right)
//	{
//		int mid=(left+right)/2;
//		if (arr[mid]<n)
//	{
//		left=mid+1;
//	}
//	    else if (arr[mid]>n)
//	{
//		right=mid-1;
//	}
//	    else			  
//	{
//		printf("找到了：%d",mid);
//		break;
//	}
//	}
//	if (left>right)	
//	printf("找不到%d");
//	return 0;
//}
//演示多个字符从两边移动，向中间移动
//"welcome to bit!!!"
//"w###############!"
//"we#############!!"
//..................
//"welcome to bit!!!"
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//int main()
//{
//	char arr1[]="In the future,my name is Changan,and you call it your hometown,because Changan returns to your hometown,and there is Changan in your hometown.";
//	char arr2[]="                                                                                                                                              ";
//	int sz=strlen(arr1); //srtlen引用#include<string.h> 
//	int left=0;
//	int right=sz-1;
//	while(left<=right)
//	{
//		arr2[left]=arr1[left];
//	    arr2[right]=arr1[right];
//	    printf("%s\n",arr2);
//	    Sleep(100);      //引用头文件#include<windows.h> 
//	     system("cls");  //引用#iclude <stdlib.h>	   
//	    left++;
//	    right--;
//	}	
//	return 0;	
//}
//编写代码实现,模拟用户登陆情景,并且只能登陆三次,如果三次均输入错误,则退出程序. 
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int i=0;
//	char password[20]={0};
//	printf("你最多有三次机会输入正确密码\n\n");
//	for(i=1;i<=3;i++)
//	{
//		printf("第%d次输入,请输入密码:> ",i);
//		scanf("%s",password);
//		if(strcmp(password,"123456")==0)//两个字符串比较函数,如果相等返回值为0,引用头文件#include<string.h> 
//		{
//			printf("登陆成功");
//			break;
//		}
//		else
//		{
//			printf("密码错误，登陆失败第%d次\n\n",i); 
//		}
//	}
//	if(4==i)
//	{
//		printf("恭喜你三次全部登陆失败，有缘再见");
//	}	
//	return 0;
//}
//前两个代码的组合；功能：输入密码正确后播放一个效果 
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//int main()
//{
//	int i=0;
//	char password[20]={0};
//	printf("你最多有三次机会输入正确密码\n\n");
//	for(i=1;i<=3;i++)
//	{
//		printf("第%d次输入,请输入密码:> ",i);
//		scanf("%s",password);
//		if(strcmp(password,"123456")==0)
//		{
//			printf("登陆成功");
//			printf("马上在5秒后播放效果,Wait a moment\n");
//			//system("pause");  //暂停函数 
//			Sleep(5000);
//			char arr1[]="In the future,my name is Changan,and you call it your hometown,because Changan returns to your hometown,and there is Changan in your hometown.";
//	        char arr2[]="                                                                                                                                              ";
//	        int sz=strlen(arr1); //srtlen引用#include<string.h> 
//	        int left=0;
//	        int right=sz-1;
//	        while(left<=right)
//	       {
//	         	arr2[left]=arr1[left];
//	            arr2[right]=arr1[right];
//	            printf("%s\n",arr2);
//	            Sleep(100);      //引用头文件#include<windows.h> 
//	            system("cls");  //引用#iclude <stdlib.h>	   
//	            left++;
//	            right--;
//       	   }	
//			break;
//		}
//		else
//		{
//			printf("密码错误，登陆失败第%d次\n\n",i); 
//		}
//	}
//	if(4==i)
//	{
//		printf("恭喜你三次全部登陆失败，有缘再见");
//	}	
//	return 0;
//}
//////关机程序 
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[20]={0};
//	system("shutdown -s -t 60");//“shutdown _s _t 60”关机命令，60是关机时间倒计时 
//	while(1)
//	{
//		printf("请注意你的电脑要在1minute内关机，如果输入我是一头死肥猪就取消关机\n");
//		printf(":>");
//		scanf("%s",input);
//		if(strcmp(input,"我是一头死肥猪")==0)
//		{
//			system("down -a");//“解除关机命令” 
//			break;
//		}
//	}	
//	return 0;
//}
//猜数字游戏 
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("*************************\n");
//	printf("*******  1. play  *******\n");
//	printf("*******  0. exit  *******\n");
//	printf("*************************\n");
//	
//}
//void game()
//{
//	int ret=0;
//	int num=0;	
//	//1,产生一个随机数
//    //time()函数获取当前电脑的时间，头文件#include<time.h> 
//    ret=rand()%100+1;
//	//rand()获取一个随机数的函数,头文件#include<stdlib.h> 
//	//printf("   %d\n",ret);	
//	//2,猜数字
//	while(1)
//	{
//  	    printf("请输入你猜的数字:> ");
//	    scanf("%d",&num);	    
//        if(num<ret)
//	    {
//		    printf("你猜小了\n");
//	    }
//	    else if(num>ret)
//	    {
//		    printf("你猜大了\n");
//	    }
//	    else
//	    {
//	     	printf("恭喜你，你猜对了\n\n");
//		    break;
//     	}
//    }
//}
//int main()
//{
//	int input=0;
//	do
//	{
//		srand((unsigned int)time(NULL));//srand函数是随机数发生器的初始化函数
//		menu();
//		printf("\n请输入你要玩的游戏序号:>  ");
//	    scanf("%d",&input);
//	    switch(input)
//	   {
//		case 1:
//		    game();
//		    break;
//		case 0:
//		    printf("退出游戏\n");
//	     	break;
//	   	default:
//		    printf("输入错误,重新输入:>\n");
//		    break;
//	   }
//	}while(input);
//return 0;
//}
//将数组A里面的内容和数组B里面的内容交换（数组一样大） 
//#include <stdio.h>
//int main()
//{
//	int i=0;
//	int arr1[]={1,3,5,7,9};
//	int arr2[]={0,2,4,6,8};
//	int sz=sizeof(arr1)/sizeof(arr1[0]);	
//	for (i=0;i<sz;i++)
//	{
//		int temp=arr1[i];
//		arr1[i]=arr2[i];
//		arr2[i]=temp;
//	}
//	for (i=0;i<sz;i++)
//	{
//		printf("%d ",arr1[i]);
//	}
//	printf("\n");
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr2[i]);
//	}
//	return 0;
// }
//求和1/1-1/2+1/3-1/4...-1/100 
//#include <stdio.h>
//int main()
//{
//	double sum=0.0;
//	int i=0;
//	int flag=1;
//	for (i=1;i<=100;i++)
//	{
//		
//		sum +=flag*1.0/i;
//		flag=-flag;
//	}	
//	printf("%lf",sum);
//	return 0;
//}
//求1~100之间的数中9的个数 
//#include <stdio.h>
//int main()
//{
//	int count=0;
//	int i=0;
//	for (i=1;i<=100;i++)
//	{
//		if (9==i%10)//算个位的9的个数,取余 
//			count++;
//	   if (9==i/10)//算十位的9的个数，取商
//	        count++;//不能用else（注意99）,有99if 和else只能进一个 
//	}
//	printf("%d",count); 
//	return 0; 
//}
//函数的调用，求一个数是不是素数 
//#include <stdio.h>
//#include <math.h>
//int is_prime(int n)
//{
//	int i=0;
//	for (i=2;i<=sqrt(n);i++)
//	{
//		if(0==n%i)
//		{
//			return 0;
//		}		
//	}
//	return 1;//是素数 
//}//（思想）TDD—测试驱动开发 
//int main()
//{
//	int count=0;
//	int i=0;
//	for(i=1;i<=200;i++)
//	{
//		if(is_prime(i)==1)
//		{
//			printf("%d ",i);
//			count++;
//		}
//	}
//	printf("\ncount=%d ",count);
//	return 0;
//}
//函数调用,求两个数的最大值
// 
//#include <stdio.h>
//int get_max(int i,int j)
//{
//	int max=i>j?i:j;
//	return max;
//}
//int main() 
//{
//	int a=34;
//	int b=23;
//	int ret=get_max(a,b);
//	printf("%d",ret);
//	return 0;
//}
//函数调用，对两个数进行交换 
//#include <stdio.h>
//void Swap(int* p1,int* p2)
//{
//	int temp=*p1;
//	*p1=*p2;
//	*p2=temp;
//}
//int main()
//{
//	int a=32;
//	int b=56;
//	printf("a=%d b=%d\n",a,b);
//	Swap(&a,&b);
//	printf("a=%d b=%d",a,b);
//	return 0;
//}
//调用函数,用二分法 实现一个整形有序数组的查找 
//#include <stdio.h>
//int binary_search(int arr[],int k,int n)
//{
//	int left=0;
//	int right=n;
//	while(left<=right)
//	{ //int mid=(left+right)/2 
//		int mid=left+(right-left)/2;//新的求和方法 
//		if(arr[mid]<k)
//	{
//		left=mid+1;
//	}  
//	    else if(arr[mid]>k)
//	{
//		right=mid-1;		
//	}  
//	    else 
//	{
//		return mid;
//	}	
//    }
//    return -1;		
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9};
//	int sz=sizeof(arr)/sizeof(arr[0])-1;
//	int ret=binary_search(arr,8,sz);
//	if(-1==ret)
//	{
//		printf("找不到\n");
//	}
//	else 
//	{
//		printf("找到了,下标识%d\n",ret);
//	} 
//	return 0;
//}
//写一个函数,每调用一次这个函数,就将sum值加一 
//#include <stdio.h>
//void add(int* n)
//{
//	(*n)++;
//}
//int main()
//{
//	int sum=0;
//    add(&sum);
//	printf("%d",sum);
//    return 0;
//} 
//打印 
//      * 
//     *** 
//    ***** 
//   ******* 
//  ********* 
// *********** 
//*************
// ***********
//  *********
//   ******* 
//    ***** 
//     *** 
//      *   
//#include <stdio.h>
//int main()
//{
//	int line=0;
//	printf("请输入行数\n");//7 
//	scanf("%d",&line);
//	int i=0;
//	for(i=0;i<line;i++)
//	{
//		int j=0;
//		for(j=0;j<line-1-i;j++)//先打印空格
//		{
//			printf(" ");
//		}
//		for(j=0;j<2*i+1;j++)//再打印*号
//		{
//			printf("*");	
//		}
//		printf("\n");	
//	}
//	for(i=0;i<line-1;i++)//6
//	{
//		int j=0;
//		for(j=0;j<i+1;j++)
//		{
//			printf(" ");
//		}
//		for(j=0;j<2*(line-1-i)-1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	} 
//	 return 0;
//}
//编写一个程序，求任意数区间的水仙花数并输出（通式） 
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i=0;
//	for(i=1;i<=100000;i++)
//	{
//		int temp=i;//1、求位数
//		int count=0;
//	    while(temp)
//	    {
//	    	temp/=10;
//	    	count++;	    	
//	    }
//		double sum=0;//2、求每位数字的次方和
//		temp=i; 
//	    while(temp)//C++pow返回值为double，应定义sum为double ，而c中可为int 
//	    {
//	    	sum+=pow(temp%10,count);//求次方函数pow，引用头文件math.h 
//	    	temp/=10;
//	    }
//	    if (sum==i)//3、判断是否为水仙花数 
//	    {
//	    	printf("%d ",i);
//	    }
//	} 
//	return 0;
//}
//Sn=a+aa+aaa+aaaa+aaaaa  求n项这样的和，其中a是数字 
//例如：2+22+222+2222+22222 —— 5项2的和 
//#include <stdio.h>
//int main ()
//{
//	int a=0;
//	int n=0;
//	printf("请输入数字a和项数n\n");
//	scanf("%d%d",&a,&n);
//	int sum=0;
//	int i=0;
//	int j=0;
//	for(i=0;i<n;i++)
//	{
//		j=10*j+a;
//		sum+=j;		
//	}
//	printf("%d",sum);	
//	return 0;
//}
//编写一个程序，可以一直接收键盘字符，
//如果接收是小写字符就输出大写字符；如果接收是大写字符就输出小写字符 
//如果是数字字符就不输出 
//第1种方法，用if语句(判断输入的字符)
//#include <stdio.h>//将输入的任意小写字母输出为对应的大写字母 
// int main()
// {
// 	    int ch=0;
//      printf("请输入键盘上的任意键\n");
// 	  while((ch=getchar())!= EOF)
// 	{
// 		if (ch>='a'&& ch<='z')
// 		{
// 	        putchar(ch-32);
// 		} 
//		else if (ch>='A'&& ch<='Z')
//		{
//			putchar(ch+32);
//		}
//		else if (ch>='0'&& ch<='9')	
//		{
//			continue;//也可以是空语句 
//		}
//		else
//		{
//			putchar(ch);
//		}	 	    
// 	}
//    return 0;
// } 
////////////#include <stdio.h>//将输入的任意小写字母输出为对应的大写字母
////////////#include <ctype.h>
////////////#include <stdlib.h>
//////////// int main()
//////////// {
//////////// 	  int ch=0;
////////////      printf("请输入键盘上的任意键\n");
//////////// 	  while((ch=getchar())!= EOF)
//////////// 	{
//////////// 		if (isupper(ch))
//////////// 		{
//////////// 	        tolower(ch);
//////////// 		} 
////////////		else if (islower(ch))
////////////		{
////////////			toupper(ch);
////////////		}
////////////		else if (isdigit(ch))	
////////////		{
////////////			continue;//也可以是空语句 
////////////		}
////////////		else
////////////		{
////////////			putchar(ch);
////////////		}	 	    
//////////// 	}
////////////    return 0;
//////////// }
//函数的递归调用：把1234循序打印在屏幕上1 2 3 4 
//#include <stdio.h>
//void print(int n)
//{
//	if(n>9)
//	{
//		print(n/10);
//	}
//	printf("%d ",n%10);
//}
//
//int main()
//{
//	int num=0;
//	scanf("%d",&num); 
//	print(num);	
//	return 0;
//}
//1、编写函数,求字符串的长度
//#include <stdio.h>
//int my_strlen(char* str)
//{
//	int count=0;
//	while(*str!='\0')
//	{
//		count++;
//		str++;
//	} 
//	return count;
//}
//int main()
//{
//	char arr[20]={0};
//	scanf("%s",arr);
//	int ret=0;
//	ret=my_strlen(arr);
//	printf("%d",ret);
//	return 0;
//} 
//2、编写函数，不允许创建临时变量，求字符串的长度（递归调用） 
//#include <stdio.h>
//int my_strlen(char* str)
//{
//	if('\0'==*str)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1+my_strlen(str+1);
//	}
//}
//int main()
//{
//	char arr[20]={0};
//	scanf("%s",arr);
//	int ret=0;
//	ret=my_strlen(arr);
//	printf("%d",ret);
//	return 0;
//}
//递归调用，求n的阶乘
//#include <stdio.h>
//int Fac(int n)
//{
//	if(n<=1)
//	    return 1;
//	else
//	    return n*Fac(n-1);		
//}
//int main()
//{
//	int n=0;
//	int sum=0;
//	scanf("%d",&n);
//	sum=Fac(n);
//	printf("%d",sum);	
//	return 0;
//}
//递归调用，求第n个斐波那契数（不考虑溢出） 
//#include <stdio.h>
//int Fib(int n)
//{
//	if(n<=2)
//	{
//		return 1;
//	}
//	else 
//	{
//		return Fib(n-1)+Fib(n-2);
//	}
//}
//int main()
//{
//	int n=0;
//	int ret=0;
//	scanf("%d",&n);
//	ret=Fib(n);
//	printf("%d",ret);	
//	return 0;
//}
//#include <stdio.h>//调用函数用循环来实现求第n个斐波那契数（不考虑溢出） 
//int Fib(int n)
//{
//    int a=1;                 //	if (n<=2)
//    int b=1;                 //	{
//    int c=1;                 //		return 1;
//    while(n>2)               //	}
//   {   	                   //	else
//	    c=a+b;                 //	{
//	    a=b;                   //		int i=0; 
//	    b=c;                   //	    int a=1;
//	    n--;	               //		int b=1;
//   }                         //		int c=0;
//   return c;                 //		for(i=0;i<n-2;i++)
//}                            //		{
//int main()                   //			c=a+b;
//{                            //			a=b;
//	int ret=0;                 //			b=c;
//	int n=0;                   //		}
//	scanf("%d",&n);            //		return c;
//	ret=Fib(n);                //	}
//	printf("%d",ret);	
//	return 0;
//}
//汉诺塔游戏(递归)
//#include <stdio.h>
//void move_tower(int n,char x,char y,char z)
//{
//	
//	if(n==1)
//	{
//		printf("move sheet %d from %c to %c\n",n,x,z);
//	}
//	else 
//	{
//		move_tower(n-1,x,z,y);
//		printf("move sheet %d from %c to %c\n",n,x,z);
//		move_tower(n-1,y,x,z);
//	}
//}
//int main()
//{
//	int n=0;
//	printf("请输入汉诺塔的层数\n");
//	scanf("%d",&n);
//	move_tower(n,'A','B','C');	
//	return 0;
//} 
//青蛙跳台阶（递归）
//1、有n个台阶一次可以跳1阶，也可以跳2阶，问有多少种跳法(类似于斐波那契数)
//#include <stdio.h>
//int leapfrog(int n)
//{
//	if(1==n)
//	{
//		return 1;
//	}
//	else if(2==n)
//	{
//		return 2;
//	}
//	else
//	{
//		return leapfrog(n-1)+leapfrog(n-2);
//	}
//}
//int main()
//{
//	int n=0;
//	int ret=0;
//	printf("请输入台阶的个数\n");
//	scanf("%d",&n);
//	ret=leapfrog(n);
//	printf("%d ",ret);
//	return 0;
//}
//1、有n个台阶一次可以跳1阶，也可以跳2阶....也可以跳n阶，问有多少种跳法(类似于斐波那契数)
//#include <stdio.h>
//int leapfrog(int n)
//{
//	if(1==n)
//	{
//		return 1;
//	}
//	else 
//	{
//		return 2*leapfrog(n-1);
//	}
//}
//int main()
//{
//	int n=0;
//	int ret=0;
//	printf("请输入台阶数\n");
//	scanf("%d",&n);
//	ret=leapfrog(n);
//	printf("%d",ret);	
//	return 0;
//}
//用冒泡法排序（由大到小） 
//#include <stdio.h>
//void bubble_sort(int arr[],int sz)
//{
//	int i=0;
//	int j=0;
//	for(i=0;i<sz-1;i++)
//	{
//		int flag=1;
//		for(j=0;j<sz-1-i;j++)
//		{
//			if(arr[j]<arr[j+1])
//			{
//				int temp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=temp;
//				flag=0;
//			}
//		}
//		if(1==flag)
//		break;
//	}
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}	
//}
//int main()
//{
//	int arr[]={9,3,4,5,6,8,7,2,1};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr,sz);	
//	return 0;
//} 
//实现一个函数，打印乘法口诀表，口诀表的行数列数自己定 
//#include <stdio.h>
//int bill(int n)
//{
//	int i=0;
//	int j=0;
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("%-2d*%-2d=%-3d ",i,j,i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n=0;
//	printf("请输入想打印的几乘几乘法表\n");
//	scanf("%d",&n);
//	bill(n);	
//	return 0;
//}
//使用函数实现两个数的交换
//#include <stdio.h>
//void enchange(int a,int b)
//{
//	a=a^b;
//	b=a^b;
//	a=a^b;
////	a=a+b;
////	b=a-b;
////	a=a-b;
//	printf("a=%d b=%d",a,b);
//
//}
//int main()
//{
//	int a=78;
//	int b=98;
//	printf("a=%d b=%d\n",a,b);
//	enchange(a,b); 
//	return 0;
//} 
//实现一个函数判段year是不是闰年
//#include <stdio.h>
//int is_leap_year(int year)
//{
//	if(year%4==0&&year%100!=0||year%400==0)
//	{
//		return 1;
//	}
//	else
//	return 0;	
//}
//int main()
//{
//	int year=0;
//	scanf("%d",&year);	
//	if(is_leap_year(year)==1)
//	{
//		printf("是闰年\n");
//	}
//	else
//	printf("不是闰\n");	
//	return 0;
//} 
//实现一个函数判断是不是素数
//#include <stdio.h>
//#include <math.h>
//int is_prime_number(int n)
//{
//	int i=0;
//	for(i=2;i<=sqrt(n);i++)
//	{
//		if(0==n%i)
//		{
//			return 0;
//		}
//	}
//	if(i>sqrt(n))
//	return 1;
//}
//int main()
//{
//	int n=0;
//	scanf("%d",&n);	
//	if(is_prime_number(n)==1)
//	{
//		printf("是素数\n");
//	}
//	else
//	{
//		printf("不是素数\n"); 
//	}
//	return 0;
//} 
//三子棋小游戏 
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#define ROW 3//棋盘的行数 
#define COL 3//棋盘的列数 
void menu()
{
	
	printf("*****************\n");
	printf("**** 1、Play ****\n");
	printf("**** 0、Exit ****\n");
	printf("*****************\n");	 
}
void initboard(char board[ROW][COL],int row,int col)
{
//	int i=0;
//	int j=0;
//	for(i=0;i<ROW;i++)
//	{
//		for(j=0;j<COL;j++)
//		{
//			board[i][j]==' ';
//		}
//	}
	memset(board,' ',row*col*sizeof(board[0][0]));
}
void display(char board[ROW][COL],int row,int col)
{
	int i=0;
	int j=0;
	for(i=0;i<row;i++)
	{
//		printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
		for(j=0;j<col;j++)
		{
			printf(" %c ",board[i][j]);
			if(j<col-1)
			{
				printf("|");
			}			
		}
		printf("\n");
		if(i<row-1)
		{
//		    printf("---|---|---\n");
		    for(j=0;j<col;j++)
		    {
		    	printf("---");
		    	if(j<col-1)
		    	{
		    		printf("|");
		    	}
		    }
		}
		printf("\n");
	}
	
}
void playermove(char board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	printf("玩家走:>\n");
	while(1)
	{
			printf("请输入你走的坐标:>\n");
	        scanf("%d%d",&x,&y);
        	if(x>=1&&x<=row&&y>=0&&y<=col)
        	{
          		if(board[x-1][y-1]!='*'&&board[x-1][y-1]!='#')
				  {
				  	board[x-1][y-1]='*';
				  	break;
				  } 
          		else
          		{
          			printf("此坐标已被走过,请重新选择\n");
          		}		        
	        }
	        else
	        {
		    printf("输入坐标超过范围，请重新输入\n");
            }
   	}	
}
void computermove(char board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	printf("电脑走:>\n");
	while(1)
	{
			x=rand()%row;
			y=rand()%col;
//	        if(x>=0&&x<=row&&y>=0&&y<=col)
//	       {
        		if(board[x][y]!='*'&&board[x][y]!='#')
	        	{
		        	board[x][y]='#';
		        	break;
		        }
//	       }
	}	
}
int boardfull(char board[ROW][COL],int row,int col)
{
	int i=0;
	int j=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(board[i][j]==' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char is_win(char board[ROW][COL],int row,int col)
{
	int i=0;
	int j=0;
	int ret=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(board[i][0]==board[i][j]&&board[i][0]!=' ')
			{
				continue ;
			}
			else
			{
				break;
			}
		}
		if(j==col)
		{
			return board[i][0];			
		}
//		if(board[i][col]==board[i][1]&&board[i][1]==board[i][2]&&board[i][0]!=' ')
//		{
//			return board[i][0];		
//		}		
	}
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			if(board[0][i]==board[j][i]&&board[0][i]!=' ')
			{
				continue ;
			}
			else
			{
				break;
			}
		}
		if(j==row)
		{
			return board[0][i];			
		}
//		if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[0][i]!=' ')
//		{
//			return board[0][i];
//		}
	}
//	if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[0][0]!=' '||board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[0][2]!=' ')
//	{
//	      	return board[1][1];
//	}
	for(i=0;i<row;i++)
	{
		if(board[0][0]==board[i][i]&&board[0][0]!=' ')
		{
			continue ;
		}
		else
		{
			break;
		}		
	}
	if(i==row)
	{
		return board[0][0];
	}
	for(i=0;i<row;i++)
	{		
		if(	board[0][row-1]==board[i][row-1-i]&&board[0][row-1]!=' ')
		{
			continue ;
		}
		else
		{
			break;
		}	
	}
	if(i==row)
	{
		return board[0][row-1];
	}                              
	if(boardfull(board,ROW,COL)==1)//走到这一步，目前无人赢，判断是否棋盘满了，若满了则是平局，否则继续。 
	{
		return 'd';
	}	
	return 'c'; 
}
void game ()
{
	char ret=0;
	srand((unsigned int)time(NULL));
	char board[ROW][COL]={0};
	initboard(board,ROW,COL);
	display(board,ROW,COL);
	while(1)
	{
		//玩家走 
		playermove(board,ROW,COL);	
	    display(board,ROW,COL);	
	    //判断 	    
	    //*————玩家赢
		//#————电脑赢
		//Continue————继续
		//draw————平局 
		ret=is_win(board,ROW,COL);
		if(ret!='c')
		    break;		
	    //电脑走 
	    computermove(board,ROW,COL);
	    display(board,ROW,COL);
	    ret=is_win(board,ROW,COL);
	    if(ret!='c')
		    break;
	}
	if(ret=='*')
	{
		printf("玩家赢\n");
	}
	else if(ret=='#')
	{
		printf("电脑赢\n"); 
	}
	else if(ret=='d')
	{
		printf("平局\n");
	}	
}
void test()
{
	int input=0;
	do
	{
		menu();
	    printf("请选择你要玩的游戏:>\n");
	    scanf("%d",&input);
	    switch(input) 
		{
			case 1:
				game();
				break; 
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("输入错误，请重新输入\n");
				break;
		}
	}
	while(input);
}
int main()
{
	test();
	return 0;
} 
////扫雷小游戏 
//#include <stdio.h>
//#include <string.h>
//#include <time.h>
//#include <stdlib.h> 
//#define ROW 9
//#define COL 9
//#define ROWS (ROW+2)
//#define COLS (COL+2)
//#define count 80 
//void menu()
//{
//	printf("*****************\n");
//	printf("**** 1、Play ****\n");
//	printf("**** 0、Exit ****\n");
//	printf("*****************\n");	 
//}
//void Initboard(char board[ROWS][COLS],int rows,int cols,char set)
//{
////	int i=0;
////	int j=0;
////	for(i=0;i<rows;i++)
////	{
////		for(j=0;j<cols;j++)
////		{
////			board[i][j]==set;
////		}
////	}
//    memset(board,set,rows*cols*sizeof(board[0][0]));
//}
//void Display(char board[ROWS][COLS],int row,int col)
//{
//	int i=0;
//	int j=0;
//	for(i=0;i<=col;i++)
//	{
//		printf("---");
//	}
//	printf("\n");
//	for(i=0;i<=row;i++)
//	{
//		if(0==i)
//		{
//			printf(" %d |",0);
//		}
//		else
//		{
//			printf(" %d ",i);
//		}
//	}
//	printf("\n");
//	for(i=0;i<=col;i++)
//	{
//		printf("---");
//	}
//	printf("\n");
//	for(i=1;i<=row;i++)
//	{
//		printf(" %d |",i);
//		for(j=1;j<=col;j++)
//		{
//			printf(" %c ",board[i][j]);
//		}
//		printf("\n");
//	}
//}
//void Setmine(char mine[ROWS][COLS],int row,int col)
//{
//	int num=count;
//	while(num)
//	{
//		int x=rand()%row+1;
//	    int y=rand()%col+1;
//     	if(mine[x][y]=='0')
//     	{
//     		mine[x][y]='1'; 
//     		num--;
//     	}
//	}
//}
//int Calculate(char mine[ROWS][COLS],int x,int y)
//{
//	return mine[x-1][y]+mine[x-1][y-1]+mine[x][y-1]+mine[x+1][y-1]+mine[x+1][y]+mine[x+1][y+1]+mine[x][y+1]+mine[x-1][y+1] - 8*'0';	
//}
//int Iswin(char show[ROWS][COLS],int row,int col)//判断输赢(第一种) 
//{
//	int i=0;
//	int j=0;
//	int num=0; 
//	for(i=1;i<=row;i++)
//	{
//		for(j=1;j<=col;j++)
//		{
//			if(show[i][j]=='*')
//			{
//				num++;
//			}
//			if(num>count)
//			{
//				break;
//			}			
//		}	
//	}
//	if(count==num)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//void Exploitaround(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col,int x,int y)
//{//展开雷区一片 
//	int i=-1;//-1 0 1
//    int j=-1;//-1 0 1 
//	if('0'+Calculate(mine,x,y)=='0')
//    {
////    	show[x][y] = ' ';
////    	if(x-1>=1&&y>=1&&show[x-1][y]=='*')
////    	{
////    		Exploitaround(mine,show,row,col,x-1,y);
////		}
////		if(x-1>=1&&y-1>=1&&show[x-1][y-1]=='*')
////    	{
////    		Exploitaround(mine,show,row,col,x-1,y-1);
////		}
////		if(x>=1&&y-1>=1&&show[x][y-1]=='*')
////    	{
////    		Exploitaround(mine,show,row,col,x,y-1);
////		}
////		if(x+1<=row&&y-1>=1&&show[x+1][y-1]=='*')
////    	{
////    		Exploitaround(mine,show,row,col,x+1,y-1);
////		}
////		if(x+1<=row&&y>=1&&show[x+1][y]=='*')
////    	{
////    		Exploitaround(mine,show,row,col,x+1,y);
////		}
////		if(x+1<=row&&y+1<=col&&show[x+1][y+1]=='*')
////    	{
////    		Exploitaround(mine,show,row,col,x+1,y+1);
////		}
////		if(x>=1&&y+1<=col&&show[x][y+1]=='*')
////    	{
////    		Exploitaround(mine,show,row,col,x,y+1);
////		}
////		if(x-1>=1&&y+1<=col&&show[x-1][y+1]=='*')
////    	{
////    		Exploitaround(mine,show,row,col,x-1,y+1);
////		}  
//        show[x][y]=' ';
//        for(i=-1;i<=1;i++)
//        {
//            for(j=-1;j<=1;j++)
//            {
////                if(i==0&&j==0)
////                {
////                	continue;
////                }
////                else
////                {
////                	if(x+i>=1&&x+i<=row&&y+j>=1&&y+j<=col&&show[x+i][y+j]=='*')
////                	{
////                		Exploitaround(mine,show,row,col,x+i,y+j);
////					}
////				}	
//                  if(i!=0||j!=0)
//                {
//                	if(x+i>=1&&x+i<=row&&y+j>=1&&y+j<=col&&show[x+i][y+j]=='*')
//                	{
//                		Exploitaround(mine,show,row,col,x+i,y+j);
//					}
//				}				
//			}
//		}
//	}
//	else
//    {
//		show[x][y]='0'+Calculate(mine,x,y);
//	}  
//}
//void Findmine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
//{
//	int x=0;
//	int y=0;
//	int m=0;//走的步数 
//	while(1)
//	{
//		printf("请输入你要排除的坐标:>\n");
//     	scanf("%d%d",&x,&y);
//     	m++;
//	    if(x>=1&&x<=row&&y>=1&&y<=col)
//	    {
//	    	if(mine[x][y]=='1')
//	    	{
//	    		printf("恭喜你，你被炸死了！\n");
//	    		printf("你总共走了%d步!\n",m);
//	    		printf("(1代表的是雷，0代表的是没有雷)\n");
//	    		Display(mine,ROW,COL);
//	    		break;
//	    	}
//	    	else
//	    	{
//	    		Exploitaround(mine,show,row,col,x,y);
//	    		Display(show,ROW,COL); 	   
//	    	}
//	    }
//	    else
//	    {
//	    	printf("输入坐标错误，请重新输入！\n");
//	    }
//	    if(Iswin(show,ROW,COL)==1)//判断输赢，调用函数（第1种） 
//	    {
//	    	printf("恭喜你，你赢了！\n");
//	    	printf("你总共走了%d步!\n",m);
//	    	printf("(1代表的是雷，0代表的是没有雷)\n");
//	    	Display(mine,ROW,COL);
//	    	break;
//	    }
//    }
//}
//void game ()
//{
//	srand((unsigned int)time(NULL));
//	char mine[ROWS][COLS]={0};
//	char show[ROWS][COLS]={0};
//	//初始化棋盘 
//	Initboard(mine,ROWS,COLS,'0');
//	Initboard(show,ROWS,COLS,'*');
//	//布雷
//	Setmine(mine,ROW,COL); 
//	//打印棋盘
//	Display(mine,ROW,COL);
//	Display(show,ROW,COL);
//	//扫雷
//	Findmine(mine,show,ROW,COL);	
//}
//void test()
//{
//	int input=0;
//	do
//	{
//		menu();
//    	printf("请选择你要玩的游戏:>\n");
//	    scanf("%d",&input);
//	    switch(input)
//	    {
//	    	case 1:
//	    		game();
//	    		break;
//	    	case 0:
//	    		printf("退出游戏\n");
//			    break;
//			default :
//			    printf("输入错误，请重新输入！\n");
//				break;		
//	    }
//	}
//	while(input);
//}
//int main()
//{
//    test();
//	return 0;
//} 
//实现一个小程序，判断当前计算机存储是小端，还是大端 
//#include <stdio.h>
//int check_sys()
//{
//	int i=1;
//	return *(char*)&i;
////	int i=1;//
////	char* p=(char*)&i;
////	if(*p!=0)
////		return 1;
////	else
////	    return 0;
//}
//int main()
//{
//	if(1==check_sys())
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}
//实现reverse()函数完成数组元素的逆置


























































  
  
  
   
   
   
  
