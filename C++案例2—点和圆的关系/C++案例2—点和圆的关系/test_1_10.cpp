#define _CRT_SECURE_NO_WARNINGS 1
#include "point.h"
#include "circle.h"

//�жϵ��Բ�Ĺ�ϵ
void iscenter(point &point, circle &C)
{
	//������Բ�ľ����ƽ��
	int distance = ((C.get_center().get_x() - point.get_x()) * (C.get_center().get_x() - point.get_x())) + 
		           ((C.get_center().get_y() - point.get_y()) * (C.get_center().get_y() - point.get_y()));
	cout << "distance = " << distance << endl;
	//����뾶��ƽ��
	int r_distance = C.get_r() * C.get_r();
	cout << "r_distance= " << r_distance << endl;
	//�жϹ�ϵ
	if (distance > r_distance)
		cout << "��Բ��" << endl;
	else if (distance < r_distance)
		cout << "��Բ��" << endl;
	else
		cout << "��Բ��" << endl;
}
int main()
{
	//����һ����
	point Point;
	//���õ������
	Point.set_point(10, 11);

	//����һ��Բ
	circle C;
	//����Բ�İ뾶
	C.set_r(10);
	//����Բ��
	point p;
	p.set_point(10, 0);
	C.set_center(p);

	//�жϹ�ϵ
	iscenter(Point, C);

	system("pause");
	return 0;
}