#include <iostream>	// cout, endl 사용
#include <string.h>
#include <string>

using namespace std;

class Teacher
{
public:
	void teach();
	void eat();

private:
	string english = "정혜선";
	string korean1 = "손명수";
	string korean2 = "이대형";
	string math = "김호연";
	string science = "권지웅";
	string DS = "이재민";
	string PE = "고낙은";
	string js = "유병석";
	string cpp = "박지우";
	string java = "이호걸";
	string socialStudy = "이철호";
	string dream = "이정임";
	string codingTest = "이형섭";
};

class Mirim
{
public:
	void shcoolHistory();	//학교 연혁
	void ITshow();	//IT쇼
private:
	Teacher teacher;
};

class Student : public Mirim
{
public:
	void programming();
	void sleep();
	void eat();
	void sing();
	void rideBus();

private:
	int classTeacher;
	string name;
	string ban;
};