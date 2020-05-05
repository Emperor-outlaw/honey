#include <stdio.h>
#include <string.h>
#include <assert.h>
#define MAX 100
#define NAME_MAX 10
#define ADDR_MAX 30
#define SEX_MAX 4
#define TELE_MAX 12

enum Option
{
	EXIT,
	ADD,
	DELE,
	MODIFY,
	SEARCH,
	SHOW,
	SORT
};


typedef struct Peoinfor
{
	char NAME[NAME_MAX];
	char SEX[SEX_MAX];
	char AGE;
	char TELE[TELE_MAX];
	char ADDR[ADDR_MAX];
}Peoinfor;

typedef struct Contact
{
	Peoinfor date[MAX];//�����ʵ���ݵĿռ�
	int sz;//��¼��Ч���ݵĸ���
}Contact;

typedef struct S
{
	short arr[MAX];
	short tmp;
}S;



void InitContact(Contact* pcon);
void ADD_Contact(Contact* pcon);
void DELE_Contact(Contact* pcon);
void SHOW_Contact(Contact* pcon);
void SEARCH_Contact(Contact* pcon);