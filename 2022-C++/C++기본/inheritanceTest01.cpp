#include <iostream>	
#include <string.h>
using namespace std;

class Person {
private:
	string sName;
	int nAge;
public:
	Person();
	Person(string, int);
	void hi();
};


class Student :public Person {
public:
	int nHakbun;
	Student();
	Student(string, int, int);
	void study();
};

Person::Person() {
	sName = "익명";
	nAge = 0;
}
Person::Person(string name, int age)
	:sName(name), nAge(age)
{
}
void Person::hi() {
	cout << "이름 : " << sName << endl;
	cout << "나이 : " << nAge << endl;
}

void Student::study() {

}

Student::Student() : Person() {
	nHakbun = 0;
}

Student::Student(string name, int age, int hakbun)
	: Person(name, age), nHakbun(hakbun) {
	;
}

int main(void) {
	Person p = Person();
	p.hi();

	Person* p1 = new Person();
	p1->hi();

	Person* p2 = new Person("배서연", 18);
	p2->hi();

	Person* p3 = new Person[5];
	for (int i = 0; i < 5; i++) {
		p3[i].hi();
	}

	delete p1, p2;
	delete[]p3;

	return 0;
}