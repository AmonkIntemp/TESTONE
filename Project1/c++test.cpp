#include<iostream>
#include<E:\MyWorkSpace\VSWorkSpace\Project1\Myclass.h>
using namespace std;
void Student::func()
{
	cout << "func is here";
}

void Student::okk()
{


}

int main()
{
	Student t1;
	t1.Hello();
	cout << endl;
	t1.func();
	t1.set(1, 2);
}