#include <iostream>

class Point {
public:
	void Print();	// 멤버 함수
	void setXY(int num1, int num2);
	Point();

private:
	int x, y;	// 멤버 변수
};

Point::Point()	// 생성자에서 x = 0, y = 0으로 초기화합니다.
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
	Point point1;	// point1이란 이름으로 Point 클래스의 객체를 생성합니다.

	point1.setXY(30, 100);
	point1.Print();

	return 0;
}