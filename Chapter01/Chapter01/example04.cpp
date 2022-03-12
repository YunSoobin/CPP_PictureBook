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
}	// x, y를 초기화 및 초기값 표시

void Point::moveLeft() {
	x = x - 1;
	Print();
}	// x값을 1 감소시켜 왼쪽 이동

void Point::moveRight() {
	x = x + 1;
	Print();
}	// x값을 1 증가시켜 왼쪽 이동


void Point::Print() {
	cout << x << " " << y << endl;
}	// 값을 표시

int main() {
	Point p;

	p.moveLeft();
	p.moveLeft();
	p.moveRight();
	p.moveLeft();
	return 0;
}