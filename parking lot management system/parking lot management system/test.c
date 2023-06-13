#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX 3   //停车场的最大车位数

//汽车信息
typedef struct Car
{
	char plateNumber[50];   //汽车车牌
	time_t approachTime;  //进如停车场时间
}Car;

//停车场（顺序栈）
typedef struct parkStack
{
	Car park[MAX];  //停车场的车位
	int top;        //栈指针
}parkStack;

//便道车位结点
typedef struct sidewalkNode
{
	Car position;   //数据域：便道中的一个车位
	struct sidewalkNode* next;      //指针域：指向下一个结点
}sidewalkNode;
//便道（链式队列）
typedef struct sidewalkQueue
{
	sidewalkNode* front;  //头指针
	sidewalkNode* rear;   //尾指针
}sidewalkQueue;


//初始化栈
void initStack(parkStack* p)
{	
	p->top = -1;
}


//初始化队列
void initQueue(sidewalkQueue* p)
{
	sidewalkNode* tmp = (sidewalkNode*)malloc(sizeof(sidewalkNode)); //创建一个头节点
	if (tmp == NULL)
	{
		printf("创建头结点失败！\n");
		return;
	}
	else
	{
		p->front = tmp; //头指针指向头结点
		p->rear = tmp;  //尾指针指向头结点
		p->front->next = NULL; //头结点指针域置空
	}
}


//主菜单
void menu()
{
	printf("****************************************\n");
	printf("***         欢迎来到停车场          ****\n");
	printf("***     停车场的收费标准是：1$/s    ****\n");
	printf("***       1.停车                    ****\n");
	printf("***       2.离开                    ****\n");
	printf("***       3.显示停车场信息          ****\n");
	printf("***       4.显示便道信息            ****\n");
	printf("***       0.退出程序                ****\n");
	printf("****************************************\n");
}

//判断停车场是否满，满返回1，否则返回0
int isFull(parkStack* p)
{
	return (p->top == MAX - 1 ? 1 : 0); //采用三目运算符进行判断
}

//判断停车场是否为空，空返回1，否则返回0
int isEmpty(parkStack* p)
{
	return (p->top == -1 ? 1 : 0); //采用三目运算符进行判断
}

//判断便道是否为空，空返回1，否则返回0
int isSidewalkEmpty(sidewalkQueue* sq)
{
	return (sq->front == sq->rear ? 1 : 0);
}

//出栈函数
void pop(parkStack* p, Car* ptmpCar)
{
	(*ptmpCar) = p->park[p->top--];
}

//入栈函数
void push(parkStack* ap, Car* ptmpCar)
{
	ap->park[++ap->top] = *ptmpCar;
}

//停车函数
void approach(parkStack* p, sidewalkQueue* sq)
{
	char number[50] = { 0 };
	printf("请输入车牌：");
	scanf("%s", number);
	if (!isFull(p)) //停车场是否满
	{
		//车辆停车
		printf("[开始停车]\n");
		strcpy(p->park[++p->top].plateNumber, number); //存储车牌
		time(&p->park[p->top].approachTime); //获取当前停车时间戳
		//ctime( )函数可以将时间戳转成人类可以直接看的懂的时间格式，如：The time is Fri Apr 29 12:25:12 1994
		printf("当前时间：%s", ctime(&p->park[p->top].approachTime));
		printf("车牌为%s的车停放在停车场%d号车位\n", p->park[p->top].plateNumber, p->top + 1);
		printf("[停车结束]\n");
	}
	else
	{
		//只能停在便道等待
		sidewalkNode* tmp = (sidewalkNode*)malloc(sizeof(sidewalkNode)); //为新来的车辆开辟一个空间
		if (tmp != NULL)
		{
			strcpy(tmp->position.plateNumber, number); //存放车牌
			tmp->next = NULL;
			sq->rear->next = tmp; //紧跟在便道中的车辆之后，即链接在已有结点之后
			sq->rear = tmp;  //修改队尾指针
		}
		printf("停车场已满，车辆只能停放在便道等候！\n");
		int count = 0;
		sidewalkNode* p = sq->front->next;
		while (p != NULL)
		{
			count++;
			p = p->next;
		}
		printf("车牌为%s的车停放在便道%d号车位\n", sq->rear->position.plateNumber, count);
	}
}


