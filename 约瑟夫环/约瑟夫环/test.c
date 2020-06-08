#define _CRT_SECURE_NO_WARNINGS 1
//////约瑟夫环问题(1.链表 2.数组 3.递归)
//////1.单项循环链表解决
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//
//typedef struct Node
//{
//	int Date;
//	struct Node *next;
//}JoseNode, *HNode;
//
//void Jose_init(HNode h)
//{
//	assert(h);
//	//循环单链表
//	h->next = h;
//}
//
//void Jose_insert(HNode h, int n)
//{
//	HNode q = h;
//	HNode p = NULL;
//
//	//将头节点赋值为第一个人
//	h->Date = 1;
//	h->next = h;
//
//	//将剩余的 n - 1 个人依次插入到循环链表当中
//	for (int i = 2; i <= n; i++)
//	{
//		p = (HNode)malloc(sizeof(JoseNode));
//		p->Date = i;
//		q->next = p;
//		p->next = h;
//		q = q->next;
//	}
//}
//
//void Traverse_list(HNode h, int n)
//{
//	assert(h);
//	HNode p = h;
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", p->Date);
//		p = p->next;
//	}
//	printf("\n");
//}
//
//void Jose_delete(HNode h, int n ,int m)
//{
//	HNode p = h;
//	HNode q = NULL;
//	while (n-- > 1)
//	{
//		int k = m - 2;
//		while (k-- > 0)
//		{
//			p = p->next;
//		}
//		q = p->next;
//		printf("出局的人为：%d 号\n", q->Date);
//		p->next = q->next;
//		free(q);
//		p = p->next;
//	}
//	printf("最后获胜的人为: %d\n", p->Date);
//}
//
//
//int main()
//{
//	int N = 0;  //参与人数
//	int M = 0;  //出局密码
//	printf("请输入参与人数：");
//	scanf("%d", &N);
//	printf("请输入出局密码：");
//	scanf("%d", &M);
//
//	//创建一个头节点
//	HNode h = (HNode)malloc(sizeof(JoseNode));
//
//	//初始化单链表
//	Jose_init(h);
//
//	//单链表插入操作
//	Jose_insert(h, N);
//
//	//遍历循环列表
//	//Traverse_list(h, N);
//
//	//出局函数
//	Jose_delete(h, N, M);
//
//	return 0;
//}


