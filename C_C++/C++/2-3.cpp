#include <iostream>
#include <math.h>

using namespace std;

int bang (int x, int y, int z)
{
	int a,b,c;

	a=-y;
	b=sqrt(y*y-4*x*z);
	c=2*x;

	return (a+b)/c;
}

void main()
{
	int a,b,c;
	int result=0;

	cout << "2�������� ���� �Է��ϼ���. => ";
	cin >> a>>b>>c;
	result = bang(a,b,c);
	
	cout << "���� 2�������İ� " << result<< " �̴�. \n";
}