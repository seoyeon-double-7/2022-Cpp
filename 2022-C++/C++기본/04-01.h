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