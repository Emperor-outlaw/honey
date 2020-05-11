#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <stdlib.h>
#define Capacity_MAX 5
#define NAME_MAX 15
#define ADDR_MAX 30
#define SEX_MAX 5
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
	int AGE;
	char TELE[TELE_MAX];
	char ADDR[ADDR_MAX];
}Peoinfor;

//typedef struct Contact
//{
//	Peoinfor date[MAX];//存放真实数据的空间
//	int sz;//记录有效数据的个数
//}Contact;
//动态内存管理
typedef struct Contact
{
	Peoinfor* date;
	int sz;//记录有效数据的个数
	int Capacity;//容量
}Contact;

//创建一个用于搜索来，存放人的信息的结构体
typedef struct S
{
	short tmp;
	short arr[1000];//只能存1000个人
}S;




void InitContact(Contact* pcon);
void ADD_Contact(Contact* pcon);
void DELE_Contact(Contact* pcon);
void SHOW_Contact(Contact* pcon);
void SEARCH_Contact(Contact* pcon);
void MODIFY_Contact(Contact* pcon);
void SORT_Contact(Contact* pcon);
void Destory_Contact(Contact* pcon);
void Save_Contact(Contact* pcon);
//void Save1_Contact(Contact* pcon);

S* Find_byname(Contact* pcon, char* pname);
S* Find_byage(Contact* pcon, int* page);
S* Find_bysex(Contact* pcon, char* psex);
S* Find_bytele(Contact* pcon, char* ptele);
S* Find_byaddr(Contact* pcon, char* paddr);
