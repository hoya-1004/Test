#include <iostream>
using namespace std;

template <typename T>

T sum (T num1, T num2)
{
	return num1+num2;
}

void main()
{
	short a=10, b=15;
	cout <<"short �� : " << sum(a, b) <<endl;

	int c=10, d=15;
	cout <<"int �� : " << sum(c, d) <<endl;

	long int e=10, f=15;
	cout <<"long int �� : " << sum(e, f) <<endl;
	
	double g=5.5, h=3.5;
	cout <<"double �� : " << sum(g, h) <<endl;
}

