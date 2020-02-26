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
	struct namecard x={"정원 ", "컴퓨터기술자 ", "32-4321 ", "   jws123.com "};

	cout << "\n 이름    직업       연락처      이메일";
	cout << "\n "<<x.name <<x.job <<x.tel << x.email<<"\n";
}