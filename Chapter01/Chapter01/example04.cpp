#include <iostream>
using namespace std;

class Point {
public:
	Point();
	void moveLeft();
	void moveRight();
	void Print();
private:
	int x, y;
};

Point::Point() {
	x = y = 50;
	Print();
}	// x, y�� �ʱ�ȭ �� �ʱⰪ ǥ��

void Point::moveLeft() {
	x = x - 1;
	Print();
}	// x���� 1 ���ҽ��� ���� �̵�

void Point::moveRight() {
	x = x + 1;
	Print();
}	// x���� 1 �������� ���� �̵�


void Point::Print() {
	cout << x << " " << y << endl;
}	// ���� ǥ��

int main() {
	Point p;

	p.moveLeft();
	p.moveLeft();
	p.moveRight();
	p.moveLeft();
	return 0;
}