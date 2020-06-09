#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#define MAX 3  //停车场的车位
#define N 2    //候车场的车位

//停车场结构体（栈）
typedef struct Stack
{
	int NUM[MAX];             //汽车的编号
	clock_t time_start[MAX];  //汽车进场的时间
	clock_t time_finish[MAX]; //汽车离场的时间
	int top;                  //栈指针
}Sqstack;
//候车场结构体（队列）
typedef struct Queue
{
	//为了区分队列满和队列空，一般是牺牲一个结点，所以这里是N + 1,多余分配一个空间
	int NUM[N + 1];          //汽车的编号
	int front;               //队头指针
	int rear;                //队尾指针
}Sqqueue;

//------------以下是候车场相关的函数-------------------
//初始化候车场
void Sqqueue_init(Sqqueue **p)
{
	//动态分配一个候车场空间
	(*p) = (Sqqueue *)malloc(sizeof(Sqqueue));
	assert(*p);
	(*p)->front = 0;
	(*p)->rear = 0;
}
//判断候车场是否停满
int Sqqueque_full(Sqqueue *p)
{
	return ((p->rear + 1) % (N + 1) == p->front);
}
//判断候车场是否空着
int Sqqueue_empty(Sqqueue *p)
{
	return (p->rear == p->front);
}
//显示候车场信息
void play_Sqqueue(Sqqueue *p)
{
	if (Sqqueue_empty(p))
	{
		printf("候车场里没有车！\n");
		return;
	}
	for (int i = p->front; i != p->rear; i = (i + 1) % (N + 1))
	{
		printf("车牌号%d的车，停在候车场%d的位置！\n", p->NUM[i], i + 1);
	}
}



//----------------以下是停车场相关的函数------------------
//初始化停车场
void Sqstack_init(Sqstack **pp)
{
	//动态分配一个停车场空间
	(*pp) = (Sqstack *)malloc(sizeof(Sqstack));
	assert(*pp);
	(*pp)->top = -1;
}
//判断停车场是否停满
int stack_full(Sqstack *ptr1)
{
	return (ptr1->top == MAX - 1);
}
//判断停车场是否空
int Sqstack_empty(Sqstack *ptr1)
{
	return (-1 == ptr1->top);
}
//显示停车场信息
void play_Sqstack(Sqstack *ptr1)
{
	if (Sqstack_empty(ptr1))
	{
		printf("停车场里没有车！\n");
		return;
	}
	for (int i = 0; i <= ptr1->top; i++)
	{
		printf("车牌号%d的车，停放在停车场%d号位置！\n", ptr1->NUM[i], i + 1);
	}
}




//停车函数
void pull_up(Sqstack *ptr1, Sqqueue *p)
{
	time_t com_time;  //用于去显示进来的时间
	int license_number = 0;//存放车牌号
	if (!stack_full(ptr1))
	{
		//if进来，代表停车场没有满
		printf("请输入你的车牌号：");
		scanf("%d", &license_number);
		//将车放到停车场里面
		ptr1->top++;
		ptr1->NUM[ptr1->top] = license_number;  //将车号放入
		ptr1->time_start[ptr1->top] = clock();  //将停车这一刻的时间也放入
		time(&com_time);  //获取当前时间
		printf(">>现在时间是:%s>>车牌号%d的车，停放在停车场%d号位置!\n",ctime(&com_time), license_number, ptr1->top + 1);
	}
	else
	{
		if (!Sqqueque_full(p))
		{
			//if进来，代表候车场没有满
			//停车场满了，接下来来的车要停放在候车场
			printf("停车场已满，你需要暂时停在候车场,谢谢合作！\n");
			printf("请输入你的车牌号：");
			scanf("%d", &license_number);

			//将车停在候车场
			p->NUM[p->rear] = license_number;  //将车号放入
			time(&com_time);  //获取当前时间
			printf(">>现在时间是:%s>>车牌号%d的车，停放在候车场%d号位置！\n", ctime(&com_time), license_number, p->rear + 1);
			p->rear = (p->rear + 1) % (N + 1); //尾指针向后移动

		}
		else
		{
			printf("停车场和候车场已经全部停满,请明日再来！\n");
		}

	}
	
	
}

