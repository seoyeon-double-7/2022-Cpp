#include<iostream>
using namespace std;

void jungjuk(void) {
	static int a = 0;	//�ѹ� �Ҵ�Ǹ� �� ���´�.
	cout << "���� �������� a�� " << a << endl;
	a++;
}

int main(void) {
	jungjuk();
	jungjuk();
	jungjuk();

	return 0;
}
