#include <iostream>	//cout, endl 사용
#include <stdio.h>	//printf 사용
#include <string.h>	//strcmp 사용
#include <string>	//std::string 클래스 사용
using namespace std;

int main(void) {

	char cI[] = "aaa", cJ[] = "aaa", cK[] = "abc";
	//두 문자열이 같으면 0, 0은 0과 같으므로 1 출력
	printf("%d\n", strcmp(cI, cJ) == 0); 

	//사전순 aaa < abc
	//첫번째 값이 두번째 값보다 뒤에 있으면 1
	//첫번째 값이 두번째 값보다 앞에 있으면 -1
	//-1은 0보다 작으므로 1 출력
	printf("%d\n", strcmp(cI, cK) < 0);

	string cppI = "aaa", cppJ = "aaa", cppK = "abc";
	cout << (cppI == cppJ) << endl;   //같은 글자
	cout << (cppI < cppK) << endl;   //사전순 aaa -> abc
	
	return 0;
}