//2.数组
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
////数组的第一种方法：
////准备工作
////N 代表参与的人数 ,M 代表出局的密码
////先创建一个N元素大小的数组(每个元素模拟一个人)，里面全部初始化为0(直接用calloc函数分配空间并且也自动初始化为0)，代表这个人没有被淘汰，如果数到某一个人要被淘汰，那么将该元素置为1，代表被淘汰；
////从第一个人开始数，数到M时这个人被淘汰（将该元素赋值为1，代表被淘汰），然后从被淘汰的下一个人重新开始数，数到M时这个人被淘汰，循环这个动作，直到所有人全部被淘汰（也就是数组里的元素全部被置为1）
////如何确定哪个人被淘汰（也就是哪个元素要被置为1），此时可以利用到数组下标，但是有一个问题，我们数组是从下标为0开始存放元素的，因此我们要淘汰的人的编号 = 数组的下标 + 1；
////现在设定一个计数器int number = 0（初始化为0，为什么设置为0，等会看程序的时候就会明白）。
////开始淘汰人
////判断第一个人是0（代表没有被淘汰），计数器加1(此时number = 1)，当前数组下标加1，指向下一个元素；
////判断第二个人是0（代表没有被淘汰），计数器加1（此时计数器number = 2），当前数组下标加1，指向下一个元素,此时number == M,那么就要对这个人淘汰（将这个人对应的元素赋值为1），然后对计数器清0（因为下次计数要重新开始从1计数）
////判断第三个人是0（代表没有被淘汰），计数器加1(此时number = 1)，当前数组下标加1，指向下一个元素；
////判断第四个人是0（代表没有被淘汰），计数器加1（此时计数器number = 2），当前数组下标加1，指向下一个元素,此时number == M,那么就要对这个人淘汰（将这个人对应的元素赋值为1），然后对计数器清0.
////此时这个数组已经访问到最后一个元素了，那么应该如何继续回到数组开头接着访问呢。我们开始淘汰人的时候采用的是每次判断一个人，当前数组的下标加1，当到达最后一个元素的时候，数组下标加1，数组就越界了，并没有回到数组开头继续访问（因为人并没有全部被淘汰，还要继续淘汰，目前已经到达最后一个元素，要接着下一个元素继续访问，然而数组的下一个元素已经没有了，所以要从数组开头继续访问）。
////当数组里面的元素很多时，第一遍，第二遍，第三遍可能都不能将数组里的元素全部淘汰，此时就要返回到数组的开头继续访问，如果能将数组循环起来，我们就很容易的一直访问下去。
////问题来了：那么如何将数组循环起来，我们将数组的下标循环起来就可以将数组循环起来（因为我们时通过下标来访问数组的）
////         大家想一想，第4个元素的下标是3，我们让下标3加1再取模(而这个模数就是参与的人数N)，结果是0，刚好是数组第一个元素的下标，我们此时就回到了数组的开头
////         有的同学可能会想：难道只有到达最后一个元素时用这个方法回到开头吗？那怎么确定到达最后一个元素了呢？
////         其实我们可以列出这个公式（从最后一个元素回到开头，也就是让数组循环起来的公式）：index = （index + 1）% N (index代表的是下标)
////         我们可以发现我们以后不用采用数组下标加1的方法向后访问，我们直接利用这个公式也可以达到同样的效果。当开始下标为0进来，带入公式结果下标是1，将下标1带进来，结果下标是2，等等将下标3（最后一个元素）带进来，结果下标是0，又回到了数组的开头，达到了循环的目的
////最后创建一个变量alive：记录存活着的人数，没淘汰一个人alive就要减1，直到等于0，程序结束
////注意：下面我采用动态开辟了一个数组空间，然后初始化为0(calloc函数自动初始化为0)。大家也可以直接分配一个N大小的数组空间，并且初始为0.
//
//void Joseph(int count, int doom)
//{
//	int alive = count;       //存活的人数
//	int number = 0;      //计数，当number == m 时就淘汰这个人
//	int index = 0;       //数组的下标
//	int *circle = NULL;  //数组指针（指向分配的空间）
//	circle = (int *)calloc(count, sizeof(int));  //创建一个n元素大小的空间数组
//	assert(circle);    //检查分配是否成功
//	检查分配是否成功也可以用这个方法
//	/*if (circle == NULL)
//	{
//		pritnf("分配空间失败！\n");
//		return;
//	}*/
//
//	只要alive > 0就继续淘汰下一个人
//	while (alive > 0)
//	{
//		number += 1 - circle[index];   //因为数组元素不是1就是0，0代表没有被淘汰，1代表被淘汰；如果是0，1-circle[index]这一项结果是1，number的结果就增加了1，相当于往后数了一次；如果是1，1-circle[index]这一项结果是0，number的结果就不变，相当于被淘汰的那个人就没有数进来；
//		if (number == doom)
//		{
//			如果if语句进来说明这个人要被淘汰
//			circle[index] = 1;   //将淘汰的这个人的赋值为1
//			1 == alive ? printf("%d ", index + 1) : printf("%d ", index + 1);//被淘汰的每个人打印出来
//			number = 0;  //将计数器置0，以方便下次重新计数
//			alive--;    //幸存人数减减
//		}
//		index = (1 + index) % count;  //下一个要被访问元素的下标
//	}
//	将分配的空间释放掉
//	free(circle);
//	circle = NULL;
//}
//int main()
//{
//	int N = 0;   //参与的人数
//	int M = 0;   //出局的密码
//	printf("请输入参与人数:");
//	scanf("%d", &N);
//	printf("请输入出局密码:");
//	scanf("%d", &M);
//
//	Joseph(N, M);
//
//	return 0;
//}

