#include<iostream>
using namespace std;

void plus2(int& num);

int main(void) {
	int a = 3;
	plus2(a);
	cout << a << endl;

	return 0;
}

void plus2(int& num)
{
	//num�� ������ �����̱⿡ *�� �ȽἭ ���ΰ��� ó��
	num += 2;
}