//离开函数
void leave(parkStack* p, parkStack* ap, sidewalkQueue* sq)
{
	if (!isEmpty(p)) //检查停车场是否空
	{
		char number[50] = { 0 };
		printf("请输入离开的车牌：");
		scanf("%s", number);
		int n = p->top;
		int post = 0; //记录车辆停放的位置
		while (n > -1)  //检查停车场是否有该车辆
		{
			if (!strcmp(p->park[n].plateNumber, number))
			{
				post = n;
				break;
			}
			n--;
		}
		if (n == -1)
		{
			printf("停车场没有该车辆！\n");
		}
		else
		{
			Car tmpCar;
			time_t timer;
			while (p->top > post) //在该车辆之后进来的车辆全部入辅助栈
			{
				pop(p, &tmpCar); //车辆离开停车场，相当于出栈，并将元素存入到tmpCar中
				push(ap, &tmpCar); //车辆进入辅助栈，相当于入栈，将元素存入到辅助栈中
			}
			time(&timer); //获取时间戳
			long long total = timer - p->park[p->top].approachTime; //车辆总共停了多少秒
			long long h = total / 120; //计算停车多少小时
			long long m = (total - h * 120) / 60; //计算停车多少分钟
			long long s = total - h * 120 - m * 60; //计算停车多少秒
			printf("当前时间：%s", ctime(&timer));
			printf("车牌为%s的车辆离开停车场\n", p->park[p->top].plateNumber);
			printf("车辆停车时间总计：%lld时%lld分钟%lld秒，应缴费%lld元\n", h, m, s, total);
			p->top--; //该车辆出栈
			while (!isEmpty(ap)) //让路的车辆按照原来的次序回到停车场
			{
				pop(ap, &tmpCar);
				push(p, &tmpCar);
			}
			if (!isSidewalkEmpty(sq)) //如果便道不空，将便道中最前面的车入停车场，即队头元素出队
			{		
				sidewalkNode* s = NULL;
				s = sq->front->next; //s指向要删除的结点
				time(&s->position.approachTime); //记录汽车进入停车场时间
				printf("当前时间为：%s", ctime(&s->position.approachTime));
				printf("便道中车牌为%s的车辆进入停车场\n", s->position.plateNumber);
				p->park[++p->top] = s->position; //结点入栈（相当于便道中的汽车进入停车场）
				sq->front->next = s->next; //防止链队断裂
				free(s); //释放结点空间
			}
		}
	}
	else
	{
		printf("停车场为空！\n");
	}
}


//显示停车场信息
void showParking(parkStack* p)
{
	int i = 0;
	printf("[开始显示信息]\n");
	for (i = 0; i <= p->top; i++)
	{
		printf("车牌为%s的车辆停放在%d车位\n", p->park[i].plateNumber, i + 1);
	}
	printf("[显示结束，停车场目前停放了%d辆汽车]\n", p->top + 1);
}

//显示便道信息
void showSidewalk(sidewalkQueue* sq)
{
	printf("[开始显示信息]\n");
	sidewalkNode* p = sq->front->next; //让p指向便道中第一辆汽车（队头元素）
	int count = 0;
	while (p != NULL)
	{
		printf("车牌为%s的车辆停放在%d车位\n", p->position.plateNumber, ++count);
		p = p->next;
	}
	printf("[显示结束，便道目前停放了%d辆汽车]\n", count);
}

int main()
{
	parkStack park;  //创建一个栈，模拟停车场
	parkStack assistPark; //创建一个栈，辅助车辆离开
	sidewalkQueue squeue; //创建一个队列，模拟便道
	initStack(&park);  //初始化栈
	initStack(&assistPark);  //初始化栈
	initQueue(&squeue);  //初始化队列
	int input = 0;
	do
	{
		menu();
		printf("请输入你的选择：");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				//停车
				approach(&park, &squeue);
				break;
			case 2:
				//离开
				leave(&park, &assistPark, &squeue);
				break;
			case 3:
				//显示停车场信息
				showParking(&park);
				break;
			case 4:
				//显示便道信息
				showSidewalk(&squeue);
				break;
			case 0:
				//退出程序
				printf("退出停车场管理系统\n");
				break;
			default:
				printf("输入错误，请重新输入！\n");
		}
	} while (input);
	return 0;
}