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

	cout << "2차방정식 값을 입력하세요. => ";
	cin >> a>>b>>c;
	result = bang(a,b,c);
	
	cout << "구한 2차방정식값 " << result<< " 이다. \n";
}