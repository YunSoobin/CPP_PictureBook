#include <iostream>

class Point {
public:
	int x, y;	// ��� ����
	void Print();	// ��� �Լ�
	Point();	// ������
};

Point::Point()	// �����ڿ��� x = 100, y = 100���� �ʱ�ȭ�մϴ�.
{
	x = 100;
	y = 100;
}

void Point::Print() {
	std::cout << "x : " << x << std::endl;
	std::cout << "y : " << y << std::endl;
}

int main() {
	Point point1;	// point1�̶� �̸����� ��ü�� �����մϴ�.
	
	point1.x = 50;	// x��ǥ�� 50���� �����մϴ�.
	
	point1.Print();	// point1�� ��ǥ�� ����մϴ�.
	
	return 0;
}