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

	cout << "������ �����͸� 5�� �Է� \n";

	for(i=0; i<5; i++)
	{
		cout<<" a[ "<< i << " ]==> ";
		cin >> a[i];
	}

	cout << "�ִ밪 => " << fmax(a) << "\n";
}