#define _CRT_SECURE_NO_WARNINGS 1
//×Ö·û´®½âÂë
#include <stdio.h>
typedef struct Stack
{
	char arr[3000];
	int top;
}Stack, *PStack;

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
	int ret = pstack1->arr[pstack1->top--] - '0';
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
	char sarr[] = "ab9[d]9[c]";
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