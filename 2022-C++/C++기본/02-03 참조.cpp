#include<iostream>
using namespace std;

int main(void) {
	int a;

	//포인터로 a 값을 바꿈
	int* pa = &a;
	*pa = 30;	//a값이 30으로 바뀜
	cout << a << endl;

	//참조로 a값을 바꿈
	int& ra = a;
	ra = 50;
	cout << ra << endl;

	return 0;
}