#include <iostream>	//cout, endl ���
using namespace std;

class Point 
{
public:
	// ������
	Point();
	Point(int mX, int mY);
	void print(void);

	// ������ �����ε�
	Point operator+(const Point& rhs);

private:
	int mX, mY;
};