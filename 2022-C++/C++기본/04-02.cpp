#include <iostream>	//cout, endl 사용
using namespace std;

class Point 
{
public:
	// 생성자
	Point();
	Point(int mX, int mY);
	void print(void);

	// 연산자 오버로딩
	Point operator+(const Point& rhs);

private:
	int mX, mY;
};

Point::Point() {}
Point::Point(int mX, int mY) :mX(mX), mY(mY) {}

void Point::print() {
	cout << "(" << mX << ", " << mY << ")" << endl;
}

Point Point::operator+(const Point& rhs)
{
	Point point;
	point.mX = mX + rhs.mX;  
	point.mY = mY + rhs.mY;
	return point;
}

int main(void) {
	Point p1(1, 2);
	Point p2(3, 4);
	Point sum = p1 + p2;
	sum.print();
	return 0;
}