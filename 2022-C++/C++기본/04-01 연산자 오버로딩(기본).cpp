#include <iostream>	//cout, endl »ç¿ë
using namespace std;

class Point 
{
private:
	int mX, mY;
public:
	Point(int mX, int mY);
	void show();
};

Point::Point(int mX, int mY) :mX(mX), mY(mY) {}

void Point::show() {
	cout << "(" << mX << ", " << mY << ")" << endl;
}

int main(void) {
	Point p1(1, 2);
	p1.show();

	return 0;
}