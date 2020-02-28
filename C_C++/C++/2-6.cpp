#include <iostream>
using namespace std;

int tsum (int *arr)
{
	int tot=0;

	for(int i=0; i<5; i++)
		tot+=arr[i];

	return tot;
}

int Cavg (int *arr)
{
	double avg;

	int tot=0;
	
	for(int i=0; i<5; i++)
	tot+=arr[i];

	avg=(double)tot/5.0;

	return avg;
}

void main()
{
	int a[5]={85, 90, 75, 100, 95};

	cout << "ÃÑÇÕ = " << tsum(a) <<"\n";
	cout << "Æò±Õ = " << Cavg(a) <<"\n";
}