#include <iostream>	//cout, endl ���
#include <string>
using namespace std;
class Student
{
private:
	int nHakbun;
	string sName;

	// ������ : ��ü�� �����Ǹ� �ڵ����� ȣ��Ǵ� �Լ�
	// ��ȯ���� ���� ���� �ʴ´�.
public:
	Student();
	Student(int Hakbun, string Name);
	void show();
};

Student::Student()
{
	nHakbun = 1234;
	sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ� ������ (*�ơ� ��*)" << endl;
}

// ������� �ʱ�ȭ
//const�� ����, ������ ������ ��������� �� �� ����
Student::Student(int Hakbun, string Name)
	:nHakbun(Hakbun), sName(Name)	//�������(�Ű�����)
{
	cout << "�й��� ��ϵǾ����ϴ� ������ (*�ơ� ��*)" << endl;
}
void Student::show()
{
	cout << "�й��� " << nHakbun << "�Դϴ�.";
	cout << "�̸��� " << sName << "�Դϴ�." << endl;
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