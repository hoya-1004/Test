#include <iostream>

using namespace std;

struct person
{
	struct name b; //내가 생각한것은 구조체 안에 구조체를 만든다고 생각했는데, 여기서는 선언만 하고
	               //밑에 구조체를 만든다.
	int age;
	int num;
	char address[30];
	int enter;	
};

struct name 
{
	char first_name[14];
	char last_name[6];
};

void main()
{
	struct person a;

	cout << " 성 입력 : ";
	cin>>a.b.first_name; //참조할때 a에 있는 구조체에서 b에 있는 성과 이름을 입력
	cout << " 이름 입력 : ";
	cin>>a.b.last_name;

	cout << " 나이 입력 : ";
	cin>>a.age;
	cout << " 학번 입력 : ";
	cin>>a.num;
	cout << " 주소 입력 : ";
	cin>>a.address;
	cout << " 입학년도 입력 : ";
	cin>>a.enter;

	cout <<"\n 성 \t 이름 \t 나이 \t 학번 \t 주소 \t 입학년도";
	cout <<"\n "<<a.b.first_name <<"\t" <<a.b.last_name <<"\t"<<a.age<< "\t" <<a.num << "\t" <<a.address << "\t" <<a.enter <<"\n";
}
