#include <iostream>
using namespace std;

void prn(int *pa, int size);

int sumarr(int *pa, int size)
{
	int result=0;

	for(int i=0; i<size; i++)
	{
		result+=pa[i];
	}
	return result;
}

void main()
{
	int a[5] = {10, 20, 30, 40, 50};
	prn(a, 5);

	cout << " �迭 ���� �� : " << sumarr(a,5) << endl;
	cout << " main �Լ� : sizeof(a) => " << sizeof(a) << endl;
}

void prn(int a[], int size)
{
	for(int i=0; i<size; i++)
		cout << " " <<a[i];
	cout << "\n";
	cout << " prn �Լ� : sizeof(a) => " << sizeof(a) << endl;
}