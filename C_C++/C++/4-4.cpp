#include <iostream>
using namespace std;

struct namecard
{
	char name[20];
	char job[30];
	char tel[20];
	char email[40];
};

void main()
{
	struct namecard x={"���� ", "��ǻ�ͱ���� ", "32-4321 ", "   jws123.com "};
	struct namecard y;

	y=x; // call-by-value


	cout << "\n �̸�    ����       ����ó      �̸���";
	cout << "\n "<<x.name <<x.job <<x.tel << x.email<<"\n";
	cout << "\n "<<y.name <<y.job <<y.tel << y.email<<"\n";
}