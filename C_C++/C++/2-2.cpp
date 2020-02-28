#include <iostream>

using namespace std;

void sum(int a, int b)
{
	cout<<"a+b=" << a+b <<"\n";
}

void minus(int a, int b)
{
	cout<<"a-b=" << a-b <<"\n";
}

void c(int a, int b)
{
	cout<< "a*b=" << a*b <<"\n";
}

void d(int a, int b)
{
	cout<< "a/b=" << a/b <<"\n";
}

void main()
{
	int a=20, b=10;
	sum(a, b);
	minus(a, b);
	c(a, b);
	d(a, b);
}