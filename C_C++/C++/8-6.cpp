#include <iostream>
using namespace std;

void printstr(char *); //문자열을 매개변수로 받는 
void printstr(char, int); //단일문자와 정수를 매개변수로 받는

/*함수의 오버로딩은 함수의 이름을 동일하게 하여 여러 번 오버로딩하되 함수를
호출 할 때 모호하지 않도록 하기 위해서 매개변수의 개수나 매개변수의 자료형을 다르게 주는 것을 의미*/
void main()
{
	printstr("I'm Sorry"); 
	printstr('a',3);
}

void printstr(char *string)
{
	cout << string << endl;
}

void printstr(char ch, int cnt)
{
	for(int i = 0; i<cnt; i++)
	{
		cout << ch;
	}
	cout << endl;
}