////数组的第二种方法
////对第一种方法进行了优化，对淘汰的元素进行删除，去除了if 语句对淘汰的人还要进行判断，减少了时间复杂度(这个算法和第一个算法数组里面元素值发生了变化)
//#include <stdio.h>
//#include <assert.h>
//#include <stdlib.h>
//
//void Joseph(int count, int doom)
//{
//	int alive = count;       //存活的人数
//	int number = 0;          //计数，当number == m 时就淘汰这个人
//	int index = 0;           //数组的下标
//	int curpoint = 0;        //指向当前元素的指针
//	int prepoint = 0;        //指向circle[curpoint]的前驱
//	int *circle = NULL;      //数组指针（指向分配的空间）
//	circle = (int *)calloc(count, sizeof(int));  //创建一个n元素大小的空间数组
//	assert(circle);          //检查分配是否成功
//	
//	//初始化数组
//	for (index = 0; index < count; index++)
//	{
//		circle[index] = (index + 1) % count;
//	}
//
//	//只要alive > 0就继续淘汰下一个人
//	while (alive > 0)
//	{
//		number++;   
//		if (number == doom)
//		{
//			//如果if语句进来说明这个人要被淘汰
//			circle[prepoint] = circle[curpoint];  //删除操作
//			1 == alive ? printf("%d ", curpoint + 1) : printf("%d ", curpoint + 1);
//			alive--;
//			number = 0;
//		}
//		else
//		{
//			prepoint = curpoint;
//		}
//		curpoint = circle[curpoint];
//
//		////上面的if判段也可以换成while循环，直接向后连续访问，直接找到要淘汰的人
//		//number = doom - 1;
//		//while (number-- > 0)
//		//{
//		//	prepoint = curpoint;
//		//	curpoint = circle[curpoint];
//		//}
//		//circle[prepoint] = circle[curpoint];  //删除操作
//		//1 == alive ? printf("%d ", curpoint + 1) : printf("%d ", curpoint + 1);
//		//alive--;
//		//curpoint = circle[curpoint];
//	}
//	//将分配的空间释放掉
//	free(circle);
//	circle = NULL;
//}
//int main()
//{
//	int N = 0;   //参与的人数
//	int M = 0;   //出局的密码
//	printf("请输入参与人数:");
//	scanf("%d", &N);
//	printf("请输入出局密码:");
//	scanf("%d", &M);
//
//	Joseph(N, M);
//
//	return 0;
//}



////数组的第三种方法
////对第二种方法进行了优化，去除了计数器，并且去除了每一次的判断，每次直接定位到要淘汰的人
//#include <stdio.h>
//#include <assert.h>
//#include <stdlib.h>
//
//void Joseph(int count, int doom)
//{
//	int alive = count;       //存活的人数
//	int index = 0;           //数组的下标
//	int curpoint = 0;        //指向当前元素的指针
//	int prepoint = 0;        //指向circle[curpoint]的前驱
//	int *circle = NULL;      //数组指针（指向分配的空间）
//	circle = (int *)calloc(count, sizeof(int));  //创建一个n元素大小的空间数组
//	assert(circle);          //检查分配是否成功
//
//	//初始化数组
//	for (index = 0; index < count; index++)
//	{
//		circle[index] = (index + 1) % count;
//	}
//
//	//只要alive > 0就继续淘汰下一个人
//	while (alive > 0)
//	{
//		//直接计算出要移动的次数（其实循环控制条件在剩余最后doom个元素时做了优化）
//		int num = doom % alive - 1;
//		for (int i = 0; i < (num == -1 ? alive - 1 : num); i++)
//		{
//			prepoint = curpoint;
//			curpoint = circle[curpoint];
//		}
//
//
//		circle[prepoint] = circle[curpoint];  //删除操作
//		1 == alive ? printf("%d ", curpoint + 1) : printf("%d ", curpoint + 1);
//		alive--;
//		curpoint = circle[curpoint];
//	}
//	//将分配的空间释放掉
//	free(circle);
//	circle = NULL;
//}
//int main()
//{
//	int N = 0;   //参与的人数
//	int M = 0;   //出局的密码
//	printf("请输入参与人数:");
//	scanf("%d", &N);
//	printf("请输入出局密码:");
//	scanf("%d", &M);
//
//	Joseph(N, M);
//
//	return 0;
//}




////用公式法(求N个人参与时，最终获胜者的编号)
////其实无论用单项循环链表、队列，循环数组等等，时间复杂度高达O(nm)，有的甚至达到O(n^2),如果参加的人数和出局密码足够大，更加困难算出
////此时就可以利用数学来对问题分析简化
////f[1] = 0
////f[N, M] = (f[N - 1, M] + M) % N
//#include <stdio.h>
//int Jose_recursion(int count, int doom)
//{
//	if (0 == count)
//		return 0;
//	else
//		return (Jose_recursion(count - 1, doom) + doom) % count;
//}
//
//int main()
//{
//	int N = 0;
//	int M = 0;
//	printf("请输入参加的人数:");
//	scanf("%d", &N);
//	printf("请输入出局的密码:");
//	scanf("%d", &M);
//	int ret = Jose_recursion(N, M);
//	printf("最终获胜的人为:%d 号\n", ret + 1);
//	return 0;
//}
