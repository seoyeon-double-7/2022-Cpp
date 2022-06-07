#include <iostream>
using namespace std;

class Integer {
public:
	Integer();
	Integer(int x);
	void print(void);

	Integer operator+(const Integer& rhs);
private:
	int val;
};

Integer::Integer(){
	val = 0;
}
Integer::Integer(int x) :val(x) { }

void Integer::print() {
	cout << val << endl;
}

Integer Integer::operator+(const Integer& rhs)
{
	Integer integer;
	integer.val = val + rhs.val;
	return integer;
}

int main(void) {
	Integer a = Integer(1);
	Integer b = Integer(2);
	Integer c = a + b;
	c.print();	//3ÀÌ Ãâ·Â

	return 0;
}