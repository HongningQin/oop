#include <iostream>

using namespace std;
class Student
{
private:
	int num;
	char name[20];
public:
	static int total;
	Student()
	{
		total++;
	}


	~Student()
	{
		total --;
	}
	Student(int n, const char *p = "Wang" );
	void GetName();
		int Getnum();
};
int Student::total;
Student::Student(int n, const char *p)
{
	num = n;
	strcpy(name, p); 
	total++;
}
void Student::GetName()
{
	cout << name << endl;
}
int Student::Getnum()
{
	return num;
}
int main()
{
	cout << "the number of all student:" << Student::total << endl;
	Student *p = new Student(13);
	cout<<"the number of all student:"<< Student::total << endl;
	cout << "the number of all student:" << p->total << endl;
	delete p;
	cout << "the number of all student:" << Student::total << endl;
	Student s[2];
	cout << "the number of all student:" << s[0].total << endl;
	cout << "the number of all student:" << s[1].total << endl;
	system("pause");
	return 0;
}