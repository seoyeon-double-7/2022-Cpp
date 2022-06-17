#include <iostream>	// cout, endl 사용
#include <string.h>	// strcpy() 사용

using namespace std;

class Student
{
private:
	int nHakbun;
	char* sName;

public:
	// 생성자 : 객체가 생성되면 자동으로 호출되는 함수
	// 반환형을 갖고있지 않는다
	Student(int Hakbun, const char* Name);
	Student(const Student& rhs);
	~Student();

	Student& operator=(const Student& rhs);

	void show();
};

// 멤버변수를 초기화 할 수 있으며 따라서,
// const형 변수와 참조형 변수를 멤버변수로 할 수 있다.
Student::Student(int Hakbun, const char* Name)
	: nHakbun(Hakbun)	// 멤버변수(매개변수)
{
	cout << "Student 일반생성자 호출." << endl;
	int len = strlen(Name) + 1;		// 공간의 갯수 파악
	sName = new char[len];			// 갯수만큼 메모리 할당
	strcpy(sName, Name);
}

// 직접 작성 안해도 컴파일러가 알아서 만들어주는
// 복사생성자
Student::Student(const Student& rhs)
	:nHakbun(rhs.nHakbun), sName(rhs.sName)
{
	cout << "Student 복사생성자 호출." << endl;
	int len = strlen(rhs.sName) + 1;
	sName = new char[len];
	strcpy(sName, rhs.sName);
}

Student::~Student()
{
	delete[]sName;
	cout << "Student 소멸자 호출" << endl;
}

void Student::show()
{
	cout << "학번은 " << nHakbun << "입니다" << endl;
	cout << "이름은 " << sName << "입니다" << endl << endl;
}

Student& Student:: operator=(const Student& rhs)
{
	nHakbun = rhs.nHakbun;
	sName = rhs.sName;

	return *this;	// 자기자신 객체(&)
}

class HighSchoolStudent : public Student 
{
public:
	HighSchoolStudent(int Hakbun, const char* Name, bool isD) 
		:Student(Hakbun, Name), isDormitory(isD) 
	{
		cout << "HighSchoolStudent 일반 생성자 호출" << endl;
	}
	~HighSchoolStudent() {
		cout << "HighSchoolStudent 소멸자 호출" << endl;
	}
private:
	bool isDormitory;
};

int main(void)
{
	HighSchoolStudent hss = HighSchoolStudent(1111, "BSY", false);
	hss.show();

	return 0;
}