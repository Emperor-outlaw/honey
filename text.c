/*#include <stdio.h>
int main()
{
	 printf("\a\a\a\a\a"); 
	 return 0;
}*/
/*����˷��ھ���*/ 
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
  /*�ж�100~200֮�������*/ 
  /*#include <stdio.h>
  int main ()
  {
  	 int i,j;
  	 int count=0;
	 for(i=100;i<=200;i++) ����for(i=101;i<=200;i+=2) 
	 {
	 	for(j=2;j<i;j++)  ����for(j=2;j<sqrt(i);j++),��ͷ�ļ�#include<math.h> 
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
  /*�ж�����ķ�����
  1���ܱ�4�������ܱ�100����
  2���ܱ�400����
    �������ַ���*/ 
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
  if ((year%4==0��&&��year%100!=0)||(year%400==0))
  {
  printf("%d ",year);
  count++;
  }
}
  printf("\ncount=%d",count);
  return 0;
}*/
/*�ж�һ�����Ƿ�Ϊ����*/ 
 /*#include <stdio.h>
 int main ()
 {
 	int i=0;
 	int j;
 	printf("������һ����\n");
 	scanf("%d",&j);
 	for (i=1;i<=j;i+=2)
 	{
 		if (i== j)
 		{
 		    printf ("j������");
 			break;
 		}
 	}
 	if(i!=j)
 	printf  ("j��������"); 
 	return 0;
 } */
 /*���1~100֮�������*/  
 /*#include <stdio.h> //���������һ�ַ���
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
 /*#include <stdio.h> //��������ڶ��ַ��� 
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
// #include <stdio.h>//�����������Сд��ĸ���Ϊ��Ӧ�Ĵ�д��ĸ 
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
//#include <stdio.h>//����һ����ʱ���������������Ľ��� 
//int main()
//{
//	int i,j,temp;
//	printf("������������\n");
//	scanf("%d%d",&i,&j);
//	printf("i=%d j=%d\n",i,j);
//	temp=i;
//	i=j;
//	j=temp;
//	printf("i=%d j=%d\n",i,j);	
//	return 0;
//}
//#include <stdio.h>//��������ʱ���������������Ľ��� 
//int main()
//{
//	int i,j;
//	printf("������������\n");
//	scanf("%d%d",&i,&j);
//	printf("i=%d j=%d\n",i,j);//�ӷ����� 
//	i=i+j;
//	j=i-j;
//	i=i-j;
//	printf("i=%d j=%d\n",i,j);	
//	return 0;
//}
//#include <stdio.h>//��λ��򽻻� 
//int main()
//{
//	int mum1=3;                  //011��mum1	
//	int mum2=5;                  //101��mum2 
//	printf("mum1=%d mum2=%d\n",mum1,mum2); //110����λ���Ľ�� 
//	mum1=mum1^mum2;
//	mum2=mum1^mum2;
//	mum1=mum1^mum2;
//	printf("mum1=%d mum2=%d\n",mum1,mum2);
//	return 0;	
//}
//�����Լ��
//#include <stdio.h>
//int main()
//{
//	int a=18;                    //int a =18; 
//	int b=24;                    //int b=24;
//	while(a%b)//a��b��˳������ν //int c=0;
//	{                            //while(c=a%b)
//		int c;                   // {a=b;b=c;} 
//		c=a%b;                   //printf()
//		a=b;
//		b=c;		
//	}
//	printf("%d",b);
//	return 0;
//} 
//����С������
//a��b����ٳ���a��b�����Լ�� 
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
//��ʮ�����������ֵ
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
//���������Ӵ�С����
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
//��ʮ�����Ӵ�С���� 
//#include <stdio.h>//�㷨1 
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
//��һ�����Ľ׳� 
//#include <stdio.h>
//int main()
//{
//	int n=0;
//	int i=0;
//	int ret=1;
//	printf("������һ����\n");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++)
//	{
//		
//		ret *=i;		
//	}
//	printf("%d\n",ret);
//	return 0;	
//} 
//1!+2!+3!+4!�Ľ׳� 
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
//��һ�����������в��Ҿ����ĳ������n����дint binsearch(int x,intv[],int n);���ܣ���v[0]<=v[1]<=[2]<=[3]...<=[n-1]�������в���x. 
//#include <stdio.h>//�۰���ҷ������ַ� 
//int main()
//{
//	int arr[]={0,1,2,3,4,5,6,7,8,9};
//	int n=9;
//	int left=0;//��� 
//	int right=sizeof(arr)/sizeof(arr[0])-1;//�ұ�
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
//		printf("�ҵ��ˣ�%d",mid);
//		break;
//	}
//	}
//	if (left>right)	
//	printf("�Ҳ���%d");
//	return 0;
//}
//��ʾ����ַ��������ƶ������м��ƶ�
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
//	int sz=strlen(arr1); //srtlen����#include<string.h> 
//	int left=0;
//	int right=sz-1;
//	while(left<=right)
//	{
//		arr2[left]=arr1[left];
//	    arr2[right]=arr1[right];
//	    printf("%s\n",arr2);
//	    Sleep(100);      //����ͷ�ļ�#include<windows.h> 
//	     system("cls");  //����#iclude <stdlib.h>	   
//	    left++;
//	    right--;
//	}	
//	return 0;	
//}
//��д����ʵ��,ģ���û���½�龰,����ֻ�ܵ�½����,������ξ��������,���˳�����. 
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int i=0;
//	char password[20]={0};
//	printf("����������λ���������ȷ����\n\n");
//	for(i=1;i<=3;i++)
//	{
//		printf("��%d������,����������:> ",i);
//		scanf("%s",password);
//		if(strcmp(password,"123456")==0)//�����ַ����ȽϺ���,�����ȷ���ֵΪ0,����ͷ�ļ�#include<string.h> 
//		{
//			printf("��½�ɹ�");
//			break;
//		}
//		else
//		{
//			printf("������󣬵�½ʧ�ܵ�%d��\n\n",i); 
//		}
//	}
//	if(4==i)
//	{
//		printf("��ϲ������ȫ����½ʧ�ܣ���Ե�ټ�");
//	}	
//	return 0;
//}
//ǰ�����������ϣ����ܣ�����������ȷ�󲥷�һ��Ч�� 
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//int main()
//{
//	int i=0;
//	char password[20]={0};
//	printf("����������λ���������ȷ����\n\n");
//	for(i=1;i<=3;i++)
//	{
//		printf("��%d������,����������:> ",i);
//		scanf("%s",password);
//		if(strcmp(password,"123456")==0)
//		{
//			printf("��½�ɹ�");
//			printf("������5��󲥷�Ч��,Wait a moment\n");
//			//system("pause");  //��ͣ���� 
//			Sleep(5000);
//			char arr1[]="In the future,my name is Changan,and you call it your hometown,because Changan returns to your hometown,and there is Changan in your hometown.";
//	        char arr2[]="                                                                                                                                              ";
//	        int sz=strlen(arr1); //srtlen����#include<string.h> 
//	        int left=0;
//	        int right=sz-1;
//	        while(left<=right)
//	       {
//	         	arr2[left]=arr1[left];
//	            arr2[right]=arr1[right];
//	            printf("%s\n",arr2);
//	            Sleep(100);      //����ͷ�ļ�#include<windows.h> 
//	            system("cls");  //����#iclude <stdlib.h>	   
//	            left++;
//	            right--;
//       	   }	
//			break;
//		}
//		else
//		{
//			printf("������󣬵�½ʧ�ܵ�%d��\n\n",i); 
//		}
//	}
//	if(4==i)
//	{
//		printf("��ϲ������ȫ����½ʧ�ܣ���Ե�ټ�");
//	}	
//	return 0;
//}
//////�ػ����� 
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[20]={0};
//	system("shutdown -s -t 60");//��shutdown _s _t 60���ػ����60�ǹػ�ʱ�䵹��ʱ 
//	while(1)
//	{
//		printf("��ע����ĵ���Ҫ��1minute�ڹػ��������������һͷ�������ȡ���ػ�\n");
//		printf(":>");
//		scanf("%s",input);
//		if(strcmp(input,"����һͷ������")==0)
//		{
//			system("down -a");//������ػ���� 
//			break;
//		}
//	}	
//	return 0;
//}
//��������Ϸ 
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
//	//1,����һ�������
//    //time()������ȡ��ǰ���Ե�ʱ�䣬ͷ�ļ�#include<time.h> 
//    ret=rand()%100+1;
//	//rand()��ȡһ��������ĺ���,ͷ�ļ�#include<stdlib.h> 
//	//printf("   %d\n",ret);	
//	//2,������
//	while(1)
//	{
//  	    printf("��������µ�����:> ");
//	    scanf("%d",&num);	    
//        if(num<ret)
//	    {
//		    printf("���С��\n");
//	    }
//	    else if(num>ret)
//	    {
//		    printf("��´���\n");
//	    }
//	    else
//	    {
//	     	printf("��ϲ�㣬��¶���\n\n");
//		    break;
//     	}
//    }
//}
//int main()
//{
//	int input=0;
//	do
//	{
//		srand((unsigned int)time(NULL));//srand������������������ĳ�ʼ������
//		menu();
//		printf("\n��������Ҫ�����Ϸ���:>  ");
//	    scanf("%d",&input);
//	    switch(input)
//	   {
//		case 1:
//		    game();
//		    break;
//		case 0:
//		    printf("�˳���Ϸ\n");
//	     	break;
//	   	default:
//		    printf("�������,��������:>\n");
//		    break;
//	   }
//	}while(input);
//return 0;
//}
//������A��������ݺ�����B��������ݽ���������һ���� 
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
//���1/1-1/2+1/3-1/4...-1/100 
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
//��1~100֮�������9�ĸ��� 
//#include <stdio.h>
//int main()
//{
//	int count=0;
//	int i=0;
//	for (i=1;i<=100;i++)
//	{
//		if (9==i%10)//���λ��9�ĸ���,ȡ�� 
//			count++;
//	   if (9==i/10)//��ʮλ��9�ĸ�����ȡ��
//	        count++;//������else��ע��99��,��99if ��elseֻ�ܽ�һ�� 
//	}
//	printf("%d",count); 
//	return 0; 
//}
//�����ĵ��ã���һ�����ǲ������� 
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
//	return 1;//������ 
//}//��˼�룩TDD�������������� 
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
//��������,�������������ֵ
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
//�������ã������������н��� 
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
//���ú���,�ö��ַ� ʵ��һ��������������Ĳ��� 
//#include <stdio.h>
//int binary_search(int arr[],int k,int n)
//{
//	int left=0;
//	int right=n;
//	while(left<=right)
//	{ //int mid=(left+right)/2 
//		int mid=left+(right-left)/2;//�µ���ͷ��� 
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
//		printf("�Ҳ���\n");
//	}
//	else 
//	{
//		printf("�ҵ���,�±�ʶ%d\n",ret);
//	} 
//	return 0;
//}
//дһ������,ÿ����һ���������,�ͽ�sumֵ��һ 
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
//��ӡ 
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
//	printf("����������\n");//7 
//	scanf("%d",&line);
//	int i=0;
//	for(i=0;i<line;i++)
//	{
//		int j=0;
//		for(j=0;j<line-1-i;j++)//�ȴ�ӡ�ո�
//		{
//			printf(" ");
//		}
//		for(j=0;j<2*i+1;j++)//�ٴ�ӡ*��
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
//��дһ�������������������ˮ�ɻ����������ͨʽ�� 
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i=0;
//	for(i=1;i<=100000;i++)
//	{
//		int temp=i;//1����λ��
//		int count=0;
//	    while(temp)
//	    {
//	    	temp/=10;
//	    	count++;	    	
//	    }
//		double sum=0;//2����ÿλ���ֵĴη���
//		temp=i; 
//	    while(temp)//C++pow����ֵΪdouble��Ӧ����sumΪdouble ����c�п�Ϊint 
//	    {
//	    	sum+=pow(temp%10,count);//��η�����pow������ͷ�ļ�math.h 
//	    	temp/=10;
//	    }
//	    if (sum==i)//3���ж��Ƿ�Ϊˮ�ɻ��� 
//	    {
//	    	printf("%d ",i);
//	    }
//	} 
//	return 0;
//}
//Sn=a+aa+aaa+aaaa+aaaaa  ��n�������ĺͣ�����a������ 
//���磺2+22+222+2222+22222 ���� 5��2�ĺ� 
//#include <stdio.h>
//int main ()
//{
//	int a=0;
//	int n=0;
//	printf("����������a������n\n");
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
//��дһ�����򣬿���һֱ���ռ����ַ���
//���������Сд�ַ��������д�ַ�����������Ǵ�д�ַ������Сд�ַ� 
//����������ַ��Ͳ���� 
//��1�ַ�������if���(�ж�������ַ�)
//#include <stdio.h>//�����������Сд��ĸ���Ϊ��Ӧ�Ĵ�д��ĸ 
// int main()
// {
// 	    int ch=0;
//      printf("����������ϵ������\n");
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
//			continue;//Ҳ�����ǿ���� 
//		}
//		else
//		{
//			putchar(ch);
//		}	 	    
// 	}
//    return 0;
// } 
////////////#include <stdio.h>//�����������Сд��ĸ���Ϊ��Ӧ�Ĵ�д��ĸ
////////////#include <ctype.h>
////////////#include <stdlib.h>
//////////// int main()
//////////// {
//////////// 	  int ch=0;
////////////      printf("����������ϵ������\n");
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
////////////			continue;//Ҳ�����ǿ���� 
////////////		}
////////////		else
////////////		{
////////////			putchar(ch);
////////////		}	 	    
//////////// 	}
////////////    return 0;
//////////// }
//�����ĵݹ���ã���1234ѭ���ӡ����Ļ��1 2 3 4 
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
//1����д����,���ַ����ĳ���
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
//2����д����������������ʱ���������ַ����ĳ��ȣ��ݹ���ã� 
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
//�ݹ���ã���n�Ľ׳�
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
//�ݹ���ã����n��쳲�������������������� 
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
//#include <stdio.h>//���ú�����ѭ����ʵ�����n��쳲�������������������� 
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
//��ŵ����Ϸ(�ݹ�)
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
//	printf("�����뺺ŵ���Ĳ���\n");
//	scanf("%d",&n);
//	move_tower(n,'A','B','C');	
//	return 0;
//} 
//������̨�ף��ݹ飩
//1����n��̨��һ�ο�����1�ף�Ҳ������2�ף����ж���������(������쳲�������)
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
//	printf("������̨�׵ĸ���\n");
//	scanf("%d",&n);
//	ret=leapfrog(n);
//	printf("%d ",ret);
//	return 0;
//}
//1����n��̨��һ�ο�����1�ף�Ҳ������2��....Ҳ������n�ף����ж���������(������쳲�������)
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
//	printf("������̨����\n");
//	scanf("%d",&n);
//	ret=leapfrog(n);
//	printf("%d",ret);	
//	return 0;
//}
//��ð�ݷ������ɴ�С�� 
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
//ʵ��һ����������ӡ�˷��ھ����ھ�������������Լ��� 
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
//	printf("���������ӡ�ļ��˼��˷���\n");
//	scanf("%d",&n);
//	bill(n);	
//	return 0;
//}
//ʹ�ú���ʵ���������Ľ���
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
//ʵ��һ�������ж�year�ǲ�������
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
//		printf("������\n");
//	}
//	else
//	printf("������\n");	
//	return 0;
//} 
//ʵ��һ�������ж��ǲ�������
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
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n"); 
//	}
//	return 0;
//} 
//������С��Ϸ 
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#define ROW 3//���̵����� 
#define COL 3//���̵����� 
void menu()
{
	
	printf("*****************\n");
	printf("**** 1��Play ****\n");
	printf("**** 0��Exit ****\n");
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
	printf("�����:>\n");
	while(1)
	{
			printf("���������ߵ�����:>\n");
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
          			printf("�������ѱ��߹�,������ѡ��\n");
          		}		        
	        }
	        else
	        {
		    printf("�������곬����Χ������������\n");
            }
   	}	
}
void computermove(char board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	printf("������:>\n");
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
	if(boardfull(board,ROW,COL)==1)//�ߵ���һ����Ŀǰ����Ӯ���ж��Ƿ��������ˣ�����������ƽ�֣���������� 
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
		//����� 
		playermove(board,ROW,COL);	
	    display(board,ROW,COL);	
	    //�ж� 	    
	    //*�����������Ӯ
		//#������������Ӯ
		//Continue������������
		//draw��������ƽ�� 
		ret=is_win(board,ROW,COL);
		if(ret!='c')
		    break;		
	    //������ 
	    computermove(board,ROW,COL);
	    display(board,ROW,COL);
	    ret=is_win(board,ROW,COL);
	    if(ret!='c')
		    break;
	}
	if(ret=='*')
	{
		printf("���Ӯ\n");
	}
	else if(ret=='#')
	{
		printf("����Ӯ\n"); 
	}
	else if(ret=='d')
	{
		printf("ƽ��\n");
	}	
}
void test()
{
	int input=0;
	do
	{
		menu();
	    printf("��ѡ����Ҫ�����Ϸ:>\n");
	    scanf("%d",&input);
	    switch(input) 
		{
			case 1:
				game();
				break; 
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("�����������������\n");
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
////ɨ��С��Ϸ 
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
//	printf("**** 1��Play ****\n");
//	printf("**** 0��Exit ****\n");
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
//int Iswin(char show[ROWS][COLS],int row,int col)//�ж���Ӯ(��һ��) 
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
//{//չ������һƬ 
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
//	int m=0;//�ߵĲ��� 
//	while(1)
//	{
//		printf("��������Ҫ�ų�������:>\n");
//     	scanf("%d%d",&x,&y);
//     	m++;
//	    if(x>=1&&x<=row&&y>=1&&y<=col)
//	    {
//	    	if(mine[x][y]=='1')
//	    	{
//	    		printf("��ϲ�㣬�㱻ը���ˣ�\n");
//	    		printf("���ܹ�����%d��!\n",m);
//	    		printf("(1��������ף�0�������û����)\n");
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
//	    	printf("��������������������룡\n");
//	    }
//	    if(Iswin(show,ROW,COL)==1)//�ж���Ӯ�����ú�������1�֣� 
//	    {
//	    	printf("��ϲ�㣬��Ӯ�ˣ�\n");
//	    	printf("���ܹ�����%d��!\n",m);
//	    	printf("(1��������ף�0�������û����)\n");
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
//	//��ʼ������ 
//	Initboard(mine,ROWS,COLS,'0');
//	Initboard(show,ROWS,COLS,'*');
//	//����
//	Setmine(mine,ROW,COL); 
//	//��ӡ����
//	Display(mine,ROW,COL);
//	Display(show,ROW,COL);
//	//ɨ��
//	Findmine(mine,show,ROW,COL);	
//}
//void test()
//{
//	int input=0;
//	do
//	{
//		menu();
//    	printf("��ѡ����Ҫ�����Ϸ:>\n");
//	    scanf("%d",&input);
//	    switch(input)
//	    {
//	    	case 1:
//	    		game();
//	    		break;
//	    	case 0:
//	    		printf("�˳���Ϸ\n");
//			    break;
//			default :
//			    printf("����������������룡\n");
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
//ʵ��һ��С�����жϵ�ǰ������洢��С�ˣ����Ǵ�� 
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
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}
//ʵ��reverse()�����������Ԫ�ص�����


























































  
  
  
   
   
   
  
