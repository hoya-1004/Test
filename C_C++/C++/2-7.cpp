#include <iostream>
using namespace std;

void show()
{
	cout <<"********************\n";
	return;
}

void print_pinfo(void)
{
	cout <<"이름 : 정 \n";
	cout <<"학번 : 2009 \n";
	cout <<"주소 : 바텍 \n";
}


void main()
{
	cout<<"함수 호출하기전 \n";
	show();
	print_pinfo();
	cout<<"함수 호출한 후 \n";
}