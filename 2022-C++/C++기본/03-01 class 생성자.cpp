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
	Student();
	Student(int Hakbun, string Name);
	void show();
};

Student::Student()
{
	nHakbun = 1234;
	sName = "이사랑";
	cout << "학번이 등록되었습니다 히히힛 (*°▽ °*)" << endl;
}

// 멤버변수 초기화
//const형 변수, 참조형 변수를 멤버변수로 할 수 있음
Student::Student(int Hakbun, string Name)
	:nHakbun(Hakbun), sName(Name)	//멤버변수(매개변수)
{
	cout << "학번이 등록되었습니다 히히힛 (*°▽ °*)" << endl;
}
void Student::show()
{
	cout << "학번은 " << nHakbun << "입니다.";
	cout << "이름은 " << sName << "입니다." << endl;
}

int main(void) {
	//Student stu1 = Student();
	//stu1.show();

	//Student stu2 = Student(1111, "BSY");
	//stu2.show();

	int* ptr2 = new int[4];
	for (int i = 0; i < 4; i++) {
		ptr2[i] = 10 + i;
		cout << ptr2[i] << " ";
	}

	return 0;
}