#define _CRT_SECURE_NO_WARNINGS 1
//×Ö·û´®½âÂë
#include <stdio.h>
typedef struct Stack
{
	char arr[3000];
	int top;
}Stack, *PStack;

int get_count(PStack pstack1)
{
	int i = 1;
	int ret = 0;
	while (pstack1->arr[pstack1->top] >= '0' && pstack1->arr[pstack1->top] <= '9')
	{
		ret += (pstack1->arr[pstack1->top--] - '0') * i;
		i *= 10;
	}
	return ret;
}


//ÈëÕ»
void pull_stack(PStack pstack1, char c)
{
	pstack1->arr[++pstack1->top] = c;
}

//³öÕ»
void push_stack(PStack pstack1, PStack pstack2)
{
	while (pstack1->arr[pstack1->top] < '0' || pstack1->arr[pstack1->top] > '9')
	{
		pstack2->arr[++pstack2->top] = pstack1->arr[pstack1->top--];
	}
	int ret = get_count(pstack1);
	while (ret--)
	{
		int i = pstack2->top;
		while (i != -1)
		{
			pull_stack(pstack1, pstack2->arr[i--]);
		}
	}
	pstack2->top = -1;
}

int main()
{
	Stack stack1 = { { 0 }, { -1 } };
	Stack stack2 = { { 0 }, { -1 } };
	char sarr[] = "ab12[d13[c]]";
	int i = 0;
	while (sarr[i])
	{
		if (']' != sarr[i])
		{
			if ('[' != sarr[i])
			{
				pull_stack(&stack1, sarr[i]);
			}
		}
		else
		{
			push_stack(&stack1, &stack2);
		}
		i++;
	}
	printf("%s", stack1.arr);
	return 0;
}