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
/*�Լ� �����ε��� �ʿ��� ������ �������� ������ ������ ���� ����ϴ� �Լ��� �̸��� �����ϰ� ����� �� �����Ƿ� ���α׷��� ���� �ۼ�*/
void main()
{
	int a=-10;
	cout << a <<"�� ���밪 : "<<abs(a)<<endl;

	double b=-3.4;
	cout << b <<"�� ���밪 : "<<fabs(b)<<endl;

	long int c=-20L;
	cout << c <<"�� ���밪 : "<<labs(c)<<endl;
}

