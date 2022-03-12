#include <iostream>

class Point {
public:
	int x, y;	// 멤버 변수
	void Print();	// 멤버 함수
	Point();	// 생성자
};

Point::Point()	// 생성자에서 x = 100, y = 100으로 초기화합니다.
{
	x = 100;
	y = 100;
}

void Point::Print() {
	std::cout << "x : " << x << std::endl;
	std::cout << "y : " << y << std::endl;
}

int main() {
	Point point1;	// point1이란 이름으로 객체를 생성합니다.
	
	point1.x = 50;	// x좌표를 50으로 설정합니다.
	
	point1.Print();	// point1의 좌표를 출력합니다.
	
	return 0;
}