#include<iostream>
using namespace std;

void jungjuk(void) {
	static int a = 0;	//한번 할당되면 쭉 남는다.
	cout << "정적 지역변수 a는 " << a << endl;
	a++;
}

int main(void) {
	//jungjuk();
	//jungjuk();
	//jungjuk();

	int arr[4] = { 1,2,3,4 };
	for (int i = 0; i < 4; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}