#include <iostream>
using namespace std;

int fmax (int *arr)
{
	int max;
	max = arr[0];

	for(int i=1; i<5; i++)
	{
		if(arr[i] > max)
			max = arr[i];
	}

	return max;
}

void main()
{
	int a[5];
	int i;

	cout << "정수형 데이터를 5개 입력 \n";

	for(i=0; i<5; i++)
	{
		cout<<" a[ "<< i << " ]==> ";
		cin >> a[i];
	}

	cout << "최대값 => " << fmax(a) << "\n";
}