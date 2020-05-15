#define _CRT_SECURE_NO_WARNINGS 1
#include "Sqlist.h"
Status List_init(SqlistPtr L)
{
	Status s = fail;
	Ptr ptr = NULL;
	ptr = (Ptr)malloc(sizeof(Node));
	if (ptr != NULL)
	{
		 *L = ptr;
		(*L)->elem = 0;
		(*L)->next = NULL;
		s = success;
	}
	return s;
}
Status List_Create(SqlistPtr L, ElemType arr[], int sz)
{
	Status s = fail;
	int i = 0;
	Ptr ptr = NULL;
	s = List_init(L);
	if (s == success)
	{
		for (i = sz - 1; i >= 0; i--)
		{
			ptr = (Ptr)malloc(sizeof(Node));
			if (ptr)
			{
				ptr->elem = arr[i];
				ptr->next = (*L)->next;
				(*L)->next = ptr;
			}
			else
			{
				s = fail;
				break;
			}
		}
	}
	return s;
}
void List_Destory(SqlistPtr L)
{
	List_Clear(L);
	free(*L);
	*L = NULL;
}
void List_Clear(SqlistPtr L)
{
	Ptr ptr = (*L)->next;
	while (ptr)
	{
		(*L)->next = ptr->next;
		free(ptr);
		ptr = NULL;
		ptr = (*L)->next;
	}
}
int List_Empty(SqlistPtr L)
{
	return ((*L)->next == NULL);
}
int List_size(SqlistPtr L)
{
	int count = 0;
	Ptr ptr = (*L)->next;
	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	return count;
}
Status List_Retrival(SqlistPtr L, int pos, ElemType *elem)
{
	Status s = fail;
	Ptr p = (*L)->next;
	int i = 1;
	while (i < pos && p)
	{
		p = p->next;
		i++;
	}
	if (i == pos && p)
	{
		*elem = p->elem;
		s = success;
	}
	return s;
}
Status List_Locate(SqlistPtr L, ElemType elem, int *pos)
{
	Status s = fail;
	Ptr p = (*L)->next;
	int i = 1;
	while (p && (elem != p->elem))
	{
		p = p->next;
		i++;
	}
	if (elem == p->elem)
	{
		*pos = i;
		s = success;
	}
	return s;
}
Status List_insert(SqlistPtr L, int pos, ElemType elem)
{
	Status s = fail;
	Ptr ptr = (*L)->next, p = NULL;
	int i = 1;
	if (pos == 1 && ptr)
	{
		p = (Ptr)malloc(sizeof(Node));
		p->elem = elem;
		p->next = ptr;
		(*L)->next = p;
		s = success;
	}
	else
	{
		while (i < pos - 1 && ptr)
		{
			ptr = ptr->next;
			i++;
		}
		if (i == pos - 1 && ptr)
		{
			p = (Ptr)malloc(sizeof(Node));
			p->elem = elem;
			p->next = ptr->next;
			ptr->next = p;
			s = success;
		}
	}
	return s;
}
Status List_delete(SqlistPtr L, int pos)
{
	Status s = fail;
	int i = 1;
	Ptr p = (*L)->next, q = NULL;
	while (i < pos  && p)
	{
		q = p;
		p = p->next;
		i++;
	}
	if (i == pos && p)
	{
		q->next = p->next;
		free(p);
		p = NULL;
		s = success;
	}
	return s;
}
Status List_prior(SqlistPtr L, int pos, ElemType* elem)
{
	Status s = fail;
	Ptr p = (*L)->next;
	int i = 1;
	while (i < pos - 1 && p)
	{
		p = p->next;
		i++;
	}
	if (i == pos - 1 && p)
	{
		*elem = p->elem;
		s = success;
	}
	return s;
}
Status List_Next(SqlistPtr L, int pos, ElemType* elem)
{
	Status s = fail;
	Ptr p = (*L)->next;
	int i = 1;
	while (i < pos  && p)
	{
		p = p->next;
		i++;
	}
	if (i == pos && p)
	{
		*elem = p->next->elem;
		s = success;
	}
	return s;
}
void List_Print(SqlistPtr L)
{
	Ptr p = (*L)->next;
	int i = 1;
	if (p)
	{
		printf("Á´±íÎª¿Õ£¡\n");
		return;
	}
	while (p)
	{
		printf("%-3d", p->elem);
		p = p->next;
		if (!(i % 10))
			printf("\n");
		i++;
	}
	printf("\n");
}