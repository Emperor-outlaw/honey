#define _CRT_SECURE_NO_WARNINGS 1
#include "Sqlist.h"
void Check_Listspace(SqlistPtr L)
{
	if (L->length == L->list_size)
	{
		ElemType* ptr = NULL;
		ptr = realloc(L->elem, (LIST_INIT_SIZE + LIST_INCREAMENT)*sizeof(ElemType));
		if (ptr != NULL)
		{
			L->elem = ptr;
			L->list_size += LIST_INCREAMENT;
			printf("增容成功！\n");
		}
		else
		{
			printf("增容失败！\n");
		}
	}
}
Status List_init(SqlistPtr L)
{
	Status s = fail;
	L->elem = (ElemType*)malloc((LIST_INIT_SIZE + 1)*sizeof(ElemType));
	if (L->elem)
	{
		L->length = 0;
		L->list_size = LIST_INIT_SIZE;
		s = success;
	}
	return s;
}
void List_Destory(SqlistPtr L)
{
	if (L)
	{
		if (L->elem)
		{
			free(L->elem);
			L->elem = NULL;
		}
	}
}
void List_Clear(SqlistPtr L)
{
	if (L)
	{
		L->length = 0;
	}
}
int List_Empty(SqlistPtr L)
{
	if (L)
		return (L->length == 0);
}
int List_size(SqlistPtr L)
{
	if (L)
		return L->length;
}
Status List_Retrival(SqlistPtr L, int pos, ElemType *elem)
{
	Status s = range_error;
	if (L)
	{
		if (pos >= 1 && pos <= L->length)
		{
			*elem = L->elem[pos];
			s = success;
		}
	}
	return s;
}
Status List_Locate(SqlistPtr L, ElemType elem, int *pos)
{
	Status s = range_error;
	int i = 0;
	if (L)
	{
		for (i = 1; i <= L->length; i++)
		{
			if (elem = L->elem[i])
			{
				*pos = i;
				s = success;
				break;
			}
		}
	}
	return s;
}
Status List_insert(SqlistPtr L, int pos, ElemType elem)
{
	Status s = fail;
	int i = 0;
	Check_Listspace(L);
	if (L)
	{
		if (pos >= 1 && pos <= L->length+1)
		{
			for (i = L->length; i >= pos; i--)
			{
				L->elem[i + 1] = L->elem[i];
			}
			L->elem[pos] = elem;
			L->length++;
			s = success;
		}
	}
	return s;
}
Status List_delete(SqlistPtr L, int pos)
{
	Status s = fail;
	int i = 0;
	if (L)
	{
		if (pos >= 1 && pos <= L->length)
		{
			for (i = pos; i <= L->length; i++)
			{
				L->elem[i] = L->elem[i+1];
			}
			L->length--;
			s = success;
		}
	}
	return s;
}
Status List_prior(SqlistPtr L, int pos, ElemType* elem)
{
	Status s = fail;
	if (L)
	{
		if (pos > 1 && pos <= L->length)
		{
			*elem = L->elem[pos - 1];
			s = success;
		}
	}
	return s;
}
Status List_Next(SqlistPtr L, int pos, ElemType* elem)
{
	Status s = fail;
	if (L)
	{
		if (pos >= 1 && pos < L->length)
		{
			*elem = L->elem[pos + 1];
			s = success;
		}
	}
	return s;
}
void List_Print(SqlistPtr L)
{
	int i = 0;
	if (L)
	{
		if (L->length == 0)
		{
			printf("线性表为空！\n");
			return;
		}
		for (i = 1; i <= L->length; i++)
		{
			printf("%d ", L->elem[i]);
			if (i % 10 == 0)            //每打印10个换行
				printf("\n");
		}
	}
}
