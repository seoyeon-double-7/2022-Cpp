#include <iostream>	// cout, endl ���
#include <string.h>
#include <string>

using namespace std;

class Teacher
{
public:
	void teach();
	void eat();

private:
	string english = "������";
	string korean1 = "�ո��";
	string korean2 = "�̴���";
	string math = "��ȣ��";
	string science = "������";
	string DS = "�����";
	string PE = "����";
	string js = "������";
	string cpp = "������";
	string java = "��ȣ��";
	string socialStudy = "��öȣ";
	string dream = "������";
	string codingTest = "������";
};

class Mirim
{
public:
	void shcoolHistory();	//�б� ����
	void ITshow();	//IT��
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