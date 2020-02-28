#include <iostream>
using namespace std;

int max3(int, int, int);
int min3(int, int, int);

void main()
{
	int a, b, c;
	cin>>a>>b>>c;
	cout << "가장 큰 값 " << max3(a,b,c) <<"\n";
	cout << "가장 작은 값 " << min3(a,b,c) <<"\n";
}

int max3(int x, int y, int z)
{
	int temp;
	temp = x>y ? x : y;
	temp = temp>z ? temp : z;

	return temp;
}

int min3(int x, int y, int z)
{
	int temp;
	temp = x<y ? x : y;
	temp = temp<z ? temp : z;

	return temp;
}