//离开函数（将车开离停车场）
void drive_away(Sqstack *ptr1, Sqstack *ptr2, Sqqueue *p)
{
	double ret = 0;
	time_t lev_time;  //用于去显示离开的时间
	int license_number = 0;//存放车牌号
	if (!Sqstack_empty(ptr1))
	{
		//if进来，代表停车场里有车
		printf("请输入你要开走的车牌号：");
		scanf("%d", &license_number);

		//查找该车是否在停车场内
		int i = 0;
		for (i = 0; i <= ptr1->top && ptr1->NUM[i] != license_number; i++)
			;
		if (i <= ptr1->top)
		{
			//if如果进来，代表在停车场内
			//将该车后面进来的车全部移到便道内，让该车出去（后来的先移动，栈的机制）
			i = ptr1->top - i;  //要从停车场移到便道的车的个数
			int tmp = i;        //要从便道移到停车场的车的个数
			while (i-- > 0)
			{
				ptr2->top++;
				ptr2->NUM[ptr2->top] = ptr1->NUM[ptr1->top];
				ptr1->top--;
			}
			//该车离开，显示出来
			time(&lev_time);
			ptr1->time_finish[ptr1->top] = clock();  //将离去这一刻的时间存放进去
			ret = (double)(ptr1->time_finish[ptr1->top] - ptr1->time_start[ptr1->top]); //汽车总共停放的时间（单位是ms）
			printf(">>现在时间是:%s>>你总共停留了%lfs,总消费%lf$\n", ctime(&lev_time), ret / CLK_TCK, (ret / CLK_TCK) * 1);//除以CLK_TCK（CLOCKS_PER_SEC ），将其转化为秒
			printf(">>车牌号为%d，停放在停车场%d号位置的车离开！\n", ptr1->NUM[ptr1->top], ptr1->top + 1);
			ptr1->top--;
			//将刚才移动到便道的车全部移动回来（最后移动进去的先移动出来，栈的机制）
			while (tmp-- > 0)
			{
				ptr1->top++;
				ptr1->NUM[ptr1->top] = ptr2->NUM[ptr2->top--];
			}
			if (!Sqqueue_empty(p))
			{
				//if进来，代表候车场里面有车，如果没有进来，代表停车场还没有把车停满
				//这时将候车场里最先进来的车移动到停车场里
				//这里只需要移动一次，为什么?因为，只有停车场内停满了车，候车场内才会有车，而此时停满的停车场往外开走一辆车(因为这个离开函数每次只执行一次，因为你每次只选一次2这个选项)，就空出一个位置，所以候车场内只能有一个车开进来
				ptr1->top++;
				ptr1->NUM[ptr1->top] = p->NUM[p->front];
				p->front = (p->front + 1) % (N + 1);
				//车进到停车场，开始计费
				ptr1->time_start[ptr1->top] = clock();
			}
		}
		else
		{
			printf("先森，该车没有在停车场内,你可能走错地方了！\n");
		}
	}
	else
	{
		printf("停车场为空!\n");
	}
}






void menu()
{
	printf("****************************************\n");
	printf("****        欢迎来到王氏停车场     *****\n");
	printf("****   本停车场的收费标准是：1$/s  *****\n");
	printf("****************************************\n");
	printf("***       1.停车       2.离场       ****\n");
	printf("***       3.显示停车场信息          ****\n");
	printf("***       4.显示候车场信息          ****\n");
	printf("***       0.退出程序                ****\n");
	printf("****************************************\n");
}

int main()
{
	int input = 0;
	Sqstack *ptr1 = NULL;  //创建指向停车场的指针
	Sqstack *ptr2 = NULL;  //创建指向便道的指针（便道：如果有车要离开，比这个车后来的车要全部要开出停车场，开到另一个地方让路，那个地方就称作便道（一般空间和停车场一样大））
	Sqqueue *p = NULL;     //创建指向侯车场的指针
	Sqstack_init(&ptr1);    //初始化停车场
	Sqstack_init(&ptr2);    //初始化便道
	Sqqueue_init(&p);       //初始化候车场
	do
	{
		menu();
		system("color 0D");
		printf("请输入你的选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			pull_up(ptr1, p);   //停车函数
			break;
		case 2:
			drive_away(ptr1, ptr2, p);//离开函数（将车开走）
			break;
		case 3:
			play_Sqstack(ptr1); //显示停车场信息
			break;
		case 4:
			play_Sqqueue(p);  //显示候车场信息
			break;
		case 0:
			printf("退出程序！\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input);
}