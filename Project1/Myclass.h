#include<iostream>
using namespace std;
class Student
{
public:
	void Hello()
	{
		cout << "i am fine";
	}
	int num;
	void func();
	void set(int a, int b)
	{
		this->a = a;
		this->b = b;
		cout << endl;
		cout << this->a;
		cout << this->b;
	}
private:
	int a;
	int b;
};

class Teacher
{
	int a;
	int b;
};