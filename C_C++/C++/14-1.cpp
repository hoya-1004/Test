#include <iostream>
using namespace std;

template <typename T>

T abs (T num)
{
	if(num<0)
		num=-num;
	return num;
}

void main()
{
	int a=-10;
	cout << a <<" ���밪 "<<abs(a)<<endl;

	double b=-3.4;
	cout << b <<" ���밪 "<<abs(b)<<endl;

	long int c=-20L;
	cout << c <<" ���밪 "<<abs(c)<<endl;
}
