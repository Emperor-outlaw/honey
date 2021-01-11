#define _CRT_SECURE_NO_WARNINGS 1
#include "point.h"
#include "circle.h"

//判断点和圆的关系
void iscenter(point &point, circle &C)
{
	//计算点和圆心距离的平方
	int distance = ((C.get_center().get_x() - point.get_x()) * (C.get_center().get_x() - point.get_x())) + 
		           ((C.get_center().get_y() - point.get_y()) * (C.get_center().get_y() - point.get_y()));
	cout << "distance = " << distance << endl;
	//计算半径的平方
	int r_distance = C.get_r() * C.get_r();
	cout << "r_distance= " << r_distance << endl;
	//判断关系
	if (distance > r_distance)
		cout << "在圆外" << endl;
	else if (distance < r_distance)
		cout << "在圆内" << endl;
	else
		cout << "在圆上" << endl;
}
int main()
{
	//创建一个点
	point Point;
	//设置点的坐标
	Point.set_point(10, 11);

	//创建一个圆
	circle C;
	//设置圆的半径
	C.set_r(10);
	//设置圆心
	point p;
	p.set_point(10, 0);
	C.set_center(p);

	//判断关系
	iscenter(Point, C);

	system("pause");
	return 0;
}