#include <iostream>

class Point {
public:
	void Print();	// ��� �Լ�
	void setXY(int num1, int num2);
	Point();

private:
	int x, y;	// ��� ����
};

Point::Point()	// �����ڿ��� x = 0, y = 0���� �ʱ�ȭ�մϴ�.
{
	x = 0;
	y = 0;
}

void Point::Print() {
	std::cout << "x: " << x << std::endl;
	std::cout << "y: " << y << std::endl;
}

void Point::setXY(int num1, int num2) {
	x = num1;
	y = num2;
}

int main() {
	Point point1;	// point1�̶� �̸����� Point Ŭ������ ��ü�� �����մϴ�.

	point1.setXY(30, 100);
	point1.Print();

	return 0;
}