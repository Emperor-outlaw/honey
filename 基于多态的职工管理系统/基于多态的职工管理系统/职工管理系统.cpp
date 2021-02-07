#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include "workermanager.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

int main()
{
	WorkerManager wm;
	int ret = 0;
	do
	{
		wm.ShowMenu();
		cout << "请输入你的选择: "<< endl;
		cin >> ret;
		switch (ret)
		{
		case 1:
			//增加职工信息
			wm.AddEmp();
			system("pause");
			system("cls");
			break;
		case 2:
			//显示职工信息
			wm.DisplayEmp();
			system("pause");
			system("cls");
			break;
		case 3:
			//按编号删除离职职工
			wm.DeleteEmp();
			system("pause");
			system("cls");
			break;
		case 4:
			//修改职工信息
			wm.ModifyInformation();
			system("pause");
			system("cls");
			break;
		case 5:
			//查找职工信息
			wm.SearchEmp();
			system("pause");
			system("cls");
			break;
		case 6:
			//按照编号排序
			wm.Sort();
			system("pause");
			system("cls");
			break;
		case 7:
			//清空所有文档
			wm.Empty();

			break;
		case 0:
			//退出系统
			cout << "退出职工管理系统!" << endl;
			break;
		default:
			//清理屏幕，重新输入
			cout << "输入有误请重新输入!" << endl;
			break;
		}
	} while (ret);

	return 0;

}
