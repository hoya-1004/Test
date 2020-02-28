#include <iostream>
using namespace std;

int abs(int num)
{
	if(num<0)
		num=-num;
	return num;
}

double fabs(double num)
{
	if(num<0)
		num=-num;
	return num;
}

long int labs(long int num)
{
	if(num<0)
		num=-num;
	return num;
}
/*함수 오버로딩이 필요한 이유는 다형성을 동일한 목적을 위해 사용하는 함수의 이름을 동일하게 사용할 수 있으므로 프로그램을 쉽게 작성*/
void main()
{
	int a=-10;
	cout << a <<"의 절대값 : "<<abs(a)<<endl;

	double b=-3.4;
	cout << b <<"의 절대값 : "<<fabs(b)<<endl;

	long int c=-20L;
	cout << c <<"의 절대값 : "<<labs(c)<<endl;
}

