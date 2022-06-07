#include "04-02.h"

Integer::Integer(void){}
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
	Integer c = a + b;	// c = a.operator+(b)
	c.print();	//3ÀÌ Ãâ·Â

	return 0;
}