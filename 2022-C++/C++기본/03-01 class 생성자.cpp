﻿#include <iostream>	//cout, endl 사용
#include <string>

using namespace std;

class Student
{
private:
	int nHakbun;
	string sName;

	// 생성자 : 객체가 생성되면 자동으로 호출되는 함수
	// 반환형을 갖고 있지 않는다.
public:
	Student()
	{
		nHakbun = 1234;
		sName = "이사랑";
		cout << "학번이 등록되었습니다 히히힛 (*°▽ °*)" << endl;
	}
};

int main(void) {
	Student stu;

	return 0;
}