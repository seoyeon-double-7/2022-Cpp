#include <iostream>	//cout, endl ���
#include <stdio.h>	//printf ���
#include <string.h>	//strcmp ���
#include <string>	//std::string Ŭ���� ���
using namespace std;

int main(void) {

	char cI[] = "aaa", cJ[] = "aaa", cK[] = "abc";
	//�� ���ڿ��� ������ 0, 0�� 0�� �����Ƿ� 1 ���
	printf("%d\n", strcmp(cI, cJ) == 0); 

	//������ aaa < abc
	//ù��° ���� �ι�° ������ �ڿ� ������ 1
	//ù��° ���� �ι�° ������ �տ� ������ -1
	//-1�� 0���� �����Ƿ� 1 ���
	printf("%d\n", strcmp(cI, cK) < 0);

	string cppI = "aaa", cppJ = "aaa", cppK = "abc";
	cout << (cppI == cppJ) << endl;   //���� ����
	cout << (cppI < cppK) << endl;   //������ aaa -> abc
	
	return 0;
}