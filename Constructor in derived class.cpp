#include <iostream>
using namespace std;

class A
{
public:
	A()
	{
		cout << "default constructor of A is called" << endl;
	}

	A(int i)
	{
		cout << "PRM constructor of A is called" << endl;
	}
};

class B : public A
{
public:
	B()
	{
		cout << "default constructor of B is called" << endl;
	}

	B(int x) : A(5)
	{
		cout << "PRM constructor of B is called" << endl;
	}
};

int main()
{
	B b;
	B d1;
	B d2(20);
}
