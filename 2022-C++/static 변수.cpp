#include<iostream>
using namespace std;

void jungjuk(void) {
	static int a = 0;	//�ѹ� �Ҵ�Ǹ� �� ���´�.
	cout << "���� �������� a�� " << a << endl;
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