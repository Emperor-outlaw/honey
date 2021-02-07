#pragma once
#include <iostream>
#include "worker.h"
using namespace std;
class WorkerManager
{
public:
	//构造函数
	WorkerManager();

	//显示菜单
	void ShowMenu();

	//添加职工
	void AddEmp();

	//显示职工
	void DisplayEmp();

	//将数据添加到文件中
	void Save();

	//文件是否为空标志
	bool m_FileIsEmpty;

	//获取文件中职工的数目
	int GetFileNum();

	//初始化职工数组
	void InitEmpArr();

	//按编号判断员工是否存在(存在返回在数组中的下标)
	int IsExit(int ret);

	//按员工编号删除员工
	void DeleteEmp();

	//修改职工信息
	void ModifyInformation();

	//查找职工信息
	void SearchEmp();

	//按照编号排序
	void Sort();

	//清空文档
	void Empty();

	//析构函数
	~WorkerManager();

	//记录职工的人数
	int m_AllNum;

	//职工数组的指针
	Worker **m_EmpArr;
};