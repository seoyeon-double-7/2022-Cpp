#include<iostream>
using namespace std;

void plus2(int* num);

int main(void) {
	int a = 3;
	//������ �Ű����� num���� �ּҰ����� ����
	plus2(&a);
	cout << a << endl;

	return 0;
}

void plus2(int* num)
{
	//������ �����̱⿡ ���ΰ��� *�� �Ἥ ó��
	*num += 2;
}