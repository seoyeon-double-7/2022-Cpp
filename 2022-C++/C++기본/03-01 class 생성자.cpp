﻿#include <iostream>	//cout, endl 사용
#include <string>

using namespace std;

class Student
{
private:
	int nHakbun;
	const char* sName;

	// 생성자 : 객체가 생성되면 자동으로 호출되는 함수
	// 반환형을 갖고 있지 않는다.
public:
	Student();
	Student(int , const char*);
	void show();
};

Student::Student()
{
	nHakbun = 1234;
	sName = "이사랑";
	cout << "학번이 등록되었습니다 히히힛 (*°▽ °*)" << endl;
}

Student::Student(int nHakbun, const char* sName)
{
	this->nHakbun = nHakbun;
	this->sName = sName;
}
void Student::show()
{
	cout << "학번은 " << nHakbun << "입니다." << endl;
	cout << "이름은 " << sName << "입니다." << endl << endl;
}

int main(void) {
	Student student1;
	Student student2(1111, "BSY");
	student1.show();
	student2.show();

	return 0;
}