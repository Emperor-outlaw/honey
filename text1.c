//////////#include <stdio.h>
//////////#include <string.h>
//////////#include <windows.h>
//////////#include <stdlib.h>
//////////int main()
//////////{
//////////	char arr1[]="In the future,my name is Changan,and you call it your hometown,because Changan returns to your hometown,and there is Changan in your hometown.";
//////////	char arr2[]="                                                                                                                                              ";
//////////	int sz=strlen(arr1);
//////////	int left=0;
//////////	int right=sz-1;
//////////	while(left<=right)
//////////	{
//////////		arr2[left]=arr1[left];
//////////	    arr2[right]=arr1[right];
//////////	    printf("%s\n",arr2);
//////////	    Sleep(100);
//////////	     system("cls");	   
//////////	    left++;
//////////	    right--;
//////////	}	
//////////	return 0;
//////////	
//////////}
//////////#include <stdio.h>
//////////#include <string.h>
//////////int main()
//////////{
//////////	int i=0;
//////////	char password[20]={0};
//////////	printf("����������λ���������ȷ����\n\n");
//////////	for(i=1;i<=3;i++)
//////////	{
//////////		printf("��%d������,����������:> ",i);
//////////		scanf("%s",password);
//////////		if(strcmp(password,"123456")==0)
//////////		{
//////////			printf("��½�ɹ�");
//////////			break;
//////////		}
//////////		else
//////////		{
//////////			printf("������󣬵�½ʧ�ܵ�%d��\n\n",i); 
//////////		}
//////////	}
//////////	if(4==i)
//////////	{
//////////		printf("��ϲ������ȫ����½ʧ�ܣ���Ե�ټ�");
//////////	}	
//////////	return 0;
//////////}
////////#include <stdio.h>
////////#include <stdlib.h>
////////#include <windows.h>
////////#include <string.h>
////////#include <time.h>
////////void NJ()
////////{   int i=0;
////////	char password[20]={0};
////////	printf("����������λ���������ȷ����ſ��Կ���short video effect\n\n");
////////	for(i=1;i<=3;i++)
////////	{
////////		printf("��%d������,����������:> ",i);
////////		scanf("%s",password);
////////		if(strcmp(password,"123456")==0)
////////		{
////////			printf("��½�ɹ�");
////////			printf("������5��󲥷�Ч��,Wait a moment\n");
////////			//system("pause");  //��ͣ���� 
////////			Sleep(5000);
////////			char arr1[]="In the future,my name is Changan,and you call it your hometown,because Changan returns to your hometown,and there is Changan in your hometown.";
////////	        char arr2[]="                                                                                                                                              ";
////////	        int sz=strlen(arr1); //srtlen����#include<string.h> 
////////	        int left=0;
////////	        int right=sz-1;
////////	        while(left<=right)
////////	       {
////////	         	arr2[left]=arr1[left];
////////	            arr2[right]=arr1[right];
////////	            printf("%s\n",arr2);
////////	            Sleep(100);      //����ͷ�ļ�#include<windows.h> 
////////	            //system("cls");  //����#iclude <stdlib.h>	   
////////	            left++;
////////	            right--;
////////       	   }	
////////			break;
////////		}
////////		else
////////		{
////////			printf("������󣬵�½ʧ�ܵ�%d��\n\n",i); 
////////		}
////////	}
////////	if(4==i)
////////	{
////////		printf("��ϲ������ȫ����½ʧ�ܣ���Ե�ټ�\n");
////////	}	
////////}
////////void menu()
////////{ 
////////	printf("***3.inter passworrd to look video***\n");
////////	printf("***      2.��һ�����Ľ׳�         ***\n");
////////	printf("***          1. play              ***\n");
////////	printf("***          0. exit              ***\n");
////////	printf("*************************************\n");
////////	printf("*************************************\n");
////////	
////////}
////////void game()
////////{
////////	int ret=0;
////////	int num=0;	
////////    ret=rand()%100+1;
////////	while(1)
////////	{
////////  	    printf("��������µ�����:> ");
////////	    scanf("%d",&num);	    
////////        if(num<ret)
////////	    {
////////		    printf("���С��\n");
////////	    }
////////	    else if(num>ret)
////////	    {
////////		    printf("��´���\n");
////////	    }
////////	    else
////////	    {
////////	     	printf("��ϲ�㣬��¶���\n\n");
////////		    break;
////////     	}
////////    }
////////}
////////int main()
////////{
////////	int input=0;
////////	do
////////	{
////////		srand((unsigned int)time(NULL));
////////		menu();
////////		printf("\n��������Ҫ�����Ϸ���:>  ");
////////	    scanf("%d",&input);
////////	    switch(input)
////////	   {
////////	   	case 3:
////////	   		NJ();
////////	   		break;
////////		case 2:
////////		{
////////	int n=0;
////////	int i=0;
////////	int ret=1;
////////	printf("������һ����\n");
////////	printf("�����������������Ľ׳�\n");
////////	scanf("%d",&n);
////////	for (i=1;i<=n;i++)
////////	{
////////		
////////		ret *=i;		
////////	}
////////	printf("%d\n",ret);
////////    }
////////	break; 	   		
////////		case 1:
////////		    game();
////////		    break;
////////		case 0:
////////		    printf("�˳���Ϸ\n");
////////	     	break;
////////	   	default:
////////		    printf("�������,��������:>\n");
////////		    break;
////////	   }
////////	}while(input);
////////return 0;
////////}
////////#include <stdio.h>//���ú�����ѭ����ʵ�����n��쳲�������������������� 
////////int Fib(int n)
////////{
////////    int a=1;                 //	if (n<=2)
////////    int b=1;                 //	{
////////    int c=1;                 //		return 1;
////////    while(n>2)               //	}
////////   {   	                   //	else
////////	    c=a+b;                 //	{
////////	    a=b;                   //		int i=0; 
////////	    b=c;                   //	    int a=1;
////////	    n--;	               //		int b=1;
////////   }                         //		int c=0;
////////   return c;                 //		for(i=0;i<n-2;i++)
////////}                            //		{
////////int main()                   //			c=a+b;
////////{                            //			a=b;
////////	int ret=0;                 //			b=c;
////////	int n=0;                   //		}
////////	scanf("%d",&n);            //		return c;
////////	ret=Fib(n);                //	}
////////	printf("%d",ret);	
////////	return 0;
////////}
////////#include <stdio.h>
////////void move(int n,int* arrx,int* arry,int* arrz)
////////{
////////	if(n=1)
////////	{
////////		arrz[n]=arrx[n];
////////	}
////////	else if(n=2)
////////	{
////////		arry[1]=arrz[0];
////////		arrz[1]=arrx[1];
////////		arrz[0]=arry[1];
////////	}
////////	else
////////	{
////////		move(n-1,arrx-1,arrz,arry);
////////		arrz[n-1]=arrx[n-1];
////////	}
////////}
////////int main()
////////{
////////	int arrx[]={1,2,3,4,5,6,7};
////////	int arry[]={0};
////////	int arrz[]={0};
////////	int n=7;
////////	move (n,arrx,arry,arrz);
////////	int i=0;
////////	for(i=0;i<7;i++)
////////	printf("%d ",arrz[i]);
////////	return 0;	
////////} 
////////#include <stdio.h>
////////void moveii(int *arr)
////////{
////////	//arr[3]=8;
////////	*(arr+1)=8;
////////}
////////int main()
////////{
////////	int i=0;
////////	int j=0;
////////	int arr[5]={0};
////////	moveii(arr);
////////	for(i=0;i<5;i++)
////////	{
////////		printf("%d",arr[i]);
////////	}
////////	
////////	return 0;
////////}
//////#include <stdio.h>
//////#include <string.h>
//////#include <time.h>
//////#include <stdlib.h>
//////#define ROW 3
//////#define COL 3
//////void menu()
//////{
//////	
//////	printf("*****************\n");
//////	printf("**** 1��Play ****\n");
//////	printf("**** 0��Exit ****\n");
//////	printf("*****************\n");	 
//////}
//////void initboard(char board[ROW][COL],int row,int col)
//////{
////////	int i=0;
////////	int j=0;
////////	for(i=0;i<ROW;i++)
////////	{
////////		for(j=0;j<COL;j++)
////////		{
////////			board[i][j]==' ';
////////		}
////////	}
//////	memset(board,' ',row*col*sizeof(board[0][0]));
//////}
//////void display(char board[ROW][COL],int row,int col)
//////{
//////	int i=0;
//////	int j=0;
//////	for(i=0;i<row;i++)
//////	{
////////		printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
//////		for(j=0;j<col;j++)
//////		{
//////			printf(" %c ",board[i][j]);
//////			if(j<col-1)
//////			{
//////				printf("|");
//////			}			
//////		}
//////		printf("\n");
//////		if(i<row-1)
//////		{
////////		    printf("---|---|---\n");
//////		    for(j=0;j<col;j++)
//////		    {
//////		    	printf("---");
//////		    	if(j<col-1)
//////		    	{
//////		    		printf("|");
//////		    	}
//////		    }
//////		}
//////		printf("\n");
//////	}
//////	
//////}
//////void playermove(char board[ROW][COL],int row,int col)
//////{
//////	int x=0;
//////	int y=0;
//////	printf("�����:>\n");
//////	while(1)
//////	{
//////			printf("���������ߵ�����:>\n");
//////	        scanf("%d%d",&x,&y);
//////        	if(x>=1&&x<=row&&y>=0&&y<=col)
//////        	{
//////          		if(board[x-1][y-1]!='*'&&board[x-1][y-1]!='#')
//////				  {
//////				  	board[x-1][y-1]='*';
//////				  	break;
//////				  } 
//////          		else
//////          		{
//////          			printf("�������ѱ��߹�,������ѡ��\n");
//////          		}		        
//////	        }
//////	        else
//////	        {
//////		    printf("�������곬����Χ������������\n");
//////            }
//////   	}	
//////}
//////void computermove(char board[ROW][COL],int row,int col)
//////{
//////	int x=0;
//////	int y=0;
//////	printf("������:>\n");
//////	while(1)
//////	{
//////			x=rand()%row;
//////			y=rand()%col;
////////	        if(x>=0&&x<=row&&y>=0&&y<=col)
////////	       {
//////        		if(board[x][y]!='*'&&board[x][y]!='#')
//////	        	{
//////		        	board[x][y]='#';
//////		        	break;
//////		        }
////////	       }
//////	}	
//////}
//////int boardfull(char board[ROW][COL],int row,int col)
//////{
//////	int i=0;
//////	int j=0;
//////	for(i=0;i<row;i++)
//////	{
//////		for(j=0;j<col;j++)
//////		{
//////			if(board[i][j]==' ')
//////			{
//////				return 0;
//////			}
//////		}
//////	}
//////	return 1;
//////}
//////char is_win(char board[ROW][COL],int row,int col)
//////{
//////	int i=0;
//////	int j=0;
//////	int ret=0;
//////	for(i=0;i<row;i++)
//////	{
//////		for(j=0;j<col;j++)
//////		{
//////			if(board[i][0]==board[i][j]&&board[i][0]!=' ')
//////			{
//////				continue ;
//////			}
//////			else
//////			{
//////				break;
//////			}
//////		}
//////		if(j==col)
//////		{
//////			return board[i][0];			
//////		}
////////		if(board[i][col]==board[i][1]&&board[i][1]==board[i][2]&&board[i][0]!=' ')
////////		{
////////			return board[i][0];		
////////		}		
//////	}
//////	for(i=0;i<col;i++)
//////	{
//////		for(j=0;j<row;j++)
//////		{
//////			if(board[0][i]==board[j][i]&&board[0][i]!=' ')
//////			{
//////				continue ;
//////			}
//////			else
//////			{
//////				break;
//////			}
//////		}
//////		if(j==row)
//////		{
//////			return board[0][i];			
//////		}
////////		if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[0][i]!=' ')
////////		{
////////			return board[0][i];
////////		}
//////	}
////////	if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[0][0]!=' '||board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[0][2]!=' ')
////////	{
////////	      	return board[1][1];
////////	}
//////	for(i=0;i<row;i++)
//////	{
//////		if(board[0][0]==board[i][i]&&board[0][0]!=' ')
//////		{
//////			continue ;
//////		}
//////		else
//////		{
//////			break;
//////		}		
//////	}
//////	if(i==row)
//////	{
//////		return board[0][0];
//////	}
//////	for(i=0;i<row;i++)
//////	{		
//////		if(	board[0][row-1]==board[i][row-1-i]&&board[0][row-1]!=' ')
//////		{
//////			continue ;
//////		}
//////		else
//////		{
//////			break;
//////		}	
//////	}
//////	if(i==row)
//////	{
//////		return board[0][row-1];
//////	}                              
//////	if(boardfull(board,ROW,COL)==1)//�ߵ���һ����Ŀǰ����Ӯ���ж��Ƿ��������ˣ�����������ƽ�֣���������� 
//////	{
//////		return 'd';
//////	}	
//////	return 'c'; 
//////}
//////void game ()
//////{
//////	char ret=0;
//////	srand((unsigned int)time(NULL));
//////	char board[ROW][COL]={0};
//////	initboard(board,ROW,COL);
//////	display(board,ROW,COL);
//////	while(1)
//////	{
//////		//����� 
//////		playermove(board,ROW,COL);	
//////	    display(board,ROW,COL);	
//////	    //�ж� 	    
//////	    //*�����������Ӯ
//////		//#������������Ӯ
//////		//Continue������������
//////		//draw��������ƽ�� 
//////		ret=is_win(board,ROW,COL);
//////		if(ret!='c')
//////		    break;		
//////	    //������ 
//////	    computermove(board,ROW,COL);
//////	    display(board,ROW,COL);
//////	    ret=is_win(board,ROW,COL);
//////	    if(ret!='c')
//////		    break;
//////	}
//////	if(ret=='*')
//////	{
//////		printf("���Ӯ\n");
//////	}
//////	else if(ret=='#')
//////	{
//////		printf("����Ӯ\n"); 
//////	}
//////	else if(ret=='d')
//////	{
//////		printf("ƽ��\n");
//////	}	
//////}
//////void test()
//////{
//////	int input=0;
//////	do
//////	{
//////		menu();
//////	    printf("��ѡ����Ҫ�����Ϸ:>\n");
//////	    scanf("%d",&input);
//////	    switch(input) 
//////		{
//////			case 1:
//////				game();
//////				break; 
//////			case 0:
//////				printf("�˳���Ϸ\n");
//////				break;
//////			default:
//////				printf("�����������������\n");
//////				break;
//////		}
//////	}
//////	while(input);
//////}
//////int main()
//////{
//////	test();
//////	return 0;
//////}
//#include <stdio.h>
//#include <string.h>
//#include <time.h>
//#include <stdlib.h> 
//#define ROW 9
//#define COL 9
//#define ROWS (ROW+2)
//#define COLS (COL+2)
//#define count 10 
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
////{
////    test();
////	return 0;
////}
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//int main()
//{
//	//int arr[10]={1,2,3,4};
//	//char p[]="hehehe";z
//	int i=0;
//	char b[]="jjjjj";
////	*p=*b;
//	//printf("%s\n",p[5]);
//	assert(b!=NULL);
//	while(*b[]++)
//	{
//		printf("%c",*b);
//	//	b++;
//	}
//	//int arr1[10]={5,6,7,8};
////	strcpy(arr,arr1);
////	printf("%d   %d",arr[0],arr1[0]);
//	return 0;
//}
